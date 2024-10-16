// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cavnue/third_party/bq/v1/bq_field.proto

#include "cavnue/third_party/bq/v1/bq_field.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = ::PROTOBUF_NAMESPACE_ID::internal;
namespace gen_bq_schema {
template <typename>
PROTOBUF_CONSTEXPR BigQueryFieldOptions::BigQueryFieldOptions(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.type_override_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_.description_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_.name_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_.policy_tags_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_.require_)*/ false

  , /*decltype(_impl_.ignore_)*/ false

  , /*decltype(_impl_.partition_)*/ false

  , /*decltype(_impl_.cluster_)*/ false

  , /*decltype(_impl_._cached_size_)*/{}} {}
struct BigQueryFieldOptionsDefaultTypeInternal {
  PROTOBUF_CONSTEXPR BigQueryFieldOptionsDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~BigQueryFieldOptionsDefaultTypeInternal() {}
  union {
    BigQueryFieldOptions _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 BigQueryFieldOptionsDefaultTypeInternal _BigQueryFieldOptions_default_instance_;
}  // namespace gen_bq_schema
static ::_pb::Metadata file_level_metadata_cavnue_2fthird_5fparty_2fbq_2fv1_2fbq_5ffield_2eproto[1];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_cavnue_2fthird_5fparty_2fbq_2fv1_2fbq_5ffield_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_cavnue_2fthird_5fparty_2fbq_2fv1_2fbq_5ffield_2eproto = nullptr;
const ::uint32_t TableStruct_cavnue_2fthird_5fparty_2fbq_2fv1_2fbq_5ffield_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::gen_bq_schema::BigQueryFieldOptions, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::gen_bq_schema::BigQueryFieldOptions, _impl_.require_),
    PROTOBUF_FIELD_OFFSET(::gen_bq_schema::BigQueryFieldOptions, _impl_.type_override_),
    PROTOBUF_FIELD_OFFSET(::gen_bq_schema::BigQueryFieldOptions, _impl_.ignore_),
    PROTOBUF_FIELD_OFFSET(::gen_bq_schema::BigQueryFieldOptions, _impl_.description_),
    PROTOBUF_FIELD_OFFSET(::gen_bq_schema::BigQueryFieldOptions, _impl_.name_),
    PROTOBUF_FIELD_OFFSET(::gen_bq_schema::BigQueryFieldOptions, _impl_.policy_tags_),
    PROTOBUF_FIELD_OFFSET(::gen_bq_schema::BigQueryFieldOptions, _impl_.partition_),
    PROTOBUF_FIELD_OFFSET(::gen_bq_schema::BigQueryFieldOptions, _impl_.cluster_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, -1, -1, sizeof(::gen_bq_schema::BigQueryFieldOptions)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::gen_bq_schema::_BigQueryFieldOptions_default_instance_._instance,
};
const char descriptor_table_protodef_cavnue_2fthird_5fparty_2fbq_2fv1_2fbq_5ffield_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n\'cavnue/third_party/bq/v1/bq_field.prot"
    "o\022\rgen_bq_schema\032 google/protobuf/descri"
    "ptor.proto\"\374\001\n\024BigQueryFieldOptions\022\030\n\007r"
    "equire\030\001 \001(\010R\007require\022#\n\rtype_override\030\002"
    " \001(\tR\014typeOverride\022\026\n\006ignore\030\003 \001(\010R\006igno"
    "re\022 \n\013description\030\004 \001(\tR\013description\022\022\n\004"
    "name\030\005 \001(\tR\004name\022\037\n\013policy_tags\030\006 \001(\tR\np"
    "olicyTags\022\034\n\tpartition\030\007 \001(\010R\tpartition\022"
    "\030\n\007cluster\030\010 \001(\010R\007cluster:`\n\010bigquery\022\035."
    "google.protobuf.FieldOptions\030\221\277\005 \001(\0132#.g"
    "en_bq_schema.BigQueryFieldOptionsR\010bigqu"
    "eryB;Z9github.com/Cavnue/third-party-pro"
    "toc-gen-bq-schema/protosb\006proto3"
};
static const ::_pbi::DescriptorTable* const descriptor_table_cavnue_2fthird_5fparty_2fbq_2fv1_2fbq_5ffield_2eproto_deps[1] =
    {
        &::descriptor_table_google_2fprotobuf_2fdescriptor_2eproto,
};
static ::absl::once_flag descriptor_table_cavnue_2fthird_5fparty_2fbq_2fv1_2fbq_5ffield_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_cavnue_2fthird_5fparty_2fbq_2fv1_2fbq_5ffield_2eproto = {
    false,
    false,
    512,
    descriptor_table_protodef_cavnue_2fthird_5fparty_2fbq_2fv1_2fbq_5ffield_2eproto,
    "cavnue/third_party/bq/v1/bq_field.proto",
    &descriptor_table_cavnue_2fthird_5fparty_2fbq_2fv1_2fbq_5ffield_2eproto_once,
    descriptor_table_cavnue_2fthird_5fparty_2fbq_2fv1_2fbq_5ffield_2eproto_deps,
    1,
    1,
    schemas,
    file_default_instances,
    TableStruct_cavnue_2fthird_5fparty_2fbq_2fv1_2fbq_5ffield_2eproto::offsets,
    file_level_metadata_cavnue_2fthird_5fparty_2fbq_2fv1_2fbq_5ffield_2eproto,
    file_level_enum_descriptors_cavnue_2fthird_5fparty_2fbq_2fv1_2fbq_5ffield_2eproto,
    file_level_service_descriptors_cavnue_2fthird_5fparty_2fbq_2fv1_2fbq_5ffield_2eproto,
};

