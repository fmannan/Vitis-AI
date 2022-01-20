// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: second/protos/target.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "second/protos/target.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace second {
namespace protos {
class TargetAssignerDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<TargetAssigner>
     _instance;
} _TargetAssigner_default_instance_;

namespace protobuf_second_2fprotos_2ftarget_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TargetAssigner, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TargetAssigner, anchor_generators_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TargetAssigner, sample_positive_fraction_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TargetAssigner, sample_size_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TargetAssigner, use_rotate_iou_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TargetAssigner, class_name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TargetAssigner, region_similarity_calculator_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(TargetAssigner)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_TargetAssigner_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "second/protos/target.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace
void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::second::protos::protobuf_second_2fprotos_2fanchors_2eproto::InitDefaults();
  ::second::protos::protobuf_second_2fprotos_2fsimilarity_2eproto::InitDefaults();
  _TargetAssigner_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_TargetAssigner_default_instance_);_TargetAssigner_default_instance_._instance.get_mutable()->region_similarity_calculator_ = const_cast< ::second::protos::RegionSimilarityCalculator*>(
      ::second::protos::RegionSimilarityCalculator::internal_default_instance());
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\032second/protos/target.proto\022\rsecond.pro"
      "tos\032\033second/protos/anchors.proto\032\036second"
      "/protos/similarity.proto\"\211\002\n\016TargetAssig"
      "ner\022C\n\021anchor_generators\030\001 \003(\0132(.second."
      "protos.AnchorGeneratorCollection\022 \n\030samp"
      "le_positive_fraction\030\002 \001(\002\022\023\n\013sample_siz"
      "e\030\003 \001(\r\022\026\n\016use_rotate_iou\030\004 \001(\010\022\022\n\nclass"
      "_name\030\005 \001(\t\022O\n\034region_similarity_calcula"
      "tor\030\006 \001(\0132).second.protos.RegionSimilari"
      "tyCalculatorb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 380);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "second/protos/target.proto", &protobuf_RegisterTypes);
  ::second::protos::protobuf_second_2fprotos_2fanchors_2eproto::AddDescriptors();
  ::second::protos::protobuf_second_2fprotos_2fsimilarity_2eproto::AddDescriptors();
}
} // anonymous namespace

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_second_2fprotos_2ftarget_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int TargetAssigner::kAnchorGeneratorsFieldNumber;
const int TargetAssigner::kSamplePositiveFractionFieldNumber;
const int TargetAssigner::kSampleSizeFieldNumber;
const int TargetAssigner::kUseRotateIouFieldNumber;
const int TargetAssigner::kClassNameFieldNumber;
const int TargetAssigner::kRegionSimilarityCalculatorFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

TargetAssigner::TargetAssigner()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_second_2fprotos_2ftarget_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:second.protos.TargetAssigner)
}
TargetAssigner::TargetAssigner(const TargetAssigner& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      anchor_generators_(from.anchor_generators_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  class_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.class_name().size() > 0) {
    class_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.class_name_);
  }
  if (from.has_region_similarity_calculator()) {
    region_similarity_calculator_ = new ::second::protos::RegionSimilarityCalculator(*from.region_similarity_calculator_);
  } else {
    region_similarity_calculator_ = NULL;
  }
  ::memcpy(&sample_positive_fraction_, &from.sample_positive_fraction_,
    static_cast<size_t>(reinterpret_cast<char*>(&use_rotate_iou_) -
    reinterpret_cast<char*>(&sample_positive_fraction_)) + sizeof(use_rotate_iou_));
  // @@protoc_insertion_point(copy_constructor:second.protos.TargetAssigner)
}

void TargetAssigner::SharedCtor() {
  class_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&region_similarity_calculator_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&use_rotate_iou_) -
      reinterpret_cast<char*>(&region_similarity_calculator_)) + sizeof(use_rotate_iou_));
  _cached_size_ = 0;
}

TargetAssigner::~TargetAssigner() {
  // @@protoc_insertion_point(destructor:second.protos.TargetAssigner)
  SharedDtor();
}

void TargetAssigner::SharedDtor() {
  class_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete region_similarity_calculator_;
}

