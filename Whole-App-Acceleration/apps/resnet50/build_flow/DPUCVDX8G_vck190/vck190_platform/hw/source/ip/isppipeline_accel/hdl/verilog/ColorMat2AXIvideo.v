// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2020.2
// Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module ColorMat2AXIvideo (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_continue,
        ap_idle,
        ap_ready,
        color_mat_rows_dout,
        color_mat_rows_empty_n,
        color_mat_rows_read,
        color_mat_cols_dout,
        color_mat_cols_empty_n,
        color_mat_cols_read,
        color_mat_data_V_V_dout,
        color_mat_data_V_V_empty_n,
        color_mat_data_V_V_read,
        m_axis_video_TDATA,
        m_axis_video_TVALID,
        m_axis_video_TREADY,
        m_axis_video_TKEEP,
        m_axis_video_TSTRB,
        m_axis_video_TUSER,
        m_axis_video_TLAST,
        m_axis_video_TID,
        m_axis_video_TDEST
);

parameter    ap_ST_fsm_state1 = 4'd1;
parameter    ap_ST_fsm_state2 = 4'd2;
parameter    ap_ST_fsm_pp0_stage0 = 4'd4;
parameter    ap_ST_fsm_state5 = 4'd8;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
input   ap_continue;
output   ap_idle;
output   ap_ready;
input  [15:0] color_mat_rows_dout;
input   color_mat_rows_empty_n;
output   color_mat_rows_read;
input  [15:0] color_mat_cols_dout;
input   color_mat_cols_empty_n;
output   color_mat_cols_read;
input  [95:0] color_mat_data_V_V_dout;
input   color_mat_data_V_V_empty_n;
output   color_mat_data_V_V_read;
output  [95:0] m_axis_video_TDATA;
output   m_axis_video_TVALID;
input   m_axis_video_TREADY;
output  [11:0] m_axis_video_TKEEP;
output  [11:0] m_axis_video_TSTRB;
output  [0:0] m_axis_video_TUSER;
output  [0:0] m_axis_video_TLAST;
output  [0:0] m_axis_video_TID;
output  [0:0] m_axis_video_TDEST;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg color_mat_rows_read;
reg color_mat_cols_read;
reg color_mat_data_V_V_read;
reg m_axis_video_TVALID;