// This function exists to be marked as weak.
// It can significantly speed up compilation by breaking up LLVM's SCC
// in the .pb.cc translation units. Large translation units see a
// reduction of more than 35% of walltime for optimized builds. Without
// the weak attribute all the messages in the file, including all the
// vtables and everything they use become part of the same SCC through
// a cycle like:
// GetMetadata -> descriptor table -> default instances ->
//   vtables -> GetMetadata
// By adding a weak function here we break the connection from the
// individual vtables back into the descriptor table.
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_cavnue_2fthird_5fparty_2fbq_2fv1_2fbq_5ffield_2eproto_getter() {
  return &descriptor_table_cavnue_2fthird_5fparty_2fbq_2fv1_2fbq_5ffield_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_cavnue_2fthird_5fparty_2fbq_2fv1_2fbq_5ffield_2eproto(&descriptor_table_cavnue_2fthird_5fparty_2fbq_2fv1_2fbq_5ffield_2eproto);
namespace gen_bq_schema {
// ===================================================================

class BigQueryFieldOptions::_Internal {
 public:
};

BigQueryFieldOptions::BigQueryFieldOptions(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:gen_bq_schema.BigQueryFieldOptions)
}
BigQueryFieldOptions::BigQueryFieldOptions(const BigQueryFieldOptions& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  BigQueryFieldOptions* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.type_override_) {}

    , decltype(_impl_.description_) {}

    , decltype(_impl_.name_) {}

    , decltype(_impl_.policy_tags_) {}

    , decltype(_impl_.require_) {}

    , decltype(_impl_.ignore_) {}

    , decltype(_impl_.partition_) {}

    , decltype(_impl_.cluster_) {}

    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.type_override_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.type_override_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_type_override().empty()) {
    _this->_impl_.type_override_.Set(from._internal_type_override(), _this->GetArenaForAllocation());
  }
  _impl_.description_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.description_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_description().empty()) {
    _this->_impl_.description_.Set(from._internal_description(), _this->GetArenaForAllocation());
  }
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.name_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_name().empty()) {
    _this->_impl_.name_.Set(from._internal_name(), _this->GetArenaForAllocation());
  }
  _impl_.policy_tags_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.policy_tags_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_policy_tags().empty()) {
    _this->_impl_.policy_tags_.Set(from._internal_policy_tags(), _this->GetArenaForAllocation());
  }
  ::memcpy(&_impl_.require_, &from._impl_.require_,
    static_cast<::size_t>(reinterpret_cast<char*>(&_impl_.cluster_) -
    reinterpret_cast<char*>(&_impl_.require_)) + sizeof(_impl_.cluster_));
  // @@protoc_insertion_point(copy_constructor:gen_bq_schema.BigQueryFieldOptions)
}

inline void BigQueryFieldOptions::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_.type_override_) {}

    , decltype(_impl_.description_) {}

    , decltype(_impl_.name_) {}

    , decltype(_impl_.policy_tags_) {}

    , decltype(_impl_.require_) { false }

    , decltype(_impl_.ignore_) { false }

    , decltype(_impl_.partition_) { false }

    , decltype(_impl_.cluster_) { false }

    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.type_override_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.type_override_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.description_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.description_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.name_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.policy_tags_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.policy_tags_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

