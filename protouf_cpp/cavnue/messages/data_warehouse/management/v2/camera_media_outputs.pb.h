// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cavnue/messages/data_warehouse/management/v2/camera_media_outputs.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_cavnue_2fmessages_2fdata_5fwarehouse_2fmanagement_2fv2_2fcamera_5fmedia_5foutputs_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_cavnue_2fmessages_2fdata_5fwarehouse_2fmanagement_2fv2_2fcamera_5fmedia_5foutputs_2eproto_2epb_2eh

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
#include "cavnue/messages/common/v1/field_options.pb.h"
#include "google/protobuf/timestamp.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_cavnue_2fmessages_2fdata_5fwarehouse_2fmanagement_2fv2_2fcamera_5fmedia_5foutputs_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_cavnue_2fmessages_2fdata_5fwarehouse_2fmanagement_2fv2_2fcamera_5fmedia_5foutputs_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_cavnue_2fmessages_2fdata_5fwarehouse_2fmanagement_2fv2_2fcamera_5fmedia_5foutputs_2eproto;
namespace cavnue {
namespace messages {
namespace data_warehouse {
namespace management {
namespace v2 {
class CameraMediaOutput;
struct CameraMediaOutputDefaultTypeInternal;
extern CameraMediaOutputDefaultTypeInternal _CameraMediaOutput_default_instance_;
class CameraMediaOutputMetadata;
struct CameraMediaOutputMetadataDefaultTypeInternal;
extern CameraMediaOutputMetadataDefaultTypeInternal _CameraMediaOutputMetadata_default_instance_;
}  // namespace v2
}  // namespace management
}  // namespace data_warehouse
}  // namespace messages
}  // namespace cavnue
PROTOBUF_NAMESPACE_OPEN
template <>
::cavnue::messages::data_warehouse::management::v2::CameraMediaOutput* Arena::CreateMaybeMessage<::cavnue::messages::data_warehouse::management::v2::CameraMediaOutput>(Arena*);
template <>
::cavnue::messages::data_warehouse::management::v2::CameraMediaOutputMetadata* Arena::CreateMaybeMessage<::cavnue::messages::data_warehouse::management::v2::CameraMediaOutputMetadata>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace cavnue {
namespace messages {
namespace data_warehouse {
namespace management {
namespace v2 {

// ===================================================================


// -------------------------------------------------------------------

class CameraMediaOutput final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:cavnue.messages.data_warehouse.management.v2.CameraMediaOutput) */ {
 public:
  inline CameraMediaOutput() : CameraMediaOutput(nullptr) {}
  ~CameraMediaOutput() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR CameraMediaOutput(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  CameraMediaOutput(const CameraMediaOutput& from);
  CameraMediaOutput(CameraMediaOutput&& from) noexcept
    : CameraMediaOutput() {
    *this = ::std::move(from);
  }

  inline CameraMediaOutput& operator=(const CameraMediaOutput& from) {
    CopyFrom(from);
    return *this;
  }
  inline CameraMediaOutput& operator=(CameraMediaOutput&& from) noexcept {
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
  static const CameraMediaOutput& default_instance() {
    return *internal_default_instance();
  }
  static inline const CameraMediaOutput* internal_default_instance() {
    return reinterpret_cast<const CameraMediaOutput*>(
               &_CameraMediaOutput_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CameraMediaOutput& a, CameraMediaOutput& b) {
    a.Swap(&b);
  }
  inline void Swap(CameraMediaOutput* other) {
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
  void UnsafeArenaSwap(CameraMediaOutput* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  CameraMediaOutput* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<CameraMediaOutput>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const CameraMediaOutput& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const CameraMediaOutput& from) {
    CameraMediaOutput::MergeImpl(*this, from);
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
  void InternalSwap(CameraMediaOutput* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "cavnue.messages.data_warehouse.management.v2.CameraMediaOutput";
  }
  protected:
  explicit CameraMediaOutput(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUriFieldNumber = 1,
    kTsFieldNumber = 3,
    kDataIdFieldNumber = 2,
  };
  // optional string uri = 1 [json_name = "uri", (.cavnue.messages.common.v1.primary_key) = true, (.gen_bq_schema.bigquery) = {
  bool has_uri() const;
  void clear_uri() ;
  const std::string& uri() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_uri(Arg_&& arg, Args_... args);
  std::string* mutable_uri();
  PROTOBUF_NODISCARD std::string* release_uri();
  void set_allocated_uri(std::string* ptr);

  private:
  const std::string& _internal_uri() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_uri(
      const std::string& value);
  std::string* _internal_mutable_uri();

  public:
  // optional .google.protobuf.Timestamp ts = 3 [json_name = "ts", (.gen_bq_schema.bigquery) = {
  bool has_ts() const;
  void clear_ts() ;
  const ::PROTOBUF_NAMESPACE_ID::Timestamp& ts() const;
  PROTOBUF_NODISCARD ::PROTOBUF_NAMESPACE_ID::Timestamp* release_ts();
  ::PROTOBUF_NAMESPACE_ID::Timestamp* mutable_ts();
  void set_allocated_ts(::PROTOBUF_NAMESPACE_ID::Timestamp* ts);
  private:
  const ::PROTOBUF_NAMESPACE_ID::Timestamp& _internal_ts() const;
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _internal_mutable_ts();
  public:
  void unsafe_arena_set_allocated_ts(
      ::PROTOBUF_NAMESPACE_ID::Timestamp* ts);
  ::PROTOBUF_NAMESPACE_ID::Timestamp* unsafe_arena_release_ts();
  // optional int64 data_id = 2 [json_name = "dataId", (.cavnue.messages.common.v1.primary_key) = true, (.gen_bq_schema.bigquery) = {
  bool has_data_id() const;
  void clear_data_id() ;
  ::int64_t data_id() const;
  void set_data_id(::int64_t value);

  private:
  ::int64_t _internal_data_id() const;
  void _internal_set_data_id(::int64_t value);

  public:
  // @@protoc_insertion_point(class_scope:cavnue.messages.data_warehouse.management.v2.CameraMediaOutput)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr uri_;
    ::PROTOBUF_NAMESPACE_ID::Timestamp* ts_;
    ::int64_t data_id_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_cavnue_2fmessages_2fdata_5fwarehouse_2fmanagement_2fv2_2fcamera_5fmedia_5foutputs_2eproto;
};// -------------------------------------------------------------------

class CameraMediaOutputMetadata final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:cavnue.messages.data_warehouse.management.v2.CameraMediaOutputMetadata) */ {
 public:
  inline CameraMediaOutputMetadata() : CameraMediaOutputMetadata(nullptr) {}
  ~CameraMediaOutputMetadata() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR CameraMediaOutputMetadata(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  CameraMediaOutputMetadata(const CameraMediaOutputMetadata& from);
  CameraMediaOutputMetadata(CameraMediaOutputMetadata&& from) noexcept
    : CameraMediaOutputMetadata() {
    *this = ::std::move(from);
  }

  inline CameraMediaOutputMetadata& operator=(const CameraMediaOutputMetadata& from) {
    CopyFrom(from);
    return *this;
  }
  inline CameraMediaOutputMetadata& operator=(CameraMediaOutputMetadata&& from) noexcept {
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
  static const CameraMediaOutputMetadata& default_instance() {
    return *internal_default_instance();
  }
  static inline const CameraMediaOutputMetadata* internal_default_instance() {
    return reinterpret_cast<const CameraMediaOutputMetadata*>(
               &_CameraMediaOutputMetadata_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(CameraMediaOutputMetadata& a, CameraMediaOutputMetadata& b) {
    a.Swap(&b);
  }
  inline void Swap(CameraMediaOutputMetadata* other) {
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
  void UnsafeArenaSwap(CameraMediaOutputMetadata* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  CameraMediaOutputMetadata* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<CameraMediaOutputMetadata>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const CameraMediaOutputMetadata& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const CameraMediaOutputMetadata& from) {
    CameraMediaOutputMetadata::MergeImpl(*this, from);
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
  void InternalSwap(CameraMediaOutputMetadata* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "cavnue.messages.data_warehouse.management.v2.CameraMediaOutputMetadata";
  }
  protected:
  explicit CameraMediaOutputMetadata(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUriFieldNumber = 1,
    kStartTsFieldNumber = 2,
    kHeightFieldNumber = 3,
    kWidthFieldNumber = 4,
    kDurationFieldNumber = 5,
    kFrameRateFieldNumber = 6,
  };
  // optional string uri = 1 [json_name = "uri", (.cavnue.messages.common.v1.primary_key) = true, (.gen_bq_schema.bigquery) = {
  bool has_uri() const;
  void clear_uri() ;
  const std::string& uri() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_uri(Arg_&& arg, Args_... args);
  std::string* mutable_uri();
  PROTOBUF_NODISCARD std::string* release_uri();
  void set_allocated_uri(std::string* ptr);

  private:
  const std::string& _internal_uri() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_uri(
      const std::string& value);
  std::string* _internal_mutable_uri();

  public:
  // optional .google.protobuf.Timestamp start_ts = 2 [json_name = "startTs", (.gen_bq_schema.bigquery) = {
  bool has_start_ts() const;
  void clear_start_ts() ;
  const ::PROTOBUF_NAMESPACE_ID::Timestamp& start_ts() const;
  PROTOBUF_NODISCARD ::PROTOBUF_NAMESPACE_ID::Timestamp* release_start_ts();
  ::PROTOBUF_NAMESPACE_ID::Timestamp* mutable_start_ts();
  void set_allocated_start_ts(::PROTOBUF_NAMESPACE_ID::Timestamp* start_ts);
  private:
  const ::PROTOBUF_NAMESPACE_ID::Timestamp& _internal_start_ts() const;
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _internal_mutable_start_ts();
  public:
  void unsafe_arena_set_allocated_start_ts(
      ::PROTOBUF_NAMESPACE_ID::Timestamp* start_ts);
  ::PROTOBUF_NAMESPACE_ID::Timestamp* unsafe_arena_release_start_ts();
  // optional uint32 height = 3 [json_name = "height", (.cavnue.messages.common.v1.units) = UNITS_PIXELS, (.gen_bq_schema.bigquery) = {
  bool has_height() const;
  void clear_height() ;
  ::uint32_t height() const;
  void set_height(::uint32_t value);

  private:
  ::uint32_t _internal_height() const;
  void _internal_set_height(::uint32_t value);

  public:
  // optional uint32 width = 4 [json_name = "width", (.cavnue.messages.common.v1.units) = UNITS_PIXELS, (.gen_bq_schema.bigquery) = {
  bool has_width() const;
  void clear_width() ;
  ::uint32_t width() const;
  void set_width(::uint32_t value);

  private:
  ::uint32_t _internal_width() const;
  void _internal_set_width(::uint32_t value);

  public:
  // optional float duration = 5 [json_name = "duration", (.cavnue.messages.common.v1.units) = UNITS_MILLISECONDS, (.gen_bq_schema.bigquery) = {
  bool has_duration() const;
  void clear_duration() ;
  float duration() const;
  void set_duration(float value);

  private:
  float _internal_duration() const;
  void _internal_set_duration(float value);

  public:
  // optional uint32 frame_rate = 6 [json_name = "frameRate", (.gen_bq_schema.bigquery) = {
  bool has_frame_rate() const;
  void clear_frame_rate() ;
  ::uint32_t frame_rate() const;
  void set_frame_rate(::uint32_t value);

  private:
  ::uint32_t _internal_frame_rate() const;
  void _internal_set_frame_rate(::uint32_t value);

  public:
  // @@protoc_insertion_point(class_scope:cavnue.messages.data_warehouse.management.v2.CameraMediaOutputMetadata)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr uri_;
    ::PROTOBUF_NAMESPACE_ID::Timestamp* start_ts_;
    ::uint32_t height_;
    ::uint32_t width_;
    float duration_;
    ::uint32_t frame_rate_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_cavnue_2fmessages_2fdata_5fwarehouse_2fmanagement_2fv2_2fcamera_5fmedia_5foutputs_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// CameraMediaOutput

// optional string uri = 1 [json_name = "uri", (.cavnue.messages.common.v1.primary_key) = true, (.gen_bq_schema.bigquery) = {
inline bool CameraMediaOutput::has_uri() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void CameraMediaOutput::clear_uri() {
  _impl_.uri_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& CameraMediaOutput::uri() const {
  // @@protoc_insertion_point(field_get:cavnue.messages.data_warehouse.management.v2.CameraMediaOutput.uri)
  return _internal_uri();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void CameraMediaOutput::set_uri(Arg_&& arg,
                                                     Args_... args) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.uri_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:cavnue.messages.data_warehouse.management.v2.CameraMediaOutput.uri)
}
inline std::string* CameraMediaOutput::mutable_uri() {
  std::string* _s = _internal_mutable_uri();
  // @@protoc_insertion_point(field_mutable:cavnue.messages.data_warehouse.management.v2.CameraMediaOutput.uri)
  return _s;
}
inline const std::string& CameraMediaOutput::_internal_uri() const {
  return _impl_.uri_.Get();
}
inline void CameraMediaOutput::_internal_set_uri(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;


  _impl_.uri_.Set(value, GetArenaForAllocation());
}
inline std::string* CameraMediaOutput::_internal_mutable_uri() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.uri_.Mutable( GetArenaForAllocation());
}
inline std::string* CameraMediaOutput::release_uri() {
  // @@protoc_insertion_point(field_release:cavnue.messages.data_warehouse.management.v2.CameraMediaOutput.uri)
  if ((_impl_._has_bits_[0] & 0x00000001u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* released = _impl_.uri_.Release();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.uri_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return released;
}
inline void CameraMediaOutput::set_allocated_uri(std::string* value) {
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.uri_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.uri_.IsDefault()) {
          _impl_.uri_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:cavnue.messages.data_warehouse.management.v2.CameraMediaOutput.uri)
}

// optional int64 data_id = 2 [json_name = "dataId", (.cavnue.messages.common.v1.primary_key) = true, (.gen_bq_schema.bigquery) = {
inline bool CameraMediaOutput::has_data_id() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline void CameraMediaOutput::clear_data_id() {
  _impl_.data_id_ = ::int64_t{0};
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline ::int64_t CameraMediaOutput::data_id() const {
  // @@protoc_insertion_point(field_get:cavnue.messages.data_warehouse.management.v2.CameraMediaOutput.data_id)
  return _internal_data_id();
}
inline void CameraMediaOutput::set_data_id(::int64_t value) {
  _internal_set_data_id(value);
  // @@protoc_insertion_point(field_set:cavnue.messages.data_warehouse.management.v2.CameraMediaOutput.data_id)
}
inline ::int64_t CameraMediaOutput::_internal_data_id() const {
  return _impl_.data_id_;
}
inline void CameraMediaOutput::_internal_set_data_id(::int64_t value) {
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.data_id_ = value;
}

// optional .google.protobuf.Timestamp ts = 3 [json_name = "ts", (.gen_bq_schema.bigquery) = {
inline bool CameraMediaOutput::has_ts() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.ts_ != nullptr);
  return value;
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& CameraMediaOutput::_internal_ts() const {
  const ::PROTOBUF_NAMESPACE_ID::Timestamp* p = _impl_.ts_;
  return p != nullptr ? *p : reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Timestamp&>(
      ::PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& CameraMediaOutput::ts() const {
  // @@protoc_insertion_point(field_get:cavnue.messages.data_warehouse.management.v2.CameraMediaOutput.ts)
  return _internal_ts();
}
inline void CameraMediaOutput::unsafe_arena_set_allocated_ts(
    ::PROTOBUF_NAMESPACE_ID::Timestamp* ts) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.ts_);
  }
  _impl_.ts_ = ts;
  if (ts) {
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:cavnue.messages.data_warehouse.management.v2.CameraMediaOutput.ts)
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* CameraMediaOutput::release_ts() {
  _impl_._has_bits_[0] &= ~0x00000002u;
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = _impl_.ts_;
  _impl_.ts_ = nullptr;
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
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* CameraMediaOutput::unsafe_arena_release_ts() {
  // @@protoc_insertion_point(field_release:cavnue.messages.data_warehouse.management.v2.CameraMediaOutput.ts)
  _impl_._has_bits_[0] &= ~0x00000002u;
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = _impl_.ts_;
  _impl_.ts_ = nullptr;
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* CameraMediaOutput::_internal_mutable_ts() {
  _impl_._has_bits_[0] |= 0x00000002u;
  if (_impl_.ts_ == nullptr) {
    auto* p = CreateMaybeMessage<::PROTOBUF_NAMESPACE_ID::Timestamp>(GetArenaForAllocation());
    _impl_.ts_ = p;
  }
  return _impl_.ts_;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* CameraMediaOutput::mutable_ts() {
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _msg = _internal_mutable_ts();
  // @@protoc_insertion_point(field_mutable:cavnue.messages.data_warehouse.management.v2.CameraMediaOutput.ts)
  return _msg;
}
inline void CameraMediaOutput::set_allocated_ts(::PROTOBUF_NAMESPACE_ID::Timestamp* ts) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.ts_);
  }
  if (ts) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(ts));
    if (message_arena != submessage_arena) {
      ts = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, ts, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  _impl_.ts_ = ts;
  // @@protoc_insertion_point(field_set_allocated:cavnue.messages.data_warehouse.management.v2.CameraMediaOutput.ts)
}

// -------------------------------------------------------------------

// CameraMediaOutputMetadata

// optional string uri = 1 [json_name = "uri", (.cavnue.messages.common.v1.primary_key) = true, (.gen_bq_schema.bigquery) = {
inline bool CameraMediaOutputMetadata::has_uri() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void CameraMediaOutputMetadata::clear_uri() {
  _impl_.uri_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& CameraMediaOutputMetadata::uri() const {
  // @@protoc_insertion_point(field_get:cavnue.messages.data_warehouse.management.v2.CameraMediaOutputMetadata.uri)
  return _internal_uri();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void CameraMediaOutputMetadata::set_uri(Arg_&& arg,
                                                     Args_... args) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.uri_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:cavnue.messages.data_warehouse.management.v2.CameraMediaOutputMetadata.uri)
}
inline std::string* CameraMediaOutputMetadata::mutable_uri() {
  std::string* _s = _internal_mutable_uri();
  // @@protoc_insertion_point(field_mutable:cavnue.messages.data_warehouse.management.v2.CameraMediaOutputMetadata.uri)
  return _s;
}
inline const std::string& CameraMediaOutputMetadata::_internal_uri() const {
  return _impl_.uri_.Get();
}
inline void CameraMediaOutputMetadata::_internal_set_uri(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;


  _impl_.uri_.Set(value, GetArenaForAllocation());
}
inline std::string* CameraMediaOutputMetadata::_internal_mutable_uri() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.uri_.Mutable( GetArenaForAllocation());
}
inline std::string* CameraMediaOutputMetadata::release_uri() {
  // @@protoc_insertion_point(field_release:cavnue.messages.data_warehouse.management.v2.CameraMediaOutputMetadata.uri)
  if ((_impl_._has_bits_[0] & 0x00000001u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* released = _impl_.uri_.Release();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.uri_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return released;
}
inline void CameraMediaOutputMetadata::set_allocated_uri(std::string* value) {
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.uri_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.uri_.IsDefault()) {
          _impl_.uri_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:cavnue.messages.data_warehouse.management.v2.CameraMediaOutputMetadata.uri)
}

// optional .google.protobuf.Timestamp start_ts = 2 [json_name = "startTs", (.gen_bq_schema.bigquery) = {
inline bool CameraMediaOutputMetadata::has_start_ts() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.start_ts_ != nullptr);
  return value;
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& CameraMediaOutputMetadata::_internal_start_ts() const {
  const ::PROTOBUF_NAMESPACE_ID::Timestamp* p = _impl_.start_ts_;
  return p != nullptr ? *p : reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Timestamp&>(
      ::PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& CameraMediaOutputMetadata::start_ts() const {
  // @@protoc_insertion_point(field_get:cavnue.messages.data_warehouse.management.v2.CameraMediaOutputMetadata.start_ts)
  return _internal_start_ts();
}
inline void CameraMediaOutputMetadata::unsafe_arena_set_allocated_start_ts(
    ::PROTOBUF_NAMESPACE_ID::Timestamp* start_ts) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.start_ts_);
  }
  _impl_.start_ts_ = start_ts;
  if (start_ts) {
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:cavnue.messages.data_warehouse.management.v2.CameraMediaOutputMetadata.start_ts)
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* CameraMediaOutputMetadata::release_start_ts() {
  _impl_._has_bits_[0] &= ~0x00000002u;
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = _impl_.start_ts_;
  _impl_.start_ts_ = nullptr;
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
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* CameraMediaOutputMetadata::unsafe_arena_release_start_ts() {
  // @@protoc_insertion_point(field_release:cavnue.messages.data_warehouse.management.v2.CameraMediaOutputMetadata.start_ts)
  _impl_._has_bits_[0] &= ~0x00000002u;
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = _impl_.start_ts_;
  _impl_.start_ts_ = nullptr;
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* CameraMediaOutputMetadata::_internal_mutable_start_ts() {
  _impl_._has_bits_[0] |= 0x00000002u;
  if (_impl_.start_ts_ == nullptr) {
    auto* p = CreateMaybeMessage<::PROTOBUF_NAMESPACE_ID::Timestamp>(GetArenaForAllocation());
    _impl_.start_ts_ = p;
  }
  return _impl_.start_ts_;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* CameraMediaOutputMetadata::mutable_start_ts() {
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _msg = _internal_mutable_start_ts();
  // @@protoc_insertion_point(field_mutable:cavnue.messages.data_warehouse.management.v2.CameraMediaOutputMetadata.start_ts)
  return _msg;
}
inline void CameraMediaOutputMetadata::set_allocated_start_ts(::PROTOBUF_NAMESPACE_ID::Timestamp* start_ts) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.start_ts_);
  }
  if (start_ts) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(start_ts));
    if (message_arena != submessage_arena) {
      start_ts = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, start_ts, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  _impl_.start_ts_ = start_ts;
  // @@protoc_insertion_point(field_set_allocated:cavnue.messages.data_warehouse.management.v2.CameraMediaOutputMetadata.start_ts)
}

// optional uint32 height = 3 [json_name = "height", (.cavnue.messages.common.v1.units) = UNITS_PIXELS, (.gen_bq_schema.bigquery) = {
inline bool CameraMediaOutputMetadata::has_height() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline void CameraMediaOutputMetadata::clear_height() {
  _impl_.height_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline ::uint32_t CameraMediaOutputMetadata::height() const {
  // @@protoc_insertion_point(field_get:cavnue.messages.data_warehouse.management.v2.CameraMediaOutputMetadata.height)
  return _internal_height();
}
inline void CameraMediaOutputMetadata::set_height(::uint32_t value) {
  _internal_set_height(value);
  // @@protoc_insertion_point(field_set:cavnue.messages.data_warehouse.management.v2.CameraMediaOutputMetadata.height)
}
inline ::uint32_t CameraMediaOutputMetadata::_internal_height() const {
  return _impl_.height_;
}
inline void CameraMediaOutputMetadata::_internal_set_height(::uint32_t value) {
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.height_ = value;
}

// optional uint32 width = 4 [json_name = "width", (.cavnue.messages.common.v1.units) = UNITS_PIXELS, (.gen_bq_schema.bigquery) = {
inline bool CameraMediaOutputMetadata::has_width() const {
  bool value = (_impl_._has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline void CameraMediaOutputMetadata::clear_width() {
  _impl_.width_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000008u;
}
inline ::uint32_t CameraMediaOutputMetadata::width() const {
  // @@protoc_insertion_point(field_get:cavnue.messages.data_warehouse.management.v2.CameraMediaOutputMetadata.width)
  return _internal_width();
}
inline void CameraMediaOutputMetadata::set_width(::uint32_t value) {
  _internal_set_width(value);
  // @@protoc_insertion_point(field_set:cavnue.messages.data_warehouse.management.v2.CameraMediaOutputMetadata.width)
}
inline ::uint32_t CameraMediaOutputMetadata::_internal_width() const {
  return _impl_.width_;
}
inline void CameraMediaOutputMetadata::_internal_set_width(::uint32_t value) {
  _impl_._has_bits_[0] |= 0x00000008u;
  _impl_.width_ = value;
}

// optional float duration = 5 [json_name = "duration", (.cavnue.messages.common.v1.units) = UNITS_MILLISECONDS, (.gen_bq_schema.bigquery) = {
inline bool CameraMediaOutputMetadata::has_duration() const {
  bool value = (_impl_._has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline void CameraMediaOutputMetadata::clear_duration() {
  _impl_.duration_ = 0;
  _impl_._has_bits_[0] &= ~0x00000010u;
}
inline float CameraMediaOutputMetadata::duration() const {
  // @@protoc_insertion_point(field_get:cavnue.messages.data_warehouse.management.v2.CameraMediaOutputMetadata.duration)
  return _internal_duration();
}
inline void CameraMediaOutputMetadata::set_duration(float value) {
  _internal_set_duration(value);
  // @@protoc_insertion_point(field_set:cavnue.messages.data_warehouse.management.v2.CameraMediaOutputMetadata.duration)
}
inline float CameraMediaOutputMetadata::_internal_duration() const {
  return _impl_.duration_;
}
inline void CameraMediaOutputMetadata::_internal_set_duration(float value) {
  _impl_._has_bits_[0] |= 0x00000010u;
  _impl_.duration_ = value;
}

// optional uint32 frame_rate = 6 [json_name = "frameRate", (.gen_bq_schema.bigquery) = {
inline bool CameraMediaOutputMetadata::has_frame_rate() const {
  bool value = (_impl_._has_bits_[0] & 0x00000020u) != 0;
  return value;
}
inline void CameraMediaOutputMetadata::clear_frame_rate() {
  _impl_.frame_rate_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000020u;
}
inline ::uint32_t CameraMediaOutputMetadata::frame_rate() const {
  // @@protoc_insertion_point(field_get:cavnue.messages.data_warehouse.management.v2.CameraMediaOutputMetadata.frame_rate)
  return _internal_frame_rate();
}
inline void CameraMediaOutputMetadata::set_frame_rate(::uint32_t value) {
  _internal_set_frame_rate(value);
  // @@protoc_insertion_point(field_set:cavnue.messages.data_warehouse.management.v2.CameraMediaOutputMetadata.frame_rate)
}
inline ::uint32_t CameraMediaOutputMetadata::_internal_frame_rate() const {
  return _impl_.frame_rate_;
}
inline void CameraMediaOutputMetadata::_internal_set_frame_rate(::uint32_t value) {
  _impl_._has_bits_[0] |= 0x00000020u;
  _impl_.frame_rate_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace v2
}  // namespace management
}  // namespace data_warehouse
}  // namespace messages
}  // namespace cavnue


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_cavnue_2fmessages_2fdata_5fwarehouse_2fmanagement_2fv2_2fcamera_5fmedia_5foutputs_2eproto_2epb_2eh
