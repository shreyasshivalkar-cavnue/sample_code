// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cavnue/messages/geometry/v1/pose.proto

#include "cavnue/messages/geometry/v1/pose.pb.h"

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
namespace geometry {
namespace v1 {
template <typename>
PROTOBUF_CONSTEXPR Attitude::Attitude(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.roll_)*/ 0

  , /*decltype(_impl_.pitch_)*/ 0

  , /*decltype(_impl_.yaw_)*/ 0

  , /*decltype(_impl_._cached_size_)*/{}} {}
struct AttitudeDefaultTypeInternal {
  PROTOBUF_CONSTEXPR AttitudeDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~AttitudeDefaultTypeInternal() {}
  union {
    Attitude _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 AttitudeDefaultTypeInternal _Attitude_default_instance_;
template <typename>
PROTOBUF_CONSTEXPR Pose_None::Pose_None(
    ::_pbi::ConstantInitialized) {}
struct Pose_NoneDefaultTypeInternal {
  PROTOBUF_CONSTEXPR Pose_NoneDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~Pose_NoneDefaultTypeInternal() {}
  union {
    Pose_None _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 Pose_NoneDefaultTypeInternal _Pose_None_default_instance_;
template <typename>
PROTOBUF_CONSTEXPR Pose::Pose(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.point_)*/nullptr
  , /*decltype(_impl_.orientation_)*/{}
  , /*decltype(_impl_._oneof_case_)*/{}} {}
struct PoseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR PoseDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~PoseDefaultTypeInternal() {}
  union {
    Pose _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 PoseDefaultTypeInternal _Pose_default_instance_;
}  // namespace v1
}  // namespace geometry
}  // namespace messages
}  // namespace cavnue
static ::_pb::Metadata file_level_metadata_cavnue_2fmessages_2fgeometry_2fv1_2fpose_2eproto[3];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_cavnue_2fmessages_2fgeometry_2fv1_2fpose_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_cavnue_2fmessages_2fgeometry_2fv1_2fpose_2eproto = nullptr;
const ::uint32_t TableStruct_cavnue_2fmessages_2fgeometry_2fv1_2fpose_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::cavnue::messages::geometry::v1::Attitude, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::cavnue::messages::geometry::v1::Attitude, _impl_.roll_),
    PROTOBUF_FIELD_OFFSET(::cavnue::messages::geometry::v1::Attitude, _impl_.pitch_),
    PROTOBUF_FIELD_OFFSET(::cavnue::messages::geometry::v1::Attitude, _impl_.yaw_),
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::cavnue::messages::geometry::v1::Pose_None, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::cavnue::messages::geometry::v1::Pose, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::cavnue::messages::geometry::v1::Pose, _internal_metadata_),
    ~0u,  // no _extensions_
    PROTOBUF_FIELD_OFFSET(::cavnue::messages::geometry::v1::Pose, _impl_._oneof_case_[0]),
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::cavnue::messages::geometry::v1::Pose, _impl_.point_),
    ::_pbi::kInvalidFieldOffsetTag,
    ::_pbi::kInvalidFieldOffsetTag,
    ::_pbi::kInvalidFieldOffsetTag,
    PROTOBUF_FIELD_OFFSET(::cavnue::messages::geometry::v1::Pose, _impl_.orientation_),
    0,
    ~0u,
    ~0u,
    ~0u,
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, -1, -1, sizeof(::cavnue::messages::geometry::v1::Attitude)},
        { 11, -1, -1, sizeof(::cavnue::messages::geometry::v1::Pose_None)},
        { 19, 32, -1, sizeof(::cavnue::messages::geometry::v1::Pose)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::cavnue::messages::geometry::v1::_Attitude_default_instance_._instance,
    &::cavnue::messages::geometry::v1::_Pose_None_default_instance_._instance,
    &::cavnue::messages::geometry::v1::_Pose_default_instance_._instance,
};
const char descriptor_table_protodef_cavnue_2fmessages_2fgeometry_2fv1_2fpose_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n&cavnue/messages/geometry/v1/pose.proto"
    "\022\033cavnue.messages.geometry.v1\032\'cavnue/me"
    "ssages/geometry/v1/point.proto\"F\n\010Attitu"
    "de\022\022\n\004roll\030\001 \001(\002R\004roll\022\024\n\005pitch\030\002 \001(\002R\005p"
    "itch\022\020\n\003yaw\030\003 \001(\002R\003yaw\"\236\002\n\004Pose\022:\n\005point"
    "\030\001 \001(\0132$.cavnue.messages.geometry.v1.Poi"
    "nt3fR\005point\022C\n\010attitude\030\002 \001(\0132%.cavnue.m"
    "essages.geometry.v1.AttitudeH\000R\010attitude"
    "\022@\n\005angle\030\003 \001(\0132(.cavnue.messages.geomet"
    "ry.v1.QuaternionfH\000R\005angle\022<\n\004none\030\004 \001(\013"
    "2&.cavnue.messages.geometry.v1.Pose.None"
    "H\000R\004none\032\006\n\004NoneB\r\n\013orientationb\006proto3"
};
static const ::_pbi::DescriptorTable* const descriptor_table_cavnue_2fmessages_2fgeometry_2fv1_2fpose_2eproto_deps[1] =
    {
        &::descriptor_table_cavnue_2fmessages_2fgeometry_2fv1_2fpoint_2eproto,
};
static ::absl::once_flag descriptor_table_cavnue_2fmessages_2fgeometry_2fv1_2fpose_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_cavnue_2fmessages_2fgeometry_2fv1_2fpose_2eproto = {
    false,
    false,
    479,
    descriptor_table_protodef_cavnue_2fmessages_2fgeometry_2fv1_2fpose_2eproto,
    "cavnue/messages/geometry/v1/pose.proto",
    &descriptor_table_cavnue_2fmessages_2fgeometry_2fv1_2fpose_2eproto_once,
    descriptor_table_cavnue_2fmessages_2fgeometry_2fv1_2fpose_2eproto_deps,
    1,
    3,
    schemas,
    file_default_instances,
    TableStruct_cavnue_2fmessages_2fgeometry_2fv1_2fpose_2eproto::offsets,
    file_level_metadata_cavnue_2fmessages_2fgeometry_2fv1_2fpose_2eproto,
    file_level_enum_descriptors_cavnue_2fmessages_2fgeometry_2fv1_2fpose_2eproto,
    file_level_service_descriptors_cavnue_2fmessages_2fgeometry_2fv1_2fpose_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_cavnue_2fmessages_2fgeometry_2fv1_2fpose_2eproto_getter() {
  return &descriptor_table_cavnue_2fmessages_2fgeometry_2fv1_2fpose_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_cavnue_2fmessages_2fgeometry_2fv1_2fpose_2eproto(&descriptor_table_cavnue_2fmessages_2fgeometry_2fv1_2fpose_2eproto);
namespace cavnue {
namespace messages {
namespace geometry {
namespace v1 {
// ===================================================================

class Attitude::_Internal {
 public:
};

Attitude::Attitude(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:cavnue.messages.geometry.v1.Attitude)
}
Attitude::Attitude(const Attitude& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(), _impl_(from._impl_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
      from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:cavnue.messages.geometry.v1.Attitude)
}

inline void Attitude::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_.roll_) { 0 }

    , decltype(_impl_.pitch_) { 0 }

    , decltype(_impl_.yaw_) { 0 }

    , /*decltype(_impl_._cached_size_)*/{}
  };
}

Attitude::~Attitude() {
  // @@protoc_insertion_point(destructor:cavnue.messages.geometry.v1.Attitude)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Attitude::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
}

void Attitude::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Attitude::Clear() {
// @@protoc_insertion_point(message_clear_start:cavnue.messages.geometry.v1.Attitude)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&_impl_.roll_, 0, static_cast<::size_t>(
      reinterpret_cast<char*>(&_impl_.yaw_) -
      reinterpret_cast<char*>(&_impl_.roll_)) + sizeof(_impl_.yaw_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Attitude::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // float roll = 1 [json_name = "roll"];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 13)) {
          _impl_.roll_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else {
          goto handle_unusual;
        }
        continue;
      // float pitch = 2 [json_name = "pitch"];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 21)) {
          _impl_.pitch_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else {
          goto handle_unusual;
        }
        continue;
      // float yaw = 3 [json_name = "yaw"];
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 29)) {
          _impl_.yaw_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
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

::uint8_t* Attitude::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:cavnue.messages.geometry.v1.Attitude)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // float roll = 1 [json_name = "roll"];
  static_assert(sizeof(::uint32_t) == sizeof(float), "Code assumes ::uint32_t and float are the same size.");
  float tmp_roll = this->_internal_roll();
  ::uint32_t raw_roll;
  memcpy(&raw_roll, &tmp_roll, sizeof(tmp_roll));
  if (raw_roll != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(
        1, this->_internal_roll(), target);
  }

  // float pitch = 2 [json_name = "pitch"];
  static_assert(sizeof(::uint32_t) == sizeof(float), "Code assumes ::uint32_t and float are the same size.");
  float tmp_pitch = this->_internal_pitch();
  ::uint32_t raw_pitch;
  memcpy(&raw_pitch, &tmp_pitch, sizeof(tmp_pitch));
  if (raw_pitch != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(
        2, this->_internal_pitch(), target);
  }

  // float yaw = 3 [json_name = "yaw"];
  static_assert(sizeof(::uint32_t) == sizeof(float), "Code assumes ::uint32_t and float are the same size.");
  float tmp_yaw = this->_internal_yaw();
  ::uint32_t raw_yaw;
  memcpy(&raw_yaw, &tmp_yaw, sizeof(tmp_yaw));
  if (raw_yaw != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(
        3, this->_internal_yaw(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:cavnue.messages.geometry.v1.Attitude)
  return target;
}

::size_t Attitude::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:cavnue.messages.geometry.v1.Attitude)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // float roll = 1 [json_name = "roll"];
  static_assert(sizeof(::uint32_t) == sizeof(float), "Code assumes ::uint32_t and float are the same size.");
  float tmp_roll = this->_internal_roll();
  ::uint32_t raw_roll;
  memcpy(&raw_roll, &tmp_roll, sizeof(tmp_roll));
  if (raw_roll != 0) {
    total_size += 5;
  }

  // float pitch = 2 [json_name = "pitch"];
  static_assert(sizeof(::uint32_t) == sizeof(float), "Code assumes ::uint32_t and float are the same size.");
  float tmp_pitch = this->_internal_pitch();
  ::uint32_t raw_pitch;
  memcpy(&raw_pitch, &tmp_pitch, sizeof(tmp_pitch));
  if (raw_pitch != 0) {
    total_size += 5;
  }

  // float yaw = 3 [json_name = "yaw"];
  static_assert(sizeof(::uint32_t) == sizeof(float), "Code assumes ::uint32_t and float are the same size.");
  float tmp_yaw = this->_internal_yaw();
  ::uint32_t raw_yaw;
  memcpy(&raw_yaw, &tmp_yaw, sizeof(tmp_yaw));
  if (raw_yaw != 0) {
    total_size += 5;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Attitude::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Attitude::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Attitude::GetClassData() const { return &_class_data_; }


void Attitude::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Attitude*>(&to_msg);
  auto& from = static_cast<const Attitude&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:cavnue.messages.geometry.v1.Attitude)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  static_assert(sizeof(::uint32_t) == sizeof(float), "Code assumes ::uint32_t and float are the same size.");
  float tmp_roll = from._internal_roll();
  ::uint32_t raw_roll;
  memcpy(&raw_roll, &tmp_roll, sizeof(tmp_roll));
  if (raw_roll != 0) {
    _this->_internal_set_roll(from._internal_roll());
  }
  static_assert(sizeof(::uint32_t) == sizeof(float), "Code assumes ::uint32_t and float are the same size.");
  float tmp_pitch = from._internal_pitch();
  ::uint32_t raw_pitch;
  memcpy(&raw_pitch, &tmp_pitch, sizeof(tmp_pitch));
  if (raw_pitch != 0) {
    _this->_internal_set_pitch(from._internal_pitch());
  }
  static_assert(sizeof(::uint32_t) == sizeof(float), "Code assumes ::uint32_t and float are the same size.");
  float tmp_yaw = from._internal_yaw();
  ::uint32_t raw_yaw;
  memcpy(&raw_yaw, &tmp_yaw, sizeof(tmp_yaw));
  if (raw_yaw != 0) {
    _this->_internal_set_yaw(from._internal_yaw());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Attitude::CopyFrom(const Attitude& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cavnue.messages.geometry.v1.Attitude)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Attitude::IsInitialized() const {
  return true;
}

void Attitude::InternalSwap(Attitude* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Attitude, _impl_.yaw_)
      + sizeof(Attitude::_impl_.yaw_)
      - PROTOBUF_FIELD_OFFSET(Attitude, _impl_.roll_)>(
          reinterpret_cast<char*>(&_impl_.roll_),
          reinterpret_cast<char*>(&other->_impl_.roll_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Attitude::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_cavnue_2fmessages_2fgeometry_2fv1_2fpose_2eproto_getter, &descriptor_table_cavnue_2fmessages_2fgeometry_2fv1_2fpose_2eproto_once,
      file_level_metadata_cavnue_2fmessages_2fgeometry_2fv1_2fpose_2eproto[0]);
}
// ===================================================================

class Pose_None::_Internal {
 public:
};

Pose_None::Pose_None(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase(arena) {
  // @@protoc_insertion_point(arena_constructor:cavnue.messages.geometry.v1.Pose.None)
}
Pose_None::Pose_None(const Pose_None& from)
  : ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase() {
  Pose_None* const _this = this; (void)_this;
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:cavnue.messages.geometry.v1.Pose.None)
}





const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Pose_None::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyImpl,
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeImpl,
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Pose_None::GetClassData() const { return &_class_data_; }







::PROTOBUF_NAMESPACE_ID::Metadata Pose_None::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_cavnue_2fmessages_2fgeometry_2fv1_2fpose_2eproto_getter, &descriptor_table_cavnue_2fmessages_2fgeometry_2fv1_2fpose_2eproto_once,
      file_level_metadata_cavnue_2fmessages_2fgeometry_2fv1_2fpose_2eproto[1]);
}
// ===================================================================

