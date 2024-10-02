// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cavnue/messages/data_warehouse/deployment/internal/v1/camera_inference.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_cavnue_2fmessages_2fdata_5fwarehouse_2fdeployment_2finternal_2fv1_2fcamera_5finference_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_cavnue_2fmessages_2fdata_5fwarehouse_2fdeployment_2finternal_2fv1_2fcamera_5finference_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>

#include "google/protobuf/port_def.inc"
#if PROTOBUF_VERSION < 4023000
#error "This file was generated by a newer version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please update"
#error "your headers."
#endif  // PROTOBUF_VERSION

#if 4023004 < PROTOBUF_MIN_PROTOC_VERSION
#error "This file was generated by an older version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please"
#error "regenerate this file with a newer version of protoc."
#endif  // PROTOBUF_MIN_PROTOC_VERSION
#include "google/protobuf/port_undef.inc"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
#include "cavnue/third_party/bq/v1/bq_field.pb.h"
#include "cavnue/third_party/bq/v1/bq_table.pb.h"
#include "cavnue/messages/inference/v1/camera.pb.h"
#include "google/protobuf/timestamp.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_cavnue_2fmessages_2fdata_5fwarehouse_2fdeployment_2finternal_2fv1_2fcamera_5finference_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_cavnue_2fmessages_2fdata_5fwarehouse_2fdeployment_2finternal_2fv1_2fcamera_5finference_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_cavnue_2fmessages_2fdata_5fwarehouse_2fdeployment_2finternal_2fv1_2fcamera_5finference_2eproto;
namespace cavnue {
namespace messages {
namespace data_warehouse {
namespace deployment {
namespace internal {
namespace v1 {
class CameraInferenceBox2;
struct CameraInferenceBox2DefaultTypeInternal;
extern CameraInferenceBox2DefaultTypeInternal _CameraInferenceBox2_default_instance_;
}  // namespace v1
}  // namespace internal
}  // namespace deployment
}  // namespace data_warehouse
}  // namespace messages
}  // namespace cavnue
PROTOBUF_NAMESPACE_OPEN
template <>
::cavnue::messages::data_warehouse::deployment::internal::v1::CameraInferenceBox2* Arena::CreateMaybeMessage<::cavnue::messages::data_warehouse::deployment::internal::v1::CameraInferenceBox2>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace cavnue {
namespace messages {
namespace data_warehouse {
namespace deployment {
namespace internal {
namespace v1 {

// ===================================================================


// -------------------------------------------------------------------

class CameraInferenceBox2 final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:cavnue.messages.data_warehouse.deployment.internal.v1.CameraInferenceBox2) */ {
 public:
  inline CameraInferenceBox2() : CameraInferenceBox2(nullptr) {}
  ~CameraInferenceBox2() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR CameraInferenceBox2(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  CameraInferenceBox2(const CameraInferenceBox2& from);
  CameraInferenceBox2(CameraInferenceBox2&& from) noexcept
    : CameraInferenceBox2() {
    *this = ::std::move(from);
  }

  inline CameraInferenceBox2& operator=(const CameraInferenceBox2& from) {
    CopyFrom(from);
    return *this;
  }
  inline CameraInferenceBox2& operator=(CameraInferenceBox2&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const CameraInferenceBox2& default_instance() {
    return *internal_default_instance();
  }
  static inline const CameraInferenceBox2* internal_default_instance() {
    return reinterpret_cast<const CameraInferenceBox2*>(
               &_CameraInferenceBox2_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CameraInferenceBox2& a, CameraInferenceBox2& b) {
    a.Swap(&b);
  }
  inline void Swap(CameraInferenceBox2* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(CameraInferenceBox2* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  CameraInferenceBox2* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<CameraInferenceBox2>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const CameraInferenceBox2& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const CameraInferenceBox2& from) {
    CameraInferenceBox2::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(CameraInferenceBox2* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "cavnue.messages.data_warehouse.deployment.internal.v1.CameraInferenceBox2";
  }
  protected:
  explicit CameraInferenceBox2(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRedisTsFieldNumber = 1,
    kPayloadFieldNumber = 3,
    kRedisIdFieldNumber = 2,
  };
  // optional .google.protobuf.Timestamp redis_ts = 1 [json_name = "redisTs", (.gen_bq_schema.bigquery) = {
  bool has_redis_ts() const;
  void clear_redis_ts() ;
  const ::PROTOBUF_NAMESPACE_ID::Timestamp& redis_ts() const;
  PROTOBUF_NODISCARD ::PROTOBUF_NAMESPACE_ID::Timestamp* release_redis_ts();
  ::PROTOBUF_NAMESPACE_ID::Timestamp* mutable_redis_ts();
  void set_allocated_redis_ts(::PROTOBUF_NAMESPACE_ID::Timestamp* redis_ts);
  private:
  const ::PROTOBUF_NAMESPACE_ID::Timestamp& _internal_redis_ts() const;
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _internal_mutable_redis_ts();
  public:
  void unsafe_arena_set_allocated_redis_ts(
      ::PROTOBUF_NAMESPACE_ID::Timestamp* redis_ts);
  ::PROTOBUF_NAMESPACE_ID::Timestamp* unsafe_arena_release_redis_ts();
  // optional .cavnue.messages.inference.v1.CameraDetection payload = 3 [json_name = "payload", (.gen_bq_schema.bigquery) = {
  bool has_payload() const;
  void clear_payload() ;
  const ::cavnue::messages::inference::v1::CameraDetection& payload() const;
  PROTOBUF_NODISCARD ::cavnue::messages::inference::v1::CameraDetection* release_payload();
  ::cavnue::messages::inference::v1::CameraDetection* mutable_payload();
  void set_allocated_payload(::cavnue::messages::inference::v1::CameraDetection* payload);
  private:
  const ::cavnue::messages::inference::v1::CameraDetection& _internal_payload() const;
  ::cavnue::messages::inference::v1::CameraDetection* _internal_mutable_payload();
  public:
  void unsafe_arena_set_allocated_payload(
      ::cavnue::messages::inference::v1::CameraDetection* payload);
  ::cavnue::messages::inference::v1::CameraDetection* unsafe_arena_release_payload();
  // optional uint32 redis_id = 2 [json_name = "redisId", (.gen_bq_schema.bigquery) = {
  bool has_redis_id() const;
  void clear_redis_id() ;
  ::uint32_t redis_id() const;
  void set_redis_id(::uint32_t value);

  private:
  ::uint32_t _internal_redis_id() const;
  void _internal_set_redis_id(::uint32_t value);

  public:
  // @@protoc_insertion_point(class_scope:cavnue.messages.data_warehouse.deployment.internal.v1.CameraInferenceBox2)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::Timestamp* redis_ts_;
    ::cavnue::messages::inference::v1::CameraDetection* payload_;
    ::uint32_t redis_id_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_cavnue_2fmessages_2fdata_5fwarehouse_2fdeployment_2finternal_2fv1_2fcamera_5finference_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// CameraInferenceBox2

// optional .google.protobuf.Timestamp redis_ts = 1 [json_name = "redisTs", (.gen_bq_schema.bigquery) = {
inline bool CameraInferenceBox2::has_redis_ts() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.redis_ts_ != nullptr);
  return value;
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& CameraInferenceBox2::_internal_redis_ts() const {
  const ::PROTOBUF_NAMESPACE_ID::Timestamp* p = _impl_.redis_ts_;
  return p != nullptr ? *p : reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Timestamp&>(
      ::PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& CameraInferenceBox2::redis_ts() const {
  // @@protoc_insertion_point(field_get:cavnue.messages.data_warehouse.deployment.internal.v1.CameraInferenceBox2.redis_ts)
  return _internal_redis_ts();
}
inline void CameraInferenceBox2::unsafe_arena_set_allocated_redis_ts(
    ::PROTOBUF_NAMESPACE_ID::Timestamp* redis_ts) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.redis_ts_);
  }
  _impl_.redis_ts_ = redis_ts;
  if (redis_ts) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:cavnue.messages.data_warehouse.deployment.internal.v1.CameraInferenceBox2.redis_ts)
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* CameraInferenceBox2::release_redis_ts() {
  _impl_._has_bits_[0] &= ~0x00000001u;
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = _impl_.redis_ts_;
  _impl_.redis_ts_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* CameraInferenceBox2::unsafe_arena_release_redis_ts() {
  // @@protoc_insertion_point(field_release:cavnue.messages.data_warehouse.deployment.internal.v1.CameraInferenceBox2.redis_ts)
  _impl_._has_bits_[0] &= ~0x00000001u;
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = _impl_.redis_ts_;
  _impl_.redis_ts_ = nullptr;
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* CameraInferenceBox2::_internal_mutable_redis_ts() {
  _impl_._has_bits_[0] |= 0x00000001u;
  if (_impl_.redis_ts_ == nullptr) {
    auto* p = CreateMaybeMessage<::PROTOBUF_NAMESPACE_ID::Timestamp>(GetArenaForAllocation());
    _impl_.redis_ts_ = p;
  }
  return _impl_.redis_ts_;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* CameraInferenceBox2::mutable_redis_ts() {
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _msg = _internal_mutable_redis_ts();
  // @@protoc_insertion_point(field_mutable:cavnue.messages.data_warehouse.deployment.internal.v1.CameraInferenceBox2.redis_ts)
  return _msg;
}
inline void CameraInferenceBox2::set_allocated_redis_ts(::PROTOBUF_NAMESPACE_ID::Timestamp* redis_ts) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.redis_ts_);
  }
  if (redis_ts) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(redis_ts));
    if (message_arena != submessage_arena) {
      redis_ts = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, redis_ts, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.redis_ts_ = redis_ts;
  // @@protoc_insertion_point(field_set_allocated:cavnue.messages.data_warehouse.deployment.internal.v1.CameraInferenceBox2.redis_ts)
}

// optional uint32 redis_id = 2 [json_name = "redisId", (.gen_bq_schema.bigquery) = {
inline bool CameraInferenceBox2::has_redis_id() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline void CameraInferenceBox2::clear_redis_id() {
  _impl_.redis_id_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline ::uint32_t CameraInferenceBox2::redis_id() const {
  // @@protoc_insertion_point(field_get:cavnue.messages.data_warehouse.deployment.internal.v1.CameraInferenceBox2.redis_id)
  return _internal_redis_id();
}
inline void CameraInferenceBox2::set_redis_id(::uint32_t value) {
  _internal_set_redis_id(value);
  // @@protoc_insertion_point(field_set:cavnue.messages.data_warehouse.deployment.internal.v1.CameraInferenceBox2.redis_id)
}
inline ::uint32_t CameraInferenceBox2::_internal_redis_id() const {
  return _impl_.redis_id_;
}
inline void CameraInferenceBox2::_internal_set_redis_id(::uint32_t value) {
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.redis_id_ = value;
}

// optional .cavnue.messages.inference.v1.CameraDetection payload = 3 [json_name = "payload", (.gen_bq_schema.bigquery) = {
inline bool CameraInferenceBox2::has_payload() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.payload_ != nullptr);
  return value;
}
inline const ::cavnue::messages::inference::v1::CameraDetection& CameraInferenceBox2::_internal_payload() const {
  const ::cavnue::messages::inference::v1::CameraDetection* p = _impl_.payload_;
  return p != nullptr ? *p : reinterpret_cast<const ::cavnue::messages::inference::v1::CameraDetection&>(
      ::cavnue::messages::inference::v1::_CameraDetection_default_instance_);
}
inline const ::cavnue::messages::inference::v1::CameraDetection& CameraInferenceBox2::payload() const {
  // @@protoc_insertion_point(field_get:cavnue.messages.data_warehouse.deployment.internal.v1.CameraInferenceBox2.payload)
  return _internal_payload();
}
inline void CameraInferenceBox2::unsafe_arena_set_allocated_payload(
    ::cavnue::messages::inference::v1::CameraDetection* payload) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.payload_);
  }
  _impl_.payload_ = payload;
  if (payload) {
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:cavnue.messages.data_warehouse.deployment.internal.v1.CameraInferenceBox2.payload)
}
inline ::cavnue::messages::inference::v1::CameraDetection* CameraInferenceBox2::release_payload() {
  _impl_._has_bits_[0] &= ~0x00000002u;
  ::cavnue::messages::inference::v1::CameraDetection* temp = _impl_.payload_;
  _impl_.payload_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::cavnue::messages::inference::v1::CameraDetection* CameraInferenceBox2::unsafe_arena_release_payload() {
  // @@protoc_insertion_point(field_release:cavnue.messages.data_warehouse.deployment.internal.v1.CameraInferenceBox2.payload)
  _impl_._has_bits_[0] &= ~0x00000002u;
  ::cavnue::messages::inference::v1::CameraDetection* temp = _impl_.payload_;
  _impl_.payload_ = nullptr;
  return temp;
}
inline ::cavnue::messages::inference::v1::CameraDetection* CameraInferenceBox2::_internal_mutable_payload() {
  _impl_._has_bits_[0] |= 0x00000002u;
  if (_impl_.payload_ == nullptr) {
    auto* p = CreateMaybeMessage<::cavnue::messages::inference::v1::CameraDetection>(GetArenaForAllocation());
    _impl_.payload_ = p;
  }
  return _impl_.payload_;
}
inline ::cavnue::messages::inference::v1::CameraDetection* CameraInferenceBox2::mutable_payload() {
  ::cavnue::messages::inference::v1::CameraDetection* _msg = _internal_mutable_payload();
  // @@protoc_insertion_point(field_mutable:cavnue.messages.data_warehouse.deployment.internal.v1.CameraInferenceBox2.payload)
  return _msg;
}
inline void CameraInferenceBox2::set_allocated_payload(::cavnue::messages::inference::v1::CameraDetection* payload) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.payload_);
  }
  if (payload) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(payload));
    if (message_arena != submessage_arena) {
      payload = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, payload, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  _impl_.payload_ = payload;
  // @@protoc_insertion_point(field_set_allocated:cavnue.messages.data_warehouse.deployment.internal.v1.CameraInferenceBox2.payload)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace internal
}  // namespace deployment
}  // namespace data_warehouse
}  // namespace messages
}  // namespace cavnue


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_cavnue_2fmessages_2fdata_5fwarehouse_2fdeployment_2finternal_2fv1_2fcamera_5finference_2eproto_2epb_2eh