BigQueryFieldOptions::~BigQueryFieldOptions() {
  // @@protoc_insertion_point(destructor:gen_bq_schema.BigQueryFieldOptions)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void BigQueryFieldOptions::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.type_override_.Destroy();
  _impl_.description_.Destroy();
  _impl_.name_.Destroy();
  _impl_.policy_tags_.Destroy();
}

void BigQueryFieldOptions::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void BigQueryFieldOptions::Clear() {
// @@protoc_insertion_point(message_clear_start:gen_bq_schema.BigQueryFieldOptions)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.type_override_.ClearToEmpty();
  _impl_.description_.ClearToEmpty();
  _impl_.name_.ClearToEmpty();
  _impl_.policy_tags_.ClearToEmpty();
  ::memset(&_impl_.require_, 0, static_cast<::size_t>(
      reinterpret_cast<char*>(&_impl_.cluster_) -
      reinterpret_cast<char*>(&_impl_.require_)) + sizeof(_impl_.cluster_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* BigQueryFieldOptions::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bool require = 1 [json_name = "require"];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 8)) {
          _impl_.require_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // string type_override = 2 [json_name = "typeOverride"];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_type_override();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "gen_bq_schema.BigQueryFieldOptions.type_override"));
        } else {
          goto handle_unusual;
        }
        continue;
      // bool ignore = 3 [json_name = "ignore"];
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 24)) {
          _impl_.ignore_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // string description = 4 [json_name = "description"];
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_description();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "gen_bq_schema.BigQueryFieldOptions.description"));
        } else {
          goto handle_unusual;
        }
        continue;
      // string name = 5 [json_name = "name"];
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 42)) {
          auto str = _internal_mutable_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "gen_bq_schema.BigQueryFieldOptions.name"));
        } else {
          goto handle_unusual;
        }
        continue;
      // string policy_tags = 6 [json_name = "policyTags"];
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 50)) {
          auto str = _internal_mutable_policy_tags();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "gen_bq_schema.BigQueryFieldOptions.policy_tags"));
        } else {
          goto handle_unusual;
        }
        continue;
      // bool partition = 7 [json_name = "partition"];
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 56)) {
          _impl_.partition_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // bool cluster = 8 [json_name = "cluster"];
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 64)) {
          _impl_.cluster_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

::uint8_t* BigQueryFieldOptions::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:gen_bq_schema.BigQueryFieldOptions)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // bool require = 1 [json_name = "require"];
  if (this->_internal_require() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(
        1, this->_internal_require(), target);
  }

  // string type_override = 2 [json_name = "typeOverride"];
  if (!this->_internal_type_override().empty()) {
    const std::string& _s = this->_internal_type_override();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE, "gen_bq_schema.BigQueryFieldOptions.type_override");
    target = stream->WriteStringMaybeAliased(2, _s, target);
  }

  // bool ignore = 3 [json_name = "ignore"];
  if (this->_internal_ignore() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(
        3, this->_internal_ignore(), target);
  }

  // string description = 4 [json_name = "description"];
  if (!this->_internal_description().empty()) {
    const std::string& _s = this->_internal_description();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE, "gen_bq_schema.BigQueryFieldOptions.description");
    target = stream->WriteStringMaybeAliased(4, _s, target);
  }

  // string name = 5 [json_name = "name"];
  if (!this->_internal_name().empty()) {
    const std::string& _s = this->_internal_name();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE, "gen_bq_schema.BigQueryFieldOptions.name");
    target = stream->WriteStringMaybeAliased(5, _s, target);
  }

  // string policy_tags = 6 [json_name = "policyTags"];
  if (!this->_internal_policy_tags().empty()) {
    const std::string& _s = this->_internal_policy_tags();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE, "gen_bq_schema.BigQueryFieldOptions.policy_tags");
    target = stream->WriteStringMaybeAliased(6, _s, target);
  }

  // bool partition = 7 [json_name = "partition"];
  if (this->_internal_partition() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(
        7, this->_internal_partition(), target);
  }

  // bool cluster = 8 [json_name = "cluster"];
  if (this->_internal_cluster() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(
        8, this->_internal_cluster(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gen_bq_schema.BigQueryFieldOptions)
  return target;
}

::size_t BigQueryFieldOptions::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gen_bq_schema.BigQueryFieldOptions)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string type_override = 2 [json_name = "typeOverride"];
  if (!this->_internal_type_override().empty()) {
    total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                    this->_internal_type_override());
  }

  // string description = 4 [json_name = "description"];
  if (!this->_internal_description().empty()) {
    total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                    this->_internal_description());
  }

  // string name = 5 [json_name = "name"];
  if (!this->_internal_name().empty()) {
    total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                    this->_internal_name());
  }

  // string policy_tags = 6 [json_name = "policyTags"];
  if (!this->_internal_policy_tags().empty()) {
    total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                    this->_internal_policy_tags());
  }

  // bool require = 1 [json_name = "require"];
  if (this->_internal_require() != 0) {
    total_size += 2;
  }

  // bool ignore = 3 [json_name = "ignore"];
  if (this->_internal_ignore() != 0) {
    total_size += 2;
  }

  // bool partition = 7 [json_name = "partition"];
  if (this->_internal_partition() != 0) {
    total_size += 2;
  }

  // bool cluster = 8 [json_name = "cluster"];
  if (this->_internal_cluster() != 0) {
    total_size += 2;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData BigQueryFieldOptions::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    BigQueryFieldOptions::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*BigQueryFieldOptions::GetClassData() const { return &_class_data_; }


void BigQueryFieldOptions::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<BigQueryFieldOptions*>(&to_msg);
  auto& from = static_cast<const BigQueryFieldOptions&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:gen_bq_schema.BigQueryFieldOptions)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_type_override().empty()) {
    _this->_internal_set_type_override(from._internal_type_override());
  }
  if (!from._internal_description().empty()) {
    _this->_internal_set_description(from._internal_description());
  }
  if (!from._internal_name().empty()) {
    _this->_internal_set_name(from._internal_name());
  }
  if (!from._internal_policy_tags().empty()) {
    _this->_internal_set_policy_tags(from._internal_policy_tags());
  }
  if (from._internal_require() != 0) {
    _this->_internal_set_require(from._internal_require());
  }
  if (from._internal_ignore() != 0) {
    _this->_internal_set_ignore(from._internal_ignore());
  }
  if (from._internal_partition() != 0) {
    _this->_internal_set_partition(from._internal_partition());
  }
  if (from._internal_cluster() != 0) {
    _this->_internal_set_cluster(from._internal_cluster());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void BigQueryFieldOptions::CopyFrom(const BigQueryFieldOptions& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gen_bq_schema.BigQueryFieldOptions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BigQueryFieldOptions::IsInitialized() const {
  return true;
}

void BigQueryFieldOptions::InternalSwap(BigQueryFieldOptions* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.type_override_, lhs_arena,
                                       &other->_impl_.type_override_, rhs_arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.description_, lhs_arena,
                                       &other->_impl_.description_, rhs_arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.name_, lhs_arena,
                                       &other->_impl_.name_, rhs_arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.policy_tags_, lhs_arena,
                                       &other->_impl_.policy_tags_, rhs_arena);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(BigQueryFieldOptions, _impl_.cluster_)
      + sizeof(BigQueryFieldOptions::_impl_.cluster_)
      - PROTOBUF_FIELD_OFFSET(BigQueryFieldOptions, _impl_.require_)>(
          reinterpret_cast<char*>(&_impl_.require_),
          reinterpret_cast<char*>(&other->_impl_.require_));
}

::PROTOBUF_NAMESPACE_ID::Metadata BigQueryFieldOptions::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_cavnue_2fthird_5fparty_2fbq_2fv1_2fbq_5ffield_2eproto_getter, &descriptor_table_cavnue_2fthird_5fparty_2fbq_2fv1_2fbq_5ffield_2eproto_once,
      file_level_metadata_cavnue_2fthird_5fparty_2fbq_2fv1_2fbq_5ffield_2eproto[0]);
}
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::PROTOBUF_NAMESPACE_ID::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::MessageTypeTraits< ::gen_bq_schema::BigQueryFieldOptions >, 11, false>
  bigquery(kBigqueryFieldNumber, ::gen_bq_schema::BigQueryFieldOptions::default_instance(), nullptr);
// @@protoc_insertion_point(namespace_scope)
}  // namespace gen_bq_schema
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::gen_bq_schema::BigQueryFieldOptions*
Arena::CreateMaybeMessage< ::gen_bq_schema::BigQueryFieldOptions >(Arena* arena) {
  return Arena::CreateMessageInternal< ::gen_bq_schema::BigQueryFieldOptions >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