class Pose::_Internal {
 public:
  using HasBits = decltype(std::declval<Pose>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(Pose, _impl_._has_bits_);
  static constexpr ::int32_t kOneofCaseOffset =
    PROTOBUF_FIELD_OFFSET(::cavnue::messages::geometry::v1::Pose, _impl_._oneof_case_);
  static const ::cavnue::messages::geometry::v1::Point3f& point(const Pose* msg);
  static void set_has_point(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static const ::cavnue::messages::geometry::v1::Attitude& attitude(const Pose* msg);
  static const ::cavnue::messages::geometry::v1::Quaternionf& angle(const Pose* msg);
  static const ::cavnue::messages::geometry::v1::Pose_None& none(const Pose* msg);
};

const ::cavnue::messages::geometry::v1::Point3f&
Pose::_Internal::point(const Pose* msg) {
  return *msg->_impl_.point_;
}
const ::cavnue::messages::geometry::v1::Attitude&
Pose::_Internal::attitude(const Pose* msg) {
  return *msg->_impl_.orientation_.attitude_;
}
const ::cavnue::messages::geometry::v1::Quaternionf&
Pose::_Internal::angle(const Pose* msg) {
  return *msg->_impl_.orientation_.angle_;
}
const ::cavnue::messages::geometry::v1::Pose_None&
Pose::_Internal::none(const Pose* msg) {
  return *msg->_impl_.orientation_.none_;
}
void Pose::clear_point() {
  if (_impl_.point_ != nullptr) _impl_.point_->Clear();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
void Pose::set_allocated_attitude(::cavnue::messages::geometry::v1::Attitude* attitude) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  clear_orientation();
  if (attitude) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(attitude);
    if (message_arena != submessage_arena) {
      attitude = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, attitude, submessage_arena);
    }
    set_has_attitude();
    _impl_.orientation_.attitude_ = attitude;
  }
  // @@protoc_insertion_point(field_set_allocated:cavnue.messages.geometry.v1.Pose.attitude)
}
void Pose::set_allocated_angle(::cavnue::messages::geometry::v1::Quaternionf* angle) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  clear_orientation();
  if (angle) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(angle));
    if (message_arena != submessage_arena) {
      angle = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, angle, submessage_arena);
    }
    set_has_angle();
    _impl_.orientation_.angle_ = angle;
  }
  // @@protoc_insertion_point(field_set_allocated:cavnue.messages.geometry.v1.Pose.angle)
}
void Pose::clear_angle() {
  if (orientation_case() == kAngle) {
    if (GetArenaForAllocation() == nullptr) {
      delete _impl_.orientation_.angle_;
    }
    clear_has_orientation();
  }
}
void Pose::set_allocated_none(::cavnue::messages::geometry::v1::Pose_None* none) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  clear_orientation();
  if (none) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(none);
    if (message_arena != submessage_arena) {
      none = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, none, submessage_arena);
    }
    set_has_none();
    _impl_.orientation_.none_ = none;
  }
  // @@protoc_insertion_point(field_set_allocated:cavnue.messages.geometry.v1.Pose.none)
}
Pose::Pose(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:cavnue.messages.geometry.v1.Pose)
}
Pose::Pose(const Pose& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Pose* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.point_){nullptr}
    , decltype(_impl_.orientation_){}
    , /*decltype(_impl_._oneof_case_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_impl_.point_ = new ::cavnue::messages::geometry::v1::Point3f(*from._impl_.point_);
  }
  clear_has_orientation();
  switch (from.orientation_case()) {
    case kAttitude: {
      _this->_internal_mutable_attitude()->::cavnue::messages::geometry::v1::Attitude::MergeFrom(
          from._internal_attitude());
      break;
    }
    case kAngle: {
      _this->_internal_mutable_angle()->::cavnue::messages::geometry::v1::Quaternionf::MergeFrom(
          from._internal_angle());
      break;
    }
    case kNone: {
      _this->_internal_mutable_none()->::cavnue::messages::geometry::v1::Pose_None::MergeFrom(
          from._internal_none());
      break;
    }
    case ORIENTATION_NOT_SET: {
      break;
    }
  }
  // @@protoc_insertion_point(copy_constructor:cavnue.messages.geometry.v1.Pose)
}

inline void Pose::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.point_){nullptr}
    , decltype(_impl_.orientation_){}
    , /*decltype(_impl_._oneof_case_)*/{}
  };
  clear_has_orientation();
}

