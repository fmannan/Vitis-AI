#
# Copyright 2019-2021 Xilinx, Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

source settings.tcl
set DIR_NAME "zstd_decompress"
set DESIGN_PATH "${XF_PROJ_ROOT}/L1/tests/${DIR_NAME}"
set PROJ "zstd_decompress.prj"
set SOLN "sol1"

if {![info exists CLKP]} {
  set CLKP 3.3
}

open_project -reset $PROJ
add_files $XF_PROJ_ROOT/common/libs/logger/logger.cpp -cflags "-I${XF_PROJ_ROOT}/common/libs/logger"
add_files $XF_PROJ_ROOT/common/libs/cmdparser/cmdlineparser.cpp -cflags "-I${XF_PROJ_ROOT}/common/libs/cmdparser -I${XF_PROJ_ROOT}/common/libs/logger"
add_files zstd_decompress_test.cpp -cflags "-I${XF_PROJ_ROOT}/L1/include/hw -I${XF_PROJ_ROOT}/L2/include -I${XF_PROJ_ROOT}/common/libs/cmdparser -I${XF_PROJ_ROOT}/common/libs/logger"

add_files -tb $XF_PROJ_ROOT/common/libs/logger/logger.cpp -cflags "-I${XF_PROJ_ROOT}/common/libs/logger"
add_files -tb $XF_PROJ_ROOT/common/libs/cmdparser/cmdlineparser.cpp -cflags "-I${XF_PROJ_ROOT}/common/libs/cmdparser -I${XF_PROJ_ROOT}/common/libs/logger"
add_files -tb zstd_decompress_test.cpp -cflags "-I${XF_PROJ_ROOT}/L1/include/hw -I${XF_PROJ_ROOT}/L2/include -I${XF_PROJ_ROOT}/common/libs/cmdparser"

set_top decompressFrame

open_solution -reset $SOLN


set_part $XPART
create_clock -period $CLKP

if {$CSIM == 1} {
  csim_design -argv "-f ${DESIGN_PATH}/sample.txt.zst -o ${DESIGN_PATH}/sample.txt"
}

if {$CSYNTH == 1} {
  csynth_design
}

if {$COSIM == 1} {
  cosim_design -disable_dependency_check -argv "-f ${DESIGN_PATH}/sample.txt.zst -o ${DESIGN_PATH}/sample.txt"
}

if {$VIVADO_SYN == 1} {
  export_design -flow syn -rtl verilog
}

if {$VIVADO_IMPL == 1} {
  export_design -flow impl -rtl verilog
}

exit