// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cavnue/messages/spatial/v1/utm.proto

#include "cavnue/messages/spatial/v1/utm.pb.h"

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
namespace cavnue {
namespace messages {
namespace spatial {
namespace v1 {
template <typename>
PROTOBUF_CONSTEXPR UTMProjection::UTMProjection(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.zone_)*/ 0

  , /*decltype(_impl_.north_)*/ false

  , /*decltype(_impl_._cached_size_)*/{}} {}
struct UTMProjectionDefaultTypeInternal {
  PROTOBUF_CONSTEXPR UTMProjectionDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~UTMProjectionDefaultTypeInternal() {}
  union {
    UTMProjection _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 UTMProjectionDefaultTypeInternal _UTMProjection_default_instance_;
}  // namespace v1
}  // namespace spatial
}  // namespace messages
}  // namespace cavnue
static ::_pb::Metadata file_level_metadata_cavnue_2fmessages_2fspatial_2fv1_2futm_2eproto[1];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_cavnue_2fmessages_2fspatial_2fv1_2futm_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_cavnue_2fmessages_2fspatial_2fv1_2futm_2eproto = nullptr;
const ::uint32_t TableStruct_cavnue_2fmessages_2fspatial_2fv1_2futm_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::cavnue::messages::spatial::v1::UTMProjection, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::cavnue::messages::spatial::v1::UTMProjection, _impl_.zone_),
    PROTOBUF_FIELD_OFFSET(::cavnue::messages::spatial::v1::UTMProjection, _impl_.north_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, -1, -1, sizeof(::cavnue::messages::spatial::v1::UTMProjection)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::cavnue::messages::spatial::v1::_UTMProjection_default_instance_._instance,
};
const char descriptor_table_protodef_cavnue_2fmessages_2fspatial_2fv1_2futm_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n$cavnue/messages/spatial/v1/utm.proto\022\032"
    "cavnue.messages.spatial.v1\"9\n\rUTMProject"
    "ion\022\022\n\004zone\030\001 \001(\005R\004zone\022\024\n\005north\030\002 \001(\010R\005"
    "northb\006proto3"
};
static ::absl::once_flag descriptor_table_cavnue_2fmessages_2fspatial_2fv1_2futm_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_cavnue_2fmessages_2fspatial_2fv1_2futm_2eproto = {
    false,
    false,
    133,
    descriptor_table_protodef_cavnue_2fmessages_2fspatial_2fv1_2futm_2eproto,
    "cavnue/messages/spatial/v1/utm.proto",
    &descriptor_table_cavnue_2fmessages_2fspatial_2fv1_2futm_2eproto_once,
    nullptr,
    0,
    1,
    schemas,
    file_default_instances,
    TableStruct_cavnue_2fmessages_2fspatial_2fv1_2futm_2eproto::offsets,
    file_level_metadata_cavnue_2fmessages_2fspatial_2fv1_2futm_2eproto,
    file_level_enum_descriptors_cavnue_2fmessages_2fspatial_2fv1_2futm_2eproto,
    file_level_service_descriptors_cavnue_2fmessages_2fspatial_2fv1_2futm_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_cavnue_2fmessages_2fspatial_2fv1_2futm_2eproto_getter() {
  return &descriptor_table_cavnue_2fmessages_2fspatial_2fv1_2futm_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_cavnue_2fmessages_2fspatial_2fv1_2futm_2eproto(&descriptor_table_cavnue_2fmessages_2fspatial_2fv1_2futm_2eproto);
namespace cavnue {
namespace messages {
namespace spatial {
namespace v1 {
// ===================================================================

class UTMProjection::_Internal {
 public:
};

UTMProjection::UTMProjection(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:cavnue.messages.spatial.v1.UTMProjection)
}
UTMProjection::UTMProjection(const UTMProjection& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(), _impl_(from._impl_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
      from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:cavnue.messages.spatial.v1.UTMProjection)
}

inline void UTMProjection::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_.zone_) { 0 }

    , decltype(_impl_.north_) { false }

    , /*decltype(_impl_._cached_size_)*/{}
  };
}

UTMProjection::~UTMProjection() {
  // @@protoc_insertion_point(destructor:cavnue.messages.spatial.v1.UTMProjection)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void UTMProjection::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
}

void UTMProjection::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void UTMProjection::Clear() {
// @@protoc_insertion_point(message_clear_start:cavnue.messages.spatial.v1.UTMProjection)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&_impl_.zone_, 0, static_cast<::size_t>(
      reinterpret_cast<char*>(&_impl_.north_) -
      reinterpret_cast<char*>(&_impl_.zone_)) + sizeof(_impl_.north_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* UTMProjection::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 zone = 1 [json_name = "zone"];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 8)) {
          _impl_.zone_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // bool north = 2 [json_name = "north"];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 16)) {
          _impl_.north_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

::uint8_t* UTMProjection::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:cavnue.messages.spatial.v1.UTMProjection)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 zone = 1 [json_name = "zone"];
  if (this->_internal_zone() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(
        1, this->_internal_zone(), target);
  }

  // bool north = 2 [json_name = "north"];
  if (this->_internal_north() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(
        2, this->_internal_north(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:cavnue.messages.spatial.v1.UTMProjection)
  return target;
}

::size_t UTMProjection::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:cavnue.messages.spatial.v1.UTMProjection)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 zone = 1 [json_name = "zone"];
  if (this->_internal_zone() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
        this->_internal_zone());
  }

  // bool north = 2 [json_name = "north"];
  if (this->_internal_north() != 0) {
    total_size += 2;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData UTMProjection::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    UTMProjection::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*UTMProjection::GetClassData() const { return &_class_data_; }


void UTMProjection::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<UTMProjection*>(&to_msg);
  auto& from = static_cast<const UTMProjection&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:cavnue.messages.spatial.v1.UTMProjection)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_zone() != 0) {
    _this->_internal_set_zone(from._internal_zone());
  }
  if (from._internal_north() != 0) {
    _this->_internal_set_north(from._internal_north());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void UTMProjection::CopyFrom(const UTMProjection& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cavnue.messages.spatial.v1.UTMProjection)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UTMProjection::IsInitialized() const {
  return true;
}

void UTMProjection::InternalSwap(UTMProjection* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(UTMProjection, _impl_.north_)
      + sizeof(UTMProjection::_impl_.north_)
      - PROTOBUF_FIELD_OFFSET(UTMProjection, _impl_.zone_)>(
          reinterpret_cast<char*>(&_impl_.zone_),
          reinterpret_cast<char*>(&other->_impl_.zone_));
}

::PROTOBUF_NAMESPACE_ID::Metadata UTMProjection::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_cavnue_2fmessages_2fspatial_2fv1_2futm_2eproto_getter, &descriptor_table_cavnue_2fmessages_2fspatial_2fv1_2futm_2eproto_once,
      file_level_metadata_cavnue_2fmessages_2fspatial_2fv1_2futm_2eproto[0]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace spatial
}  // namespace messages
}  // namespace cavnue
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::cavnue::messages::spatial::v1::UTMProjection*
Arena::CreateMaybeMessage< ::cavnue::messages::spatial::v1::UTMProjection >(Arena* arena) {
  return Arena::CreateMessageInternal< ::cavnue::messages::spatial::v1::UTMProjection >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