Pose::~Pose() {
  // @@protoc_insertion_point(destructor:cavnue.messages.geometry.v1.Pose)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Pose::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete _impl_.point_;
  if (has_orientation()) {
    clear_orientation();
  }
}

void Pose::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Pose::clear_orientation() {
// @@protoc_insertion_point(one_of_clear_start:cavnue.messages.geometry.v1.Pose)
  switch (orientation_case()) {
    case kAttitude: {
      if (GetArenaForAllocation() == nullptr) {
        delete _impl_.orientation_.attitude_;
      }
      break;
    }
    case kAngle: {
      if (GetArenaForAllocation() == nullptr) {
        delete _impl_.orientation_.angle_;
      }
      break;
    }
    case kNone: {
      if (GetArenaForAllocation() == nullptr) {
        delete _impl_.orientation_.none_;
      }
      break;
    }
    case ORIENTATION_NOT_SET: {
      break;
    }
  }
  _impl_._oneof_case_[0] = ORIENTATION_NOT_SET;
}


void Pose::Clear() {
// @@protoc_insertion_point(message_clear_start:cavnue.messages.geometry.v1.Pose)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    ABSL_DCHECK(_impl_.point_ != nullptr);
    _impl_.point_->Clear();
  }
  clear_orientation();
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Pose::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .cavnue.messages.geometry.v1.Point3f point = 1 [json_name = "point"];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_point(), ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // .cavnue.messages.geometry.v1.Attitude attitude = 2 [json_name = "attitude"];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_attitude(), ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // .cavnue.messages.geometry.v1.Quaternionf angle = 3 [json_name = "angle"];
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_angle(), ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // .cavnue.messages.geometry.v1.Pose.None none = 4 [json_name = "none"];
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 34)) {
          ptr = ctx->ParseMessage(_internal_mutable_none(), ptr);
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
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

::uint8_t* Pose::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:cavnue.messages.geometry.v1.Pose)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // .cavnue.messages.geometry.v1.Point3f point = 1 [json_name = "point"];
  if (cached_has_bits & 0x00000001u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, _Internal::point(this),
        _Internal::point(this).GetCachedSize(), target, stream);
  }

  switch (orientation_case()) {
    case kAttitude: {
      target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(2, _Internal::attitude(this),
          _Internal::attitude(this).GetCachedSize(), target, stream);
      break;
    }
    case kAngle: {
      target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(3, _Internal::angle(this),
          _Internal::angle(this).GetCachedSize(), target, stream);
      break;
    }
    case kNone: {
      target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(4, _Internal::none(this),
          _Internal::none(this).GetCachedSize(), target, stream);
      break;
    }
    default: ;
  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:cavnue.messages.geometry.v1.Pose)
  return target;
}