void TargetAssigner::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TargetAssigner::descriptor() {
  protobuf_second_2fprotos_2ftarget_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_second_2fprotos_2ftarget_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const TargetAssigner& TargetAssigner::default_instance() {
  protobuf_second_2fprotos_2ftarget_2eproto::InitDefaults();
  return *internal_default_instance();
}

TargetAssigner* TargetAssigner::New(::google::protobuf::Arena* arena) const {
  TargetAssigner* n = new TargetAssigner;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void TargetAssigner::Clear() {
// @@protoc_insertion_point(message_clear_start:second.protos.TargetAssigner)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  anchor_generators_.Clear();
  class_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && region_similarity_calculator_ != NULL) {
    delete region_similarity_calculator_;
  }
  region_similarity_calculator_ = NULL;
  ::memset(&sample_positive_fraction_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&use_rotate_iou_) -
      reinterpret_cast<char*>(&sample_positive_fraction_)) + sizeof(use_rotate_iou_));
  _internal_metadata_.Clear();
}

bool TargetAssigner::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:second.protos.TargetAssigner)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .second.protos.AnchorGeneratorCollection anchor_generators = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_anchor_generators()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float sample_positive_fraction = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(21u /* 21 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &sample_positive_fraction_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 sample_size = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &sample_size_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool use_rotate_iou = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &use_rotate_iou_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string class_name = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_class_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->class_name().data(), static_cast<int>(this->class_name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "second.protos.TargetAssigner.class_name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .second.protos.RegionSimilarityCalculator region_similarity_calculator = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_region_similarity_calculator()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:second.protos.TargetAssigner)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:second.protos.TargetAssigner)
  return false;
#undef DO_
}

void TargetAssigner::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:second.protos.TargetAssigner)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .second.protos.AnchorGeneratorCollection anchor_generators = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->anchor_generators_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->anchor_generators(static_cast<int>(i)), output);
  }

  // float sample_positive_fraction = 2;
  if (this->sample_positive_fraction() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(2, this->sample_positive_fraction(), output);
  }

  // uint32 sample_size = 3;
  if (this->sample_size() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->sample_size(), output);
  }

  // bool use_rotate_iou = 4;
  if (this->use_rotate_iou() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(4, this->use_rotate_iou(), output);
  }

  // string class_name = 5;
  if (this->class_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->class_name().data(), static_cast<int>(this->class_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "second.protos.TargetAssigner.class_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->class_name(), output);
  }

  // .second.protos.RegionSimilarityCalculator region_similarity_calculator = 6;
  if (this->has_region_similarity_calculator()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, *this->region_similarity_calculator_, output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:second.protos.TargetAssigner)
}

::google::protobuf::uint8* TargetAssigner::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:second.protos.TargetAssigner)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .second.protos.AnchorGeneratorCollection anchor_generators = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->anchor_generators_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, this->anchor_generators(static_cast<int>(i)), deterministic, target);
  }

  // float sample_positive_fraction = 2;
  if (this->sample_positive_fraction() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(2, this->sample_positive_fraction(), target);
  }

  // uint32 sample_size = 3;
  if (this->sample_size() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->sample_size(), target);
  }

  // bool use_rotate_iou = 4;
  if (this->use_rotate_iou() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(4, this->use_rotate_iou(), target);
  }

  // string class_name = 5;
  if (this->class_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->class_name().data(), static_cast<int>(this->class_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "second.protos.TargetAssigner.class_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->class_name(), target);
  }

  // .second.protos.RegionSimilarityCalculator region_similarity_calculator = 6;
  if (this->has_region_similarity_calculator()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        6, *this->region_similarity_calculator_, deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:second.protos.TargetAssigner)
  return target;
}

size_t TargetAssigner::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:second.protos.TargetAssigner)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .second.protos.AnchorGeneratorCollection anchor_generators = 1;
  {
    unsigned int count = static_cast<unsigned int>(this->anchor_generators_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->anchor_generators(static_cast<int>(i)));
    }
  }

  // string class_name = 5;
  if (this->class_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->class_name());
  }

  // .second.protos.RegionSimilarityCalculator region_similarity_calculator = 6;
  if (this->has_region_similarity_calculator()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->region_similarity_calculator_);
  }

  // float sample_positive_fraction = 2;
  if (this->sample_positive_fraction() != 0) {
    total_size += 1 + 4;
  }

  // uint32 sample_size = 3;
  if (this->sample_size() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->sample_size());
  }

  // bool use_rotate_iou = 4;
  if (this->use_rotate_iou() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void TargetAssigner::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:second.protos.TargetAssigner)
  GOOGLE_DCHECK_NE(&from, this);
  const TargetAssigner* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const TargetAssigner>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:second.protos.TargetAssigner)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:second.protos.TargetAssigner)
    MergeFrom(*source);
  }
}

void TargetAssigner::MergeFrom(const TargetAssigner& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:second.protos.TargetAssigner)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  anchor_generators_.MergeFrom(from.anchor_generators_);
  if (from.class_name().size() > 0) {

    class_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.class_name_);
  }
  if (from.has_region_similarity_calculator()) {
    mutable_region_similarity_calculator()->::second::protos::RegionSimilarityCalculator::MergeFrom(from.region_similarity_calculator());
  }
  if (from.sample_positive_fraction() != 0) {
    set_sample_positive_fraction(from.sample_positive_fraction());
  }
  if (from.sample_size() != 0) {
    set_sample_size(from.sample_size());
  }
  if (from.use_rotate_iou() != 0) {
    set_use_rotate_iou(from.use_rotate_iou());
  }
}

void TargetAssigner::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:second.protos.TargetAssigner)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TargetAssigner::CopyFrom(const TargetAssigner& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:second.protos.TargetAssigner)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TargetAssigner::IsInitialized() const {
  return true;
}

void TargetAssigner::Swap(TargetAssigner* other) {
  if (other == this) return;
  InternalSwap(other);
}
void TargetAssigner::InternalSwap(TargetAssigner* other) {
  using std::swap;
  anchor_generators_.InternalSwap(&other->anchor_generators_);
  class_name_.Swap(&other->class_name_);
  swap(region_similarity_calculator_, other->region_similarity_calculator_);
  swap(sample_positive_fraction_, other->sample_positive_fraction_);
  swap(sample_size_, other->sample_size_);
  swap(use_rotate_iou_, other->use_rotate_iou_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata TargetAssigner::GetMetadata() const {
  protobuf_second_2fprotos_2ftarget_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_second_2fprotos_2ftarget_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// TargetAssigner

// repeated .second.protos.AnchorGeneratorCollection anchor_generators = 1;
int TargetAssigner::anchor_generators_size() const {
  return anchor_generators_.size();
}
void TargetAssigner::clear_anchor_generators() {
  anchor_generators_.Clear();
}
const ::second::protos::AnchorGeneratorCollection& TargetAssigner::anchor_generators(int index) const {
  // @@protoc_insertion_point(field_get:second.protos.TargetAssigner.anchor_generators)
  return anchor_generators_.Get(index);
}
::second::protos::AnchorGeneratorCollection* TargetAssigner::mutable_anchor_generators(int index) {
  // @@protoc_insertion_point(field_mutable:second.protos.TargetAssigner.anchor_generators)
  return anchor_generators_.Mutable(index);
}
::second::protos::AnchorGeneratorCollection* TargetAssigner::add_anchor_generators() {
  // @@protoc_insertion_point(field_add:second.protos.TargetAssigner.anchor_generators)
  return anchor_generators_.Add();
}
::google::protobuf::RepeatedPtrField< ::second::protos::AnchorGeneratorCollection >*
TargetAssigner::mutable_anchor_generators() {
  // @@protoc_insertion_point(field_mutable_list:second.protos.TargetAssigner.anchor_generators)
  return &anchor_generators_;
}
const ::google::protobuf::RepeatedPtrField< ::second::protos::AnchorGeneratorCollection >&
TargetAssigner::anchor_generators() const {
  // @@protoc_insertion_point(field_list:second.protos.TargetAssigner.anchor_generators)
  return anchor_generators_;
}

// float sample_positive_fraction = 2;
void TargetAssigner::clear_sample_positive_fraction() {
  sample_positive_fraction_ = 0;
}
float TargetAssigner::sample_positive_fraction() const {
  // @@protoc_insertion_point(field_get:second.protos.TargetAssigner.sample_positive_fraction)
  return sample_positive_fraction_;
}
void TargetAssigner::set_sample_positive_fraction(float value) {
  
  sample_positive_fraction_ = value;
  // @@protoc_insertion_point(field_set:second.protos.TargetAssigner.sample_positive_fraction)
}

// uint32 sample_size = 3;
void TargetAssigner::clear_sample_size() {
  sample_size_ = 0u;
}
::google::protobuf::uint32 TargetAssigner::sample_size() const {
  // @@protoc_insertion_point(field_get:second.protos.TargetAssigner.sample_size)
  return sample_size_;
}
void TargetAssigner::set_sample_size(::google::protobuf::uint32 value) {
  
  sample_size_ = value;
  // @@protoc_insertion_point(field_set:second.protos.TargetAssigner.sample_size)
}

// bool use_rotate_iou = 4;
void TargetAssigner::clear_use_rotate_iou() {
  use_rotate_iou_ = false;
}
bool TargetAssigner::use_rotate_iou() const {
  // @@protoc_insertion_point(field_get:second.protos.TargetAssigner.use_rotate_iou)
  return use_rotate_iou_;
}
void TargetAssigner::set_use_rotate_iou(bool value) {
  
  use_rotate_iou_ = value;
  // @@protoc_insertion_point(field_set:second.protos.TargetAssigner.use_rotate_iou)
}

// string class_name = 5;
void TargetAssigner::clear_class_name() {
  class_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& TargetAssigner::class_name() const {
  // @@protoc_insertion_point(field_get:second.protos.TargetAssigner.class_name)
  return class_name_.GetNoArena();
}
void TargetAssigner::set_class_name(const ::std::string& value) {
  
  class_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:second.protos.TargetAssigner.class_name)
}
#if LANG_CXX11
void TargetAssigner::set_class_name(::std::string&& value) {
  
  class_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:second.protos.TargetAssigner.class_name)
}
#endif
void TargetAssigner::set_class_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  class_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:second.protos.TargetAssigner.class_name)
}
void TargetAssigner::set_class_name(const char* value, size_t size) {
  
  class_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:second.protos.TargetAssigner.class_name)
}
::std::string* TargetAssigner::mutable_class_name() {
  
  // @@protoc_insertion_point(field_mutable:second.protos.TargetAssigner.class_name)
  return class_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* TargetAssigner::release_class_name() {
  // @@protoc_insertion_point(field_release:second.protos.TargetAssigner.class_name)
  
  return class_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void TargetAssigner::set_allocated_class_name(::std::string* class_name) {
  if (class_name != NULL) {
    
  } else {
    
  }
  class_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), class_name);
  // @@protoc_insertion_point(field_set_allocated:second.protos.TargetAssigner.class_name)
}

// .second.protos.RegionSimilarityCalculator region_similarity_calculator = 6;
bool TargetAssigner::has_region_similarity_calculator() const {
  return this != internal_default_instance() && region_similarity_calculator_ != NULL;
}
void TargetAssigner::clear_region_similarity_calculator() {
  if (GetArenaNoVirtual() == NULL && region_similarity_calculator_ != NULL) delete region_similarity_calculator_;
  region_similarity_calculator_ = NULL;
}
const ::second::protos::RegionSimilarityCalculator& TargetAssigner::region_similarity_calculator() const {
  const ::second::protos::RegionSimilarityCalculator* p = region_similarity_calculator_;
  // @@protoc_insertion_point(field_get:second.protos.TargetAssigner.region_similarity_calculator)
  return p != NULL ? *p : *reinterpret_cast<const ::second::protos::RegionSimilarityCalculator*>(
      &::second::protos::_RegionSimilarityCalculator_default_instance_);
}
::second::protos::RegionSimilarityCalculator* TargetAssigner::mutable_region_similarity_calculator() {
  
  if (region_similarity_calculator_ == NULL) {
    region_similarity_calculator_ = new ::second::protos::RegionSimilarityCalculator;
  }
  // @@protoc_insertion_point(field_mutable:second.protos.TargetAssigner.region_similarity_calculator)
  return region_similarity_calculator_;
}
::second::protos::RegionSimilarityCalculator* TargetAssigner::release_region_similarity_calculator() {
  // @@protoc_insertion_point(field_release:second.protos.TargetAssigner.region_similarity_calculator)
  
  ::second::protos::RegionSimilarityCalculator* temp = region_similarity_calculator_;
  region_similarity_calculator_ = NULL;
  return temp;
}
void TargetAssigner::set_allocated_region_similarity_calculator(::second::protos::RegionSimilarityCalculator* region_similarity_calculator) {
  delete region_similarity_calculator_;
  region_similarity_calculator_ = region_similarity_calculator;
  if (region_similarity_calculator) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:second.protos.TargetAssigner.region_similarity_calculator)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace second

// @@protoc_insertion_point(global_scope)