reg    ap_done_reg;
(* fsm_encoding = "none" *) reg   [3:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg    color_mat_rows_blk_n;
reg    color_mat_cols_blk_n;
reg    color_mat_data_V_V_blk_n;
wire    ap_CS_fsm_pp0_stage0;
reg    ap_enable_reg_pp0_iter1;
wire    ap_block_pp0_stage0;
reg   [0:0] icmp_ln141_reg_444;
reg    m_axis_video_TDATA_blk_n;
reg   [13:0] j_0_i_reg_194;
reg   [15:0] color_mat_rows_read_reg_420;
reg    ap_block_state1;
wire   [13:0] tmp_fu_205_p4;
reg   [13:0] tmp_reg_425;
wire   [14:0] add_ln153_fu_219_p2;
reg   [14:0] add_ln153_reg_430;
wire   [0:0] icmp_ln136_fu_230_p2;
wire    ap_CS_fsm_state2;
wire   [15:0] i_fu_235_p2;
reg   [15:0] i_reg_439;
wire   [0:0] icmp_ln141_fu_245_p2;
wire    ap_block_state3_pp0_stage0_iter0;
reg    ap_block_state4_pp0_stage0_iter1;
reg    ap_block_state4_io;
reg    ap_block_pp0_stage0_11001;
wire   [13:0] j_fu_250_p2;
reg    ap_enable_reg_pp0_iter0;
wire   [0:0] tmp_last_V_fu_256_p2;
reg   [0:0] tmp_last_V_reg_453;
reg    ap_block_pp0_stage0_subdone;
reg    ap_condition_pp0_exit_iter0_state3;
reg   [15:0] i_0_i_reg_183;
wire    ap_CS_fsm_state5;
reg   [0:0] tmp_user_V_fu_132;
reg    ap_block_pp0_stage0_01001;
wire   [14:0] zext_ln124_fu_215_p1;
wire   [14:0] zext_ln141_fu_241_p1;
wire   [7:0] p_Result_3_2_i_fu_369_p4;
wire   [7:0] p_Result_3_1_i_fu_359_p4;
wire   [7:0] p_Result_3_i_fu_349_p4;
wire   [7:0] p_Result_2_2_i_fu_339_p4;
wire   [7:0] p_Result_2_1_i_fu_329_p4;
wire   [7:0] p_Result_2_i_fu_319_p4;
wire   [7:0] p_Result_1_2_i_fu_309_p4;
wire   [7:0] p_Result_1_1_i_fu_299_p4;
wire   [7:0] p_Result_1_i_fu_289_p4;
wire   [7:0] p_Result_0_2_i_fu_279_p4;
wire   [7:0] trunc_ln647_fu_275_p1;
wire   [7:0] p_Result_0_i_fu_265_p4;
reg   [3:0] ap_NS_fsm;
reg    ap_idle_pp0;
wire    ap_enable_pp0;

// power-on initialization
initial begin
#0 ap_done_reg = 1'b0;
#0 ap_CS_fsm = 4'd1;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
#0 ap_enable_reg_pp0_iter0 = 1'b0;
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_done_reg <= 1'b0;
    end else begin
        if ((ap_continue == 1'b1)) begin
            ap_done_reg <= 1'b0;
        end else if (((icmp_ln136_fu_230_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
            ap_done_reg <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter0 <= 1'b0;
    end else begin
        if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b1 == ap_condition_pp0_exit_iter0_state3) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
            ap_enable_reg_pp0_iter0 <= 1'b0;
        end else if (((icmp_ln136_fu_230_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
            ap_enable_reg_pp0_iter0 <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if (((1'b1 == ap_condition_pp0_exit_iter0_state3) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
            ap_enable_reg_pp0_iter1 <= (1'b1 ^ ap_condition_pp0_exit_iter0_state3);
        end else if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
        end else if (((icmp_ln136_fu_230_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
            ap_enable_reg_pp0_iter1 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        i_0_i_reg_183 <= i_reg_439;
    end else if ((~((ap_start == 1'b0) | (color_mat_cols_empty_n == 1'b0) | (color_mat_rows_empty_n == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        i_0_i_reg_183 <= 16'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln141_fu_245_p2 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        j_0_i_reg_194 <= j_fu_250_p2;
    end else if (((icmp_ln136_fu_230_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        j_0_i_reg_194 <= 14'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln141_reg_444 == 1'd0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        tmp_user_V_fu_132 <= 1'd0;
    end else if ((~((ap_start == 1'b0) | (color_mat_cols_empty_n == 1'b0) | (color_mat_rows_empty_n == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        tmp_user_V_fu_132 <= 1'd1;
    end
end

always @ (posedge ap_clk) begin
    if ((~((ap_start == 1'b0) | (color_mat_cols_empty_n == 1'b0) | (color_mat_rows_empty_n == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        add_ln153_reg_430 <= add_ln153_fu_219_p2;
        color_mat_rows_read_reg_420 <= color_mat_rows_dout;
        tmp_reg_425 <= {{color_mat_cols_dout[15:2]}};
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        i_reg_439 <= i_fu_235_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        icmp_ln141_reg_444 <= icmp_ln141_fu_245_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln141_fu_245_p2 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        tmp_last_V_reg_453 <= tmp_last_V_fu_256_p2;
    end
end

always @ (*) begin
    if ((icmp_ln141_fu_245_p2 == 1'd1)) begin
        ap_condition_pp0_exit_iter0_state3 = 1'b1;
    end else begin
        ap_condition_pp0_exit_iter0_state3 = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln136_fu_230_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = ap_done_reg;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln136_fu_230_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        color_mat_cols_blk_n = color_mat_cols_empty_n;
    end else begin
        color_mat_cols_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((ap_start == 1'b0) | (color_mat_cols_empty_n == 1'b0) | (color_mat_rows_empty_n == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        color_mat_cols_read = 1'b1;
    end else begin
        color_mat_cols_read = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln141_reg_444 == 1'd0) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        color_mat_data_V_V_blk_n = color_mat_data_V_V_empty_n;
    end else begin
        color_mat_data_V_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((icmp_ln141_reg_444 == 1'd0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        color_mat_data_V_V_read = 1'b1;
    end else begin
        color_mat_data_V_V_read = 1'b0;
    end
end

always @ (*) begin
    if ((~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        color_mat_rows_blk_n = color_mat_rows_empty_n;
    end else begin
        color_mat_rows_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((ap_start == 1'b0) | (color_mat_cols_empty_n == 1'b0) | (color_mat_rows_empty_n == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        color_mat_rows_read = 1'b1;
    end else begin
        color_mat_rows_read = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln141_reg_444 == 1'd0) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        m_axis_video_TDATA_blk_n = m_axis_video_TREADY;
    end else begin
        m_axis_video_TDATA_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((icmp_ln141_reg_444 == 1'd0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        m_axis_video_TVALID = 1'b1;
    end else begin
        m_axis_video_TVALID = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if ((~((ap_start == 1'b0) | (color_mat_cols_empty_n == 1'b0) | (color_mat_rows_empty_n == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((icmp_ln136_fu_230_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end
        end
        ap_ST_fsm_pp0_stage0 : begin
            if (~((icmp_ln141_fu_245_p2 == 1'd1) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else if (((icmp_ln141_fu_245_p2 == 1'd1) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state2;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln153_fu_219_p2 = ($signed(zext_ln124_fu_215_p1) + $signed(15'd32767));

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd3];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_pp0_stage0_01001 = ((icmp_ln141_reg_444 == 1'd0) & (color_mat_data_V_V_empty_n == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b1));
end

always @ (*) begin
    ap_block_pp0_stage0_11001 = ((ap_enable_reg_pp0_iter1 == 1'b1) & ((1'b1 == ap_block_state4_io) | ((icmp_ln141_reg_444 == 1'd0) & (color_mat_data_V_V_empty_n == 1'b0))));
end

always @ (*) begin
    ap_block_pp0_stage0_subdone = ((ap_enable_reg_pp0_iter1 == 1'b1) & ((1'b1 == ap_block_state4_io) | ((icmp_ln141_reg_444 == 1'd0) & (color_mat_data_V_V_empty_n == 1'b0))));
end

always @ (*) begin
    ap_block_state1 = ((ap_start == 1'b0) | (color_mat_cols_empty_n == 1'b0) | (color_mat_rows_empty_n == 1'b0) | (ap_done_reg == 1'b1));
end

assign ap_block_state3_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_state4_io = ((icmp_ln141_reg_444 == 1'd0) & (m_axis_video_TREADY == 1'b0));
end

always @ (*) begin
    ap_block_state4_pp0_stage0_iter1 = ((icmp_ln141_reg_444 == 1'd0) & (color_mat_data_V_V_empty_n == 1'b0));
end

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign i_fu_235_p2 = (i_0_i_reg_183 + 16'd1);

assign icmp_ln136_fu_230_p2 = ((i_0_i_reg_183 == color_mat_rows_read_reg_420) ? 1'b1 : 1'b0);

assign icmp_ln141_fu_245_p2 = ((j_0_i_reg_194 == tmp_reg_425) ? 1'b1 : 1'b0);

assign j_fu_250_p2 = (j_0_i_reg_194 + 14'd1);

assign m_axis_video_TDATA = {{{{{{{{{{{{p_Result_3_2_i_fu_369_p4}, {p_Result_3_1_i_fu_359_p4}}, {p_Result_3_i_fu_349_p4}}, {p_Result_2_2_i_fu_339_p4}}, {p_Result_2_1_i_fu_329_p4}}, {p_Result_2_i_fu_319_p4}}, {p_Result_1_2_i_fu_309_p4}}, {p_Result_1_1_i_fu_299_p4}}, {p_Result_1_i_fu_289_p4}}, {p_Result_0_2_i_fu_279_p4}}, {trunc_ln647_fu_275_p1}}, {p_Result_0_i_fu_265_p4}};

assign m_axis_video_TDEST = 1'd0;

assign m_axis_video_TID = 1'd0;

assign m_axis_video_TKEEP = 12'd4095;

assign m_axis_video_TLAST = tmp_last_V_reg_453;

assign m_axis_video_TSTRB = 12'd0;

assign m_axis_video_TUSER = tmp_user_V_fu_132;

assign p_Result_0_2_i_fu_279_p4 = {{color_mat_data_V_V_dout[23:16]}};

assign p_Result_0_i_fu_265_p4 = {{color_mat_data_V_V_dout[15:8]}};

assign p_Result_1_1_i_fu_299_p4 = {{color_mat_data_V_V_dout[31:24]}};

assign p_Result_1_2_i_fu_309_p4 = {{color_mat_data_V_V_dout[47:40]}};

assign p_Result_1_i_fu_289_p4 = {{color_mat_data_V_V_dout[39:32]}};

assign p_Result_2_1_i_fu_329_p4 = {{color_mat_data_V_V_dout[55:48]}};

assign p_Result_2_2_i_fu_339_p4 = {{color_mat_data_V_V_dout[71:64]}};

assign p_Result_2_i_fu_319_p4 = {{color_mat_data_V_V_dout[63:56]}};

assign p_Result_3_1_i_fu_359_p4 = {{color_mat_data_V_V_dout[79:72]}};

assign p_Result_3_2_i_fu_369_p4 = {{color_mat_data_V_V_dout[95:88]}};

assign p_Result_3_i_fu_349_p4 = {{color_mat_data_V_V_dout[87:80]}};

assign tmp_fu_205_p4 = {{color_mat_cols_dout[15:2]}};

assign tmp_last_V_fu_256_p2 = ((zext_ln141_fu_241_p1 == add_ln153_reg_430) ? 1'b1 : 1'b0);

assign trunc_ln647_fu_275_p1 = color_mat_data_V_V_dout[7:0];

assign zext_ln124_fu_215_p1 = tmp_fu_205_p4;

assign zext_ln141_fu_241_p1 = j_0_i_reg_194;

endmodule //ColorMat2AXIvideo