::size_t Pose::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:cavnue.messages.geometry.v1.Pose)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .cavnue.messages.geometry.v1.Point3f point = 1 [json_name = "point"];
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.point_);
  }

  switch (orientation_case()) {
    // .cavnue.messages.geometry.v1.Attitude attitude = 2 [json_name = "attitude"];
    case kAttitude: {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *_impl_.orientation_.attitude_);
      break;
    }
    // .cavnue.messages.geometry.v1.Quaternionf angle = 3 [json_name = "angle"];
    case kAngle: {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *_impl_.orientation_.angle_);
      break;
    }
    // .cavnue.messages.geometry.v1.Pose.None none = 4 [json_name = "none"];
    case kNone: {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *_impl_.orientation_.none_);
      break;
    }
    case ORIENTATION_NOT_SET: {
      break;
    }
  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Pose::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Pose::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Pose::GetClassData() const { return &_class_data_; }


void Pose::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Pose*>(&to_msg);
  auto& from = static_cast<const Pose&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:cavnue.messages.geometry.v1.Pose)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_internal_mutable_point()->::cavnue::messages::geometry::v1::Point3f::MergeFrom(
        from._internal_point());
  }
  switch (from.orientation_case()) {
    case kAttitude: {
      _this->_internal_mutable_attitude()->::cavnue::messages::geometry::v1::Attitude::MergeFrom(
          from._internal_attitude());
      break;
    }
    case kAngle: {
      _this->_internal_mutable_angle()->::cavnue::messages::geometry::v1::Quaternionf::MergeFrom(
          from._internal_angle());
      break;
    }
    case kNone: {
      _this->_internal_mutable_none()->::cavnue::messages::geometry::v1::Pose_None::MergeFrom(
          from._internal_none());
      break;
    }
    case ORIENTATION_NOT_SET: {
      break;
    }
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Pose::CopyFrom(const Pose& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cavnue.messages.geometry.v1.Pose)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Pose::IsInitialized() const {
  return true;
}

void Pose::InternalSwap(Pose* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  swap(_impl_.point_, other->_impl_.point_);
  swap(_impl_.orientation_, other->_impl_.orientation_);
  swap(_impl_._oneof_case_[0], other->_impl_._oneof_case_[0]);
}

::PROTOBUF_NAMESPACE_ID::Metadata Pose::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_cavnue_2fmessages_2fgeometry_2fv1_2fpose_2eproto_getter, &descriptor_table_cavnue_2fmessages_2fgeometry_2fv1_2fpose_2eproto_once,
      file_level_metadata_cavnue_2fmessages_2fgeometry_2fv1_2fpose_2eproto[2]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace geometry
}  // namespace messages
}  // namespace cavnue
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::cavnue::messages::geometry::v1::Attitude*
Arena::CreateMaybeMessage< ::cavnue::messages::geometry::v1::Attitude >(Arena* arena) {
  return Arena::CreateMessageInternal< ::cavnue::messages::geometry::v1::Attitude >(arena);
}
template<> PROTOBUF_NOINLINE ::cavnue::messages::geometry::v1::Pose_None*
Arena::CreateMaybeMessage< ::cavnue::messages::geometry::v1::Pose_None >(Arena* arena) {
  return Arena::CreateMessageInternal< ::cavnue::messages::geometry::v1::Pose_None >(arena);
}
template<> PROTOBUF_NOINLINE ::cavnue::messages::geometry::v1::Pose*
Arena::CreateMaybeMessage< ::cavnue::messages::geometry::v1::Pose >(Arena* arena) {
  return Arena::CreateMessageInternal< ::cavnue::messages::geometry::v1::Pose >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
