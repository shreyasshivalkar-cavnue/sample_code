// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cavnue/messages/data_warehouse/deployment/internal/v1/cv2x.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_cavnue_2fmessages_2fdata_5fwarehouse_2fdeployment_2finternal_2fv1_2fcv2x_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_cavnue_2fmessages_2fdata_5fwarehouse_2fdeployment_2finternal_2fv1_2fcv2x_2eproto_2epb_2eh

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
#include "cavnue/messages/cv2x/v1/radio.pb.h"
#include "google/protobuf/timestamp.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_cavnue_2fmessages_2fdata_5fwarehouse_2fdeployment_2finternal_2fv1_2fcv2x_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_cavnue_2fmessages_2fdata_5fwarehouse_2fdeployment_2finternal_2fv1_2fcv2x_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_cavnue_2fmessages_2fdata_5fwarehouse_2fdeployment_2finternal_2fv1_2fcv2x_2eproto;
namespace cavnue {
namespace messages {
namespace data_warehouse {
namespace deployment {
namespace internal {
namespace v1 {
class CV2XReceive;
struct CV2XReceiveDefaultTypeInternal;
extern CV2XReceiveDefaultTypeInternal _CV2XReceive_default_instance_;
class CV2XSend;
struct CV2XSendDefaultTypeInternal;
extern CV2XSendDefaultTypeInternal _CV2XSend_default_instance_;
}  // namespace v1
}  // namespace internal
}  // namespace deployment
}  // namespace data_warehouse
}  // namespace messages
}  // namespace cavnue
PROTOBUF_NAMESPACE_OPEN
template <>
::cavnue::messages::data_warehouse::deployment::internal::v1::CV2XReceive* Arena::CreateMaybeMessage<::cavnue::messages::data_warehouse::deployment::internal::v1::CV2XReceive>(Arena*);
template <>
::cavnue::messages::data_warehouse::deployment::internal::v1::CV2XSend* Arena::CreateMaybeMessage<::cavnue::messages::data_warehouse::deployment::internal::v1::CV2XSend>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace cavnue {
namespace messages {
namespace data_warehouse {
namespace deployment {
namespace internal {
namespace v1 {

// ===================================================================


// -------------------------------------------------------------------

class CV2XReceive final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:cavnue.messages.data_warehouse.deployment.internal.v1.CV2XReceive) */ {
 public:
  inline CV2XReceive() : CV2XReceive(nullptr) {}
  ~CV2XReceive() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR CV2XReceive(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  CV2XReceive(const CV2XReceive& from);
  CV2XReceive(CV2XReceive&& from) noexcept
    : CV2XReceive() {
    *this = ::std::move(from);
  }

  inline CV2XReceive& operator=(const CV2XReceive& from) {
    CopyFrom(from);
    return *this;
  }
  inline CV2XReceive& operator=(CV2XReceive&& from) noexcept {
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
  static const CV2XReceive& default_instance() {
    return *internal_default_instance();
  }
  static inline const CV2XReceive* internal_default_instance() {
    return reinterpret_cast<const CV2XReceive*>(
               &_CV2XReceive_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CV2XReceive& a, CV2XReceive& b) {
    a.Swap(&b);
  }
  inline void Swap(CV2XReceive* other) {
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
  void UnsafeArenaSwap(CV2XReceive* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  CV2XReceive* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<CV2XReceive>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const CV2XReceive& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const CV2XReceive& from) {
    CV2XReceive::MergeImpl(*this, from);
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
  void InternalSwap(CV2XReceive* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "cavnue.messages.data_warehouse.deployment.internal.v1.CV2XReceive";
  }
  protected:
  explicit CV2XReceive(::PROTOBUF_NAMESPACE_ID::Arena* arena);
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
  // optional .cavnue.messages.cv2x.v1.RadioReceive payload = 3 [json_name = "payload", (.gen_bq_schema.bigquery) = {
  bool has_payload() const;
  void clear_payload() ;
  const ::cavnue::messages::cv2x::v1::RadioReceive& payload() const;
  PROTOBUF_NODISCARD ::cavnue::messages::cv2x::v1::RadioReceive* release_payload();
  ::cavnue::messages::cv2x::v1::RadioReceive* mutable_payload();
  void set_allocated_payload(::cavnue::messages::cv2x::v1::RadioReceive* payload);
  private:
  const ::cavnue::messages::cv2x::v1::RadioReceive& _internal_payload() const;
  ::cavnue::messages::cv2x::v1::RadioReceive* _internal_mutable_payload();
  public:
  void unsafe_arena_set_allocated_payload(
      ::cavnue::messages::cv2x::v1::RadioReceive* payload);
  ::cavnue::messages::cv2x::v1::RadioReceive* unsafe_arena_release_payload();
  // optional uint32 redis_id = 2 [json_name = "redisId", (.gen_bq_schema.bigquery) = {
  bool has_redis_id() const;
  void clear_redis_id() ;
  ::uint32_t redis_id() const;
  void set_redis_id(::uint32_t value);

  private:
  ::uint32_t _internal_redis_id() const;
  void _internal_set_redis_id(::uint32_t value);

  public:
  // @@protoc_insertion_point(class_scope:cavnue.messages.data_warehouse.deployment.internal.v1.CV2XReceive)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::Timestamp* redis_ts_;
    ::cavnue::messages::cv2x::v1::RadioReceive* payload_;
    ::uint32_t redis_id_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_cavnue_2fmessages_2fdata_5fwarehouse_2fdeployment_2finternal_2fv1_2fcv2x_2eproto;
};// -------------------------------------------------------------------

class CV2XSend final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:cavnue.messages.data_warehouse.deployment.internal.v1.CV2XSend) */ {
 public:
  inline CV2XSend() : CV2XSend(nullptr) {}
  ~CV2XSend() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR CV2XSend(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  CV2XSend(const CV2XSend& from);
  CV2XSend(CV2XSend&& from) noexcept
    : CV2XSend() {
    *this = ::std::move(from);
  }

  inline CV2XSend& operator=(const CV2XSend& from) {
    CopyFrom(from);
    return *this;
  }
  inline CV2XSend& operator=(CV2XSend&& from) noexcept {
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
  static const CV2XSend& default_instance() {
    return *internal_default_instance();
  }
  static inline const CV2XSend* internal_default_instance() {
    return reinterpret_cast<const CV2XSend*>(
               &_CV2XSend_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(CV2XSend& a, CV2XSend& b) {
    a.Swap(&b);
  }
  inline void Swap(CV2XSend* other) {
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
  void UnsafeArenaSwap(CV2XSend* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  CV2XSend* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<CV2XSend>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const CV2XSend& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const CV2XSend& from) {
    CV2XSend::MergeImpl(*this, from);
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
  void InternalSwap(CV2XSend* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "cavnue.messages.data_warehouse.deployment.internal.v1.CV2XSend";
  }
  protected:
  explicit CV2XSend(::PROTOBUF_NAMESPACE_ID::Arena* arena);
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
  // optional .cavnue.messages.cv2x.v1.RadioSend payload = 3 [json_name = "payload", (.gen_bq_schema.bigquery) = {
  bool has_payload() const;
  void clear_payload() ;
  const ::cavnue::messages::cv2x::v1::RadioSend& payload() const;
  PROTOBUF_NODISCARD ::cavnue::messages::cv2x::v1::RadioSend* release_payload();
  ::cavnue::messages::cv2x::v1::RadioSend* mutable_payload();
  void set_allocated_payload(::cavnue::messages::cv2x::v1::RadioSend* payload);
  private:
  const ::cavnue::messages::cv2x::v1::RadioSend& _internal_payload() const;
  ::cavnue::messages::cv2x::v1::RadioSend* _internal_mutable_payload();
  public:
  void unsafe_arena_set_allocated_payload(
      ::cavnue::messages::cv2x::v1::RadioSend* payload);
  ::cavnue::messages::cv2x::v1::RadioSend* unsafe_arena_release_payload();
  // optional uint32 redis_id = 2 [json_name = "redisId", (.gen_bq_schema.bigquery) = {
  bool has_redis_id() const;
  void clear_redis_id() ;
  ::uint32_t redis_id() const;
  void set_redis_id(::uint32_t value);

  private:
  ::uint32_t _internal_redis_id() const;
  void _internal_set_redis_id(::uint32_t value);

  public:
  // @@protoc_insertion_point(class_scope:cavnue.messages.data_warehouse.deployment.internal.v1.CV2XSend)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::Timestamp* redis_ts_;
    ::cavnue::messages::cv2x::v1::RadioSend* payload_;
    ::uint32_t redis_id_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_cavnue_2fmessages_2fdata_5fwarehouse_2fdeployment_2finternal_2fv1_2fcv2x_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// CV2XReceive

// optional .google.protobuf.Timestamp redis_ts = 1 [json_name = "redisTs", (.gen_bq_schema.bigquery) = {
inline bool CV2XReceive::has_redis_ts() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.redis_ts_ != nullptr);
  return value;
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& CV2XReceive::_internal_redis_ts() const {
  const ::PROTOBUF_NAMESPACE_ID::Timestamp* p = _impl_.redis_ts_;
  return p != nullptr ? *p : reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Timestamp&>(
      ::PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& CV2XReceive::redis_ts() const {
  // @@protoc_insertion_point(field_get:cavnue.messages.data_warehouse.deployment.internal.v1.CV2XReceive.redis_ts)
  return _internal_redis_ts();
}
inline void CV2XReceive::unsafe_arena_set_allocated_redis_ts(
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
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:cavnue.messages.data_warehouse.deployment.internal.v1.CV2XReceive.redis_ts)
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* CV2XReceive::release_redis_ts() {
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
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* CV2XReceive::unsafe_arena_release_redis_ts() {
  // @@protoc_insertion_point(field_release:cavnue.messages.data_warehouse.deployment.internal.v1.CV2XReceive.redis_ts)
  _impl_._has_bits_[0] &= ~0x00000001u;
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = _impl_.redis_ts_;
  _impl_.redis_ts_ = nullptr;
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* CV2XReceive::_internal_mutable_redis_ts() {
  _impl_._has_bits_[0] |= 0x00000001u;
  if (_impl_.redis_ts_ == nullptr) {
    auto* p = CreateMaybeMessage<::PROTOBUF_NAMESPACE_ID::Timestamp>(GetArenaForAllocation());
    _impl_.redis_ts_ = p;
  }
  return _impl_.redis_ts_;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* CV2XReceive::mutable_redis_ts() {
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _msg = _internal_mutable_redis_ts();
  // @@protoc_insertion_point(field_mutable:cavnue.messages.data_warehouse.deployment.internal.v1.CV2XReceive.redis_ts)
  return _msg;
}
inline void CV2XReceive::set_allocated_redis_ts(::PROTOBUF_NAMESPACE_ID::Timestamp* redis_ts) {
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
  // @@protoc_insertion_point(field_set_allocated:cavnue.messages.data_warehouse.deployment.internal.v1.CV2XReceive.redis_ts)
}

// optional uint32 redis_id = 2 [json_name = "redisId", (.gen_bq_schema.bigquery) = {
inline bool CV2XReceive::has_redis_id() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline void CV2XReceive::clear_redis_id() {
  _impl_.redis_id_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline ::uint32_t CV2XReceive::redis_id() const {
  // @@protoc_insertion_point(field_get:cavnue.messages.data_warehouse.deployment.internal.v1.CV2XReceive.redis_id)
  return _internal_redis_id();
}
inline void CV2XReceive::set_redis_id(::uint32_t value) {
  _internal_set_redis_id(value);
  // @@protoc_insertion_point(field_set:cavnue.messages.data_warehouse.deployment.internal.v1.CV2XReceive.redis_id)
}
inline ::uint32_t CV2XReceive::_internal_redis_id() const {
  return _impl_.redis_id_;
}
inline void CV2XReceive::_internal_set_redis_id(::uint32_t value) {
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.redis_id_ = value;
}

// optional .cavnue.messages.cv2x.v1.RadioReceive payload = 3 [json_name = "payload", (.gen_bq_schema.bigquery) = {
inline bool CV2XReceive::has_payload() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.payload_ != nullptr);
  return value;
}
inline const ::cavnue::messages::cv2x::v1::RadioReceive& CV2XReceive::_internal_payload() const {
  const ::cavnue::messages::cv2x::v1::RadioReceive* p = _impl_.payload_;
  return p != nullptr ? *p : reinterpret_cast<const ::cavnue::messages::cv2x::v1::RadioReceive&>(
      ::cavnue::messages::cv2x::v1::_RadioReceive_default_instance_);
}
inline const ::cavnue::messages::cv2x::v1::RadioReceive& CV2XReceive::payload() const {
  // @@protoc_insertion_point(field_get:cavnue.messages.data_warehouse.deployment.internal.v1.CV2XReceive.payload)
  return _internal_payload();
}
inline void CV2XReceive::unsafe_arena_set_allocated_payload(
    ::cavnue::messages::cv2x::v1::RadioReceive* payload) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.payload_);
  }
  _impl_.payload_ = payload;
  if (payload) {
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:cavnue.messages.data_warehouse.deployment.internal.v1.CV2XReceive.payload)
}
inline ::cavnue::messages::cv2x::v1::RadioReceive* CV2XReceive::release_payload() {
  _impl_._has_bits_[0] &= ~0x00000002u;
  ::cavnue::messages::cv2x::v1::RadioReceive* temp = _impl_.payload_;
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
inline ::cavnue::messages::cv2x::v1::RadioReceive* CV2XReceive::unsafe_arena_release_payload() {
  // @@protoc_insertion_point(field_release:cavnue.messages.data_warehouse.deployment.internal.v1.CV2XReceive.payload)
  _impl_._has_bits_[0] &= ~0x00000002u;
  ::cavnue::messages::cv2x::v1::RadioReceive* temp = _impl_.payload_;
  _impl_.payload_ = nullptr;
  return temp;
}
inline ::cavnue::messages::cv2x::v1::RadioReceive* CV2XReceive::_internal_mutable_payload() {
  _impl_._has_bits_[0] |= 0x00000002u;
  if (_impl_.payload_ == nullptr) {
    auto* p = CreateMaybeMessage<::cavnue::messages::cv2x::v1::RadioReceive>(GetArenaForAllocation());
    _impl_.payload_ = p;
  }
  return _impl_.payload_;
}
inline ::cavnue::messages::cv2x::v1::RadioReceive* CV2XReceive::mutable_payload() {
  ::cavnue::messages::cv2x::v1::RadioReceive* _msg = _internal_mutable_payload();
  // @@protoc_insertion_point(field_mutable:cavnue.messages.data_warehouse.deployment.internal.v1.CV2XReceive.payload)
  return _msg;
}
inline void CV2XReceive::set_allocated_payload(::cavnue::messages::cv2x::v1::RadioReceive* payload) {
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
  // @@protoc_insertion_point(field_set_allocated:cavnue.messages.data_warehouse.deployment.internal.v1.CV2XReceive.payload)
}

// -------------------------------------------------------------------

// CV2XSend

// optional .google.protobuf.Timestamp redis_ts = 1 [json_name = "redisTs", (.gen_bq_schema.bigquery) = {
inline bool CV2XSend::has_redis_ts() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.redis_ts_ != nullptr);
  return value;
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& CV2XSend::_internal_redis_ts() const {
  const ::PROTOBUF_NAMESPACE_ID::Timestamp* p = _impl_.redis_ts_;
  return p != nullptr ? *p : reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Timestamp&>(
      ::PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& CV2XSend::redis_ts() const {
  // @@protoc_insertion_point(field_get:cavnue.messages.data_warehouse.deployment.internal.v1.CV2XSend.redis_ts)
  return _internal_redis_ts();
}
inline void CV2XSend::unsafe_arena_set_allocated_redis_ts(
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
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:cavnue.messages.data_warehouse.deployment.internal.v1.CV2XSend.redis_ts)
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* CV2XSend::release_redis_ts() {
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
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* CV2XSend::unsafe_arena_release_redis_ts() {
  // @@protoc_insertion_point(field_release:cavnue.messages.data_warehouse.deployment.internal.v1.CV2XSend.redis_ts)
  _impl_._has_bits_[0] &= ~0x00000001u;
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = _impl_.redis_ts_;
  _impl_.redis_ts_ = nullptr;
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* CV2XSend::_internal_mutable_redis_ts() {
  _impl_._has_bits_[0] |= 0x00000001u;
  if (_impl_.redis_ts_ == nullptr) {
    auto* p = CreateMaybeMessage<::PROTOBUF_NAMESPACE_ID::Timestamp>(GetArenaForAllocation());
    _impl_.redis_ts_ = p;
  }
  return _impl_.redis_ts_;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* CV2XSend::mutable_redis_ts() {
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _msg = _internal_mutable_redis_ts();
  // @@protoc_insertion_point(field_mutable:cavnue.messages.data_warehouse.deployment.internal.v1.CV2XSend.redis_ts)
  return _msg;
}
inline void CV2XSend::set_allocated_redis_ts(::PROTOBUF_NAMESPACE_ID::Timestamp* redis_ts) {
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
  // @@protoc_insertion_point(field_set_allocated:cavnue.messages.data_warehouse.deployment.internal.v1.CV2XSend.redis_ts)
}

// optional uint32 redis_id = 2 [json_name = "redisId", (.gen_bq_schema.bigquery) = {
inline bool CV2XSend::has_redis_id() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline void CV2XSend::clear_redis_id() {
  _impl_.redis_id_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline ::uint32_t CV2XSend::redis_id() const {
  // @@protoc_insertion_point(field_get:cavnue.messages.data_warehouse.deployment.internal.v1.CV2XSend.redis_id)
  return _internal_redis_id();
}
inline void CV2XSend::set_redis_id(::uint32_t value) {
  _internal_set_redis_id(value);
  // @@protoc_insertion_point(field_set:cavnue.messages.data_warehouse.deployment.internal.v1.CV2XSend.redis_id)
}
inline ::uint32_t CV2XSend::_internal_redis_id() const {
  return _impl_.redis_id_;
}
inline void CV2XSend::_internal_set_redis_id(::uint32_t value) {
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.redis_id_ = value;
}

// optional .cavnue.messages.cv2x.v1.RadioSend payload = 3 [json_name = "payload", (.gen_bq_schema.bigquery) = {
inline bool CV2XSend::has_payload() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.payload_ != nullptr);
  return value;
}
inline const ::cavnue::messages::cv2x::v1::RadioSend& CV2XSend::_internal_payload() const {
  const ::cavnue::messages::cv2x::v1::RadioSend* p = _impl_.payload_;
  return p != nullptr ? *p : reinterpret_cast<const ::cavnue::messages::cv2x::v1::RadioSend&>(
      ::cavnue::messages::cv2x::v1::_RadioSend_default_instance_);
}
inline const ::cavnue::messages::cv2x::v1::RadioSend& CV2XSend::payload() const {
  // @@protoc_insertion_point(field_get:cavnue.messages.data_warehouse.deployment.internal.v1.CV2XSend.payload)
  return _internal_payload();
}
inline void CV2XSend::unsafe_arena_set_allocated_payload(
    ::cavnue::messages::cv2x::v1::RadioSend* payload) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.payload_);
  }
  _impl_.payload_ = payload;
  if (payload) {
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:cavnue.messages.data_warehouse.deployment.internal.v1.CV2XSend.payload)
}
inline ::cavnue::messages::cv2x::v1::RadioSend* CV2XSend::release_payload() {
  _impl_._has_bits_[0] &= ~0x00000002u;
  ::cavnue::messages::cv2x::v1::RadioSend* temp = _impl_.payload_;
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
inline ::cavnue::messages::cv2x::v1::RadioSend* CV2XSend::unsafe_arena_release_payload() {
  // @@protoc_insertion_point(field_release:cavnue.messages.data_warehouse.deployment.internal.v1.CV2XSend.payload)
  _impl_._has_bits_[0] &= ~0x00000002u;
  ::cavnue::messages::cv2x::v1::RadioSend* temp = _impl_.payload_;
  _impl_.payload_ = nullptr;
  return temp;
}
inline ::cavnue::messages::cv2x::v1::RadioSend* CV2XSend::_internal_mutable_payload() {
  _impl_._has_bits_[0] |= 0x00000002u;
  if (_impl_.payload_ == nullptr) {
    auto* p = CreateMaybeMessage<::cavnue::messages::cv2x::v1::RadioSend>(GetArenaForAllocation());
    _impl_.payload_ = p;
  }
  return _impl_.payload_;
}
inline ::cavnue::messages::cv2x::v1::RadioSend* CV2XSend::mutable_payload() {
  ::cavnue::messages::cv2x::v1::RadioSend* _msg = _internal_mutable_payload();
  // @@protoc_insertion_point(field_mutable:cavnue.messages.data_warehouse.deployment.internal.v1.CV2XSend.payload)
  return _msg;
}
inline void CV2XSend::set_allocated_payload(::cavnue::messages::cv2x::v1::RadioSend* payload) {
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
  // @@protoc_insertion_point(field_set_allocated:cavnue.messages.data_warehouse.deployment.internal.v1.CV2XSend.payload)
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

#endif  // GOOGLE_PROTOBUF_INCLUDED_cavnue_2fmessages_2fdata_5fwarehouse_2fdeployment_2finternal_2fv1_2fcv2x_2eproto_2epb_2eh
