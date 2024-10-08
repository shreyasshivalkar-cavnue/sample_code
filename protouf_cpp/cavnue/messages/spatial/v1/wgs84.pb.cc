// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cavnue/messages/spatial/v1/wgs84.proto

#include "cavnue/messages/spatial/v1/wgs84.pb.h"

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
PROTOBUF_CONSTEXPR WGS84::WGS84(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.lat_)*/ 0

  , /*decltype(_impl_.lon_)*/ 0

  , /*decltype(_impl_.elevation_)*/ 0

  , /*decltype(_impl_._cached_size_)*/{}} {}
struct WGS84DefaultTypeInternal {
  PROTOBUF_CONSTEXPR WGS84DefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~WGS84DefaultTypeInternal() {}
  union {
    WGS84 _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 WGS84DefaultTypeInternal _WGS84_default_instance_;
}  // namespace v1
}  // namespace spatial
}  // namespace messages
}  // namespace cavnue
static ::_pb::Metadata file_level_metadata_cavnue_2fmessages_2fspatial_2fv1_2fwgs84_2eproto[1];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_cavnue_2fmessages_2fspatial_2fv1_2fwgs84_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_cavnue_2fmessages_2fspatial_2fv1_2fwgs84_2eproto = nullptr;
const ::uint32_t TableStruct_cavnue_2fmessages_2fspatial_2fv1_2fwgs84_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::cavnue::messages::spatial::v1::WGS84, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::cavnue::messages::spatial::v1::WGS84, _impl_.lat_),
    PROTOBUF_FIELD_OFFSET(::cavnue::messages::spatial::v1::WGS84, _impl_.lon_),
    PROTOBUF_FIELD_OFFSET(::cavnue::messages::spatial::v1::WGS84, _impl_.elevation_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, -1, -1, sizeof(::cavnue::messages::spatial::v1::WGS84)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::cavnue::messages::spatial::v1::_WGS84_default_instance_._instance,
};
const char descriptor_table_protodef_cavnue_2fmessages_2fspatial_2fv1_2fwgs84_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n&cavnue/messages/spatial/v1/wgs84.proto"
    "\022\032cavnue.messages.spatial.v1\"I\n\005WGS84\022\020\n"
    "\003lat\030\001 \001(\001R\003lat\022\020\n\003lon\030\002 \001(\001R\003lon\022\034\n\tele"
    "vation\030\003 \001(\002R\televationb\006proto3"
};
static ::absl::once_flag descriptor_table_cavnue_2fmessages_2fspatial_2fv1_2fwgs84_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_cavnue_2fmessages_2fspatial_2fv1_2fwgs84_2eproto = {
    false,
    false,
    151,
    descriptor_table_protodef_cavnue_2fmessages_2fspatial_2fv1_2fwgs84_2eproto,
    "cavnue/messages/spatial/v1/wgs84.proto",
    &descriptor_table_cavnue_2fmessages_2fspatial_2fv1_2fwgs84_2eproto_once,
    nullptr,
    0,
    1,
    schemas,
    file_default_instances,
    TableStruct_cavnue_2fmessages_2fspatial_2fv1_2fwgs84_2eproto::offsets,
    file_level_metadata_cavnue_2fmessages_2fspatial_2fv1_2fwgs84_2eproto,
    file_level_enum_descriptors_cavnue_2fmessages_2fspatial_2fv1_2fwgs84_2eproto,
    file_level_service_descriptors_cavnue_2fmessages_2fspatial_2fv1_2fwgs84_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_cavnue_2fmessages_2fspatial_2fv1_2fwgs84_2eproto_getter() {
  return &descriptor_table_cavnue_2fmessages_2fspatial_2fv1_2fwgs84_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_cavnue_2fmessages_2fspatial_2fv1_2fwgs84_2eproto(&descriptor_table_cavnue_2fmessages_2fspatial_2fv1_2fwgs84_2eproto);
namespace cavnue {
namespace messages {
namespace spatial {
namespace v1 {
// ===================================================================

class WGS84::_Internal {
 public:
};

WGS84::WGS84(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:cavnue.messages.spatial.v1.WGS84)
}
WGS84::WGS84(const WGS84& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(), _impl_(from._impl_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
      from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:cavnue.messages.spatial.v1.WGS84)
}

inline void WGS84::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_.lat_) { 0 }

    , decltype(_impl_.lon_) { 0 }

    , decltype(_impl_.elevation_) { 0 }

    , /*decltype(_impl_._cached_size_)*/{}
  };
}

WGS84::~WGS84() {
  // @@protoc_insertion_point(destructor:cavnue.messages.spatial.v1.WGS84)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void WGS84::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
}

void WGS84::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void WGS84::Clear() {
// @@protoc_insertion_point(message_clear_start:cavnue.messages.spatial.v1.WGS84)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&_impl_.lat_, 0, static_cast<::size_t>(
      reinterpret_cast<char*>(&_impl_.elevation_) -
      reinterpret_cast<char*>(&_impl_.lat_)) + sizeof(_impl_.elevation_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* WGS84::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // double lat = 1 [json_name = "lat"];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 9)) {
          _impl_.lat_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else {
          goto handle_unusual;
        }
        continue;
      // double lon = 2 [json_name = "lon"];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 17)) {
          _impl_.lon_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else {
          goto handle_unusual;
        }
        continue;
      // float elevation = 3 [json_name = "elevation"];
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 29)) {
          _impl_.elevation_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
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

::uint8_t* WGS84::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:cavnue.messages.spatial.v1.WGS84)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // double lat = 1 [json_name = "lat"];
  static_assert(sizeof(::uint64_t) == sizeof(double), "Code assumes ::uint64_t and double are the same size.");
  double tmp_lat = this->_internal_lat();
  ::uint64_t raw_lat;
  memcpy(&raw_lat, &tmp_lat, sizeof(tmp_lat));
  if (raw_lat != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteDoubleToArray(
        1, this->_internal_lat(), target);
  }

  // double lon = 2 [json_name = "lon"];
  static_assert(sizeof(::uint64_t) == sizeof(double), "Code assumes ::uint64_t and double are the same size.");
  double tmp_lon = this->_internal_lon();
  ::uint64_t raw_lon;
  memcpy(&raw_lon, &tmp_lon, sizeof(tmp_lon));
  if (raw_lon != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteDoubleToArray(
        2, this->_internal_lon(), target);
  }

  // float elevation = 3 [json_name = "elevation"];
  static_assert(sizeof(::uint32_t) == sizeof(float), "Code assumes ::uint32_t and float are the same size.");
  float tmp_elevation = this->_internal_elevation();
  ::uint32_t raw_elevation;
  memcpy(&raw_elevation, &tmp_elevation, sizeof(tmp_elevation));
  if (raw_elevation != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(
        3, this->_internal_elevation(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:cavnue.messages.spatial.v1.WGS84)
  return target;
}

::size_t WGS84::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:cavnue.messages.spatial.v1.WGS84)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // double lat = 1 [json_name = "lat"];
  static_assert(sizeof(::uint64_t) == sizeof(double), "Code assumes ::uint64_t and double are the same size.");
  double tmp_lat = this->_internal_lat();
  ::uint64_t raw_lat;
  memcpy(&raw_lat, &tmp_lat, sizeof(tmp_lat));
  if (raw_lat != 0) {
    total_size += 9;
  }

  // double lon = 2 [json_name = "lon"];
  static_assert(sizeof(::uint64_t) == sizeof(double), "Code assumes ::uint64_t and double are the same size.");
  double tmp_lon = this->_internal_lon();
  ::uint64_t raw_lon;
  memcpy(&raw_lon, &tmp_lon, sizeof(tmp_lon));
  if (raw_lon != 0) {
    total_size += 9;
  }

  // float elevation = 3 [json_name = "elevation"];
  static_assert(sizeof(::uint32_t) == sizeof(float), "Code assumes ::uint32_t and float are the same size.");
  float tmp_elevation = this->_internal_elevation();
  ::uint32_t raw_elevation;
  memcpy(&raw_elevation, &tmp_elevation, sizeof(tmp_elevation));
  if (raw_elevation != 0) {
    total_size += 5;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData WGS84::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    WGS84::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*WGS84::GetClassData() const { return &_class_data_; }


void WGS84::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<WGS84*>(&to_msg);
  auto& from = static_cast<const WGS84&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:cavnue.messages.spatial.v1.WGS84)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  static_assert(sizeof(::uint64_t) == sizeof(double), "Code assumes ::uint64_t and double are the same size.");
  double tmp_lat = from._internal_lat();
  ::uint64_t raw_lat;
  memcpy(&raw_lat, &tmp_lat, sizeof(tmp_lat));
  if (raw_lat != 0) {
    _this->_internal_set_lat(from._internal_lat());
  }
  static_assert(sizeof(::uint64_t) == sizeof(double), "Code assumes ::uint64_t and double are the same size.");
  double tmp_lon = from._internal_lon();
  ::uint64_t raw_lon;
  memcpy(&raw_lon, &tmp_lon, sizeof(tmp_lon));
  if (raw_lon != 0) {
    _this->_internal_set_lon(from._internal_lon());
  }
  static_assert(sizeof(::uint32_t) == sizeof(float), "Code assumes ::uint32_t and float are the same size.");
  float tmp_elevation = from._internal_elevation();
  ::uint32_t raw_elevation;
  memcpy(&raw_elevation, &tmp_elevation, sizeof(tmp_elevation));
  if (raw_elevation != 0) {
    _this->_internal_set_elevation(from._internal_elevation());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void WGS84::CopyFrom(const WGS84& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cavnue.messages.spatial.v1.WGS84)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool WGS84::IsInitialized() const {
  return true;
}

void WGS84::InternalSwap(WGS84* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(WGS84, _impl_.elevation_)
      + sizeof(WGS84::_impl_.elevation_)
      - PROTOBUF_FIELD_OFFSET(WGS84, _impl_.lat_)>(
          reinterpret_cast<char*>(&_impl_.lat_),
          reinterpret_cast<char*>(&other->_impl_.lat_));
}

::PROTOBUF_NAMESPACE_ID::Metadata WGS84::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_cavnue_2fmessages_2fspatial_2fv1_2fwgs84_2eproto_getter, &descriptor_table_cavnue_2fmessages_2fspatial_2fv1_2fwgs84_2eproto_once,
      file_level_metadata_cavnue_2fmessages_2fspatial_2fv1_2fwgs84_2eproto[0]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace spatial
}  // namespace messages
}  // namespace cavnue
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::cavnue::messages::spatial::v1::WGS84*
Arena::CreateMaybeMessage< ::cavnue::messages::spatial::v1::WGS84 >(Arena* arena) {
  return Arena::CreateMessageInternal< ::cavnue::messages::spatial::v1::WGS84 >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
