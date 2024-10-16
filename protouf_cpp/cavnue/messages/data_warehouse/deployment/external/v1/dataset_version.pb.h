// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cavnue/messages/data_warehouse/deployment/external/v1/dataset_version.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_cavnue_2fmessages_2fdata_5fwarehouse_2fdeployment_2fexternal_2fv1_2fdataset_5fversion_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_cavnue_2fmessages_2fdata_5fwarehouse_2fdeployment_2fexternal_2fv1_2fdataset_5fversion_2eproto_2epb_2eh

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
#include "google/protobuf/timestamp.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_cavnue_2fmessages_2fdata_5fwarehouse_2fdeployment_2fexternal_2fv1_2fdataset_5fversion_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_cavnue_2fmessages_2fdata_5fwarehouse_2fdeployment_2fexternal_2fv1_2fdataset_5fversion_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_cavnue_2fmessages_2fdata_5fwarehouse_2fdeployment_2fexternal_2fv1_2fdataset_5fversion_2eproto;
namespace cavnue {
namespace messages {
namespace data_warehouse {
namespace deployment {
namespace external {
namespace v1 {
class DatasetVersion;
struct DatasetVersionDefaultTypeInternal;
extern DatasetVersionDefaultTypeInternal _DatasetVersion_default_instance_;
}  // namespace v1
}  // namespace external
}  // namespace deployment
}  // namespace data_warehouse
}  // namespace messages
}  // namespace cavnue
PROTOBUF_NAMESPACE_OPEN
template <>
::cavnue::messages::data_warehouse::deployment::external::v1::DatasetVersion* Arena::CreateMaybeMessage<::cavnue::messages::data_warehouse::deployment::external::v1::DatasetVersion>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace cavnue {
namespace messages {
namespace data_warehouse {
namespace deployment {
namespace external {
namespace v1 {

// ===================================================================


// -------------------------------------------------------------------

class DatasetVersion final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:cavnue.messages.data_warehouse.deployment.external.v1.DatasetVersion) */ {
 public:
  inline DatasetVersion() : DatasetVersion(nullptr) {}
  ~DatasetVersion() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR DatasetVersion(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  DatasetVersion(const DatasetVersion& from);
  DatasetVersion(DatasetVersion&& from) noexcept
    : DatasetVersion() {
    *this = ::std::move(from);
  }

  inline DatasetVersion& operator=(const DatasetVersion& from) {
    CopyFrom(from);
    return *this;
  }
  inline DatasetVersion& operator=(DatasetVersion&& from) noexcept {
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
  static const DatasetVersion& default_instance() {
    return *internal_default_instance();
  }
  static inline const DatasetVersion* internal_default_instance() {
    return reinterpret_cast<const DatasetVersion*>(
               &_DatasetVersion_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(DatasetVersion& a, DatasetVersion& b) {
    a.Swap(&b);
  }
  inline void Swap(DatasetVersion* other) {
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
  void UnsafeArenaSwap(DatasetVersion* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  DatasetVersion* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<DatasetVersion>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const DatasetVersion& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const DatasetVersion& from) {
    DatasetVersion::MergeImpl(*this, from);
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
  void InternalSwap(DatasetVersion* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "cavnue.messages.data_warehouse.deployment.external.v1.DatasetVersion";
  }
  protected:
  explicit DatasetVersion(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kIdsFieldNumber = 6,
    kTsFieldNumber = 1,
    kStartTsFieldNumber = 4,
    kEndTsFieldNumber = 5,
    kDatasetIdFieldNumber = 2,
    kDatasetVersionFieldNumber = 3,
  };
  // repeated int64 ids = 6 [json_name = "ids"];
  int ids_size() const;
  private:
  int _internal_ids_size() const;

  public:
  void clear_ids() ;
  ::int64_t ids(int index) const;
  void set_ids(int index, ::int64_t value);
  void add_ids(::int64_t value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField<::int64_t>& ids() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField<::int64_t>* mutable_ids();

  private:
  ::int64_t _internal_ids(int index) const;
  void _internal_add_ids(::int64_t value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField<::int64_t>& _internal_ids() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField<::int64_t>* _internal_mutable_ids();

  public:
  // .google.protobuf.Timestamp ts = 1 [json_name = "ts", (.gen_bq_schema.bigquery) = {
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
  // .google.protobuf.Timestamp start_ts = 4 [json_name = "startTs", (.gen_bq_schema.bigquery) = {
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
  // .google.protobuf.Timestamp end_ts = 5 [json_name = "endTs", (.gen_bq_schema.bigquery) = {
  bool has_end_ts() const;
  void clear_end_ts() ;
  const ::PROTOBUF_NAMESPACE_ID::Timestamp& end_ts() const;
  PROTOBUF_NODISCARD ::PROTOBUF_NAMESPACE_ID::Timestamp* release_end_ts();
  ::PROTOBUF_NAMESPACE_ID::Timestamp* mutable_end_ts();
  void set_allocated_end_ts(::PROTOBUF_NAMESPACE_ID::Timestamp* end_ts);
  private:
  const ::PROTOBUF_NAMESPACE_ID::Timestamp& _internal_end_ts() const;
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _internal_mutable_end_ts();
  public:
  void unsafe_arena_set_allocated_end_ts(
      ::PROTOBUF_NAMESPACE_ID::Timestamp* end_ts);
  ::PROTOBUF_NAMESPACE_ID::Timestamp* unsafe_arena_release_end_ts();
  // int64 dataset_id = 2 [json_name = "datasetId"];
  void clear_dataset_id() ;
  ::int64_t dataset_id() const;
  void set_dataset_id(::int64_t value);

  private:
  ::int64_t _internal_dataset_id() const;
  void _internal_set_dataset_id(::int64_t value);

  public:
  // int64 dataset_version = 3 [json_name = "datasetVersion"];
  void clear_dataset_version() ;
  ::int64_t dataset_version() const;
  void set_dataset_version(::int64_t value);

  private:
  ::int64_t _internal_dataset_version() const;
  void _internal_set_dataset_version(::int64_t value);

  public:
  // @@protoc_insertion_point(class_scope:cavnue.messages.data_warehouse.deployment.external.v1.DatasetVersion)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::RepeatedField<::int64_t> ids_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _ids_cached_byte_size_;
    ::PROTOBUF_NAMESPACE_ID::Timestamp* ts_;
    ::PROTOBUF_NAMESPACE_ID::Timestamp* start_ts_;
    ::PROTOBUF_NAMESPACE_ID::Timestamp* end_ts_;
    ::int64_t dataset_id_;
    ::int64_t dataset_version_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_cavnue_2fmessages_2fdata_5fwarehouse_2fdeployment_2fexternal_2fv1_2fdataset_5fversion_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// DatasetVersion

// .google.protobuf.Timestamp ts = 1 [json_name = "ts", (.gen_bq_schema.bigquery) = {
inline bool DatasetVersion::has_ts() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.ts_ != nullptr);
  return value;
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& DatasetVersion::_internal_ts() const {
  const ::PROTOBUF_NAMESPACE_ID::Timestamp* p = _impl_.ts_;
  return p != nullptr ? *p : reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Timestamp&>(
      ::PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& DatasetVersion::ts() const {
  // @@protoc_insertion_point(field_get:cavnue.messages.data_warehouse.deployment.external.v1.DatasetVersion.ts)
  return _internal_ts();
}
inline void DatasetVersion::unsafe_arena_set_allocated_ts(
    ::PROTOBUF_NAMESPACE_ID::Timestamp* ts) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.ts_);
  }
  _impl_.ts_ = ts;
  if (ts) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:cavnue.messages.data_warehouse.deployment.external.v1.DatasetVersion.ts)
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* DatasetVersion::release_ts() {
  _impl_._has_bits_[0] &= ~0x00000001u;
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
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* DatasetVersion::unsafe_arena_release_ts() {
  // @@protoc_insertion_point(field_release:cavnue.messages.data_warehouse.deployment.external.v1.DatasetVersion.ts)
  _impl_._has_bits_[0] &= ~0x00000001u;
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = _impl_.ts_;
  _impl_.ts_ = nullptr;
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* DatasetVersion::_internal_mutable_ts() {
  _impl_._has_bits_[0] |= 0x00000001u;
  if (_impl_.ts_ == nullptr) {
    auto* p = CreateMaybeMessage<::PROTOBUF_NAMESPACE_ID::Timestamp>(GetArenaForAllocation());
    _impl_.ts_ = p;
  }
  return _impl_.ts_;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* DatasetVersion::mutable_ts() {
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _msg = _internal_mutable_ts();
  // @@protoc_insertion_point(field_mutable:cavnue.messages.data_warehouse.deployment.external.v1.DatasetVersion.ts)
  return _msg;
}
inline void DatasetVersion::set_allocated_ts(::PROTOBUF_NAMESPACE_ID::Timestamp* ts) {
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
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.ts_ = ts;
  // @@protoc_insertion_point(field_set_allocated:cavnue.messages.data_warehouse.deployment.external.v1.DatasetVersion.ts)
}

// int64 dataset_id = 2 [json_name = "datasetId"];
inline void DatasetVersion::clear_dataset_id() {
  _impl_.dataset_id_ = ::int64_t{0};
}
inline ::int64_t DatasetVersion::dataset_id() const {
  // @@protoc_insertion_point(field_get:cavnue.messages.data_warehouse.deployment.external.v1.DatasetVersion.dataset_id)
  return _internal_dataset_id();
}
inline void DatasetVersion::set_dataset_id(::int64_t value) {
  _internal_set_dataset_id(value);
  // @@protoc_insertion_point(field_set:cavnue.messages.data_warehouse.deployment.external.v1.DatasetVersion.dataset_id)
}
inline ::int64_t DatasetVersion::_internal_dataset_id() const {
  return _impl_.dataset_id_;
}
inline void DatasetVersion::_internal_set_dataset_id(::int64_t value) {
  ;
  _impl_.dataset_id_ = value;
}

// int64 dataset_version = 3 [json_name = "datasetVersion"];
inline void DatasetVersion::clear_dataset_version() {
  _impl_.dataset_version_ = ::int64_t{0};
}
inline ::int64_t DatasetVersion::dataset_version() const {
  // @@protoc_insertion_point(field_get:cavnue.messages.data_warehouse.deployment.external.v1.DatasetVersion.dataset_version)
  return _internal_dataset_version();
}
inline void DatasetVersion::set_dataset_version(::int64_t value) {
  _internal_set_dataset_version(value);
  // @@protoc_insertion_point(field_set:cavnue.messages.data_warehouse.deployment.external.v1.DatasetVersion.dataset_version)
}
inline ::int64_t DatasetVersion::_internal_dataset_version() const {
  return _impl_.dataset_version_;
}
inline void DatasetVersion::_internal_set_dataset_version(::int64_t value) {
  ;
  _impl_.dataset_version_ = value;
}

// .google.protobuf.Timestamp start_ts = 4 [json_name = "startTs", (.gen_bq_schema.bigquery) = {
inline bool DatasetVersion::has_start_ts() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.start_ts_ != nullptr);
  return value;
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& DatasetVersion::_internal_start_ts() const {
  const ::PROTOBUF_NAMESPACE_ID::Timestamp* p = _impl_.start_ts_;
  return p != nullptr ? *p : reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Timestamp&>(
      ::PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& DatasetVersion::start_ts() const {
  // @@protoc_insertion_point(field_get:cavnue.messages.data_warehouse.deployment.external.v1.DatasetVersion.start_ts)
  return _internal_start_ts();
}
inline void DatasetVersion::unsafe_arena_set_allocated_start_ts(
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
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:cavnue.messages.data_warehouse.deployment.external.v1.DatasetVersion.start_ts)
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* DatasetVersion::release_start_ts() {
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
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* DatasetVersion::unsafe_arena_release_start_ts() {
  // @@protoc_insertion_point(field_release:cavnue.messages.data_warehouse.deployment.external.v1.DatasetVersion.start_ts)
  _impl_._has_bits_[0] &= ~0x00000002u;
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = _impl_.start_ts_;
  _impl_.start_ts_ = nullptr;
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* DatasetVersion::_internal_mutable_start_ts() {
  _impl_._has_bits_[0] |= 0x00000002u;
  if (_impl_.start_ts_ == nullptr) {
    auto* p = CreateMaybeMessage<::PROTOBUF_NAMESPACE_ID::Timestamp>(GetArenaForAllocation());
    _impl_.start_ts_ = p;
  }
  return _impl_.start_ts_;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* DatasetVersion::mutable_start_ts() {
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _msg = _internal_mutable_start_ts();
  // @@protoc_insertion_point(field_mutable:cavnue.messages.data_warehouse.deployment.external.v1.DatasetVersion.start_ts)
  return _msg;
}
inline void DatasetVersion::set_allocated_start_ts(::PROTOBUF_NAMESPACE_ID::Timestamp* start_ts) {
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
  // @@protoc_insertion_point(field_set_allocated:cavnue.messages.data_warehouse.deployment.external.v1.DatasetVersion.start_ts)
}

// .google.protobuf.Timestamp end_ts = 5 [json_name = "endTs", (.gen_bq_schema.bigquery) = {
inline bool DatasetVersion::has_end_ts() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.end_ts_ != nullptr);
  return value;
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& DatasetVersion::_internal_end_ts() const {
  const ::PROTOBUF_NAMESPACE_ID::Timestamp* p = _impl_.end_ts_;
  return p != nullptr ? *p : reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Timestamp&>(
      ::PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& DatasetVersion::end_ts() const {
  // @@protoc_insertion_point(field_get:cavnue.messages.data_warehouse.deployment.external.v1.DatasetVersion.end_ts)
  return _internal_end_ts();
}
inline void DatasetVersion::unsafe_arena_set_allocated_end_ts(
    ::PROTOBUF_NAMESPACE_ID::Timestamp* end_ts) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.end_ts_);
  }
  _impl_.end_ts_ = end_ts;
  if (end_ts) {
    _impl_._has_bits_[0] |= 0x00000004u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000004u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:cavnue.messages.data_warehouse.deployment.external.v1.DatasetVersion.end_ts)
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* DatasetVersion::release_end_ts() {
  _impl_._has_bits_[0] &= ~0x00000004u;
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = _impl_.end_ts_;
  _impl_.end_ts_ = nullptr;
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
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* DatasetVersion::unsafe_arena_release_end_ts() {
  // @@protoc_insertion_point(field_release:cavnue.messages.data_warehouse.deployment.external.v1.DatasetVersion.end_ts)
  _impl_._has_bits_[0] &= ~0x00000004u;
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = _impl_.end_ts_;
  _impl_.end_ts_ = nullptr;
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* DatasetVersion::_internal_mutable_end_ts() {
  _impl_._has_bits_[0] |= 0x00000004u;
  if (_impl_.end_ts_ == nullptr) {
    auto* p = CreateMaybeMessage<::PROTOBUF_NAMESPACE_ID::Timestamp>(GetArenaForAllocation());
    _impl_.end_ts_ = p;
  }
  return _impl_.end_ts_;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* DatasetVersion::mutable_end_ts() {
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _msg = _internal_mutable_end_ts();
  // @@protoc_insertion_point(field_mutable:cavnue.messages.data_warehouse.deployment.external.v1.DatasetVersion.end_ts)
  return _msg;
}
inline void DatasetVersion::set_allocated_end_ts(::PROTOBUF_NAMESPACE_ID::Timestamp* end_ts) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.end_ts_);
  }
  if (end_ts) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(end_ts));
    if (message_arena != submessage_arena) {
      end_ts = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, end_ts, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000004u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000004u;
  }
  _impl_.end_ts_ = end_ts;
  // @@protoc_insertion_point(field_set_allocated:cavnue.messages.data_warehouse.deployment.external.v1.DatasetVersion.end_ts)
}

// repeated int64 ids = 6 [json_name = "ids"];
inline int DatasetVersion::_internal_ids_size() const {
  return _impl_.ids_.size();
}
inline int DatasetVersion::ids_size() const {
  return _internal_ids_size();
}
inline void DatasetVersion::clear_ids() {
  _internal_mutable_ids()->Clear();
}
inline ::int64_t DatasetVersion::ids(int index) const {
  // @@protoc_insertion_point(field_get:cavnue.messages.data_warehouse.deployment.external.v1.DatasetVersion.ids)
  return _internal_ids(index);
}
inline void DatasetVersion::set_ids(int index, ::int64_t value) {
  _internal_mutable_ids()->Set(index, value);
  // @@protoc_insertion_point(field_set:cavnue.messages.data_warehouse.deployment.external.v1.DatasetVersion.ids)
}
inline void DatasetVersion::add_ids(::int64_t value) {
  _internal_add_ids(value);
  // @@protoc_insertion_point(field_add:cavnue.messages.data_warehouse.deployment.external.v1.DatasetVersion.ids)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField<::int64_t>& DatasetVersion::ids() const {
  // @@protoc_insertion_point(field_list:cavnue.messages.data_warehouse.deployment.external.v1.DatasetVersion.ids)
  return _internal_ids();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField<::int64_t>* DatasetVersion::mutable_ids() {
  // @@protoc_insertion_point(field_mutable_list:cavnue.messages.data_warehouse.deployment.external.v1.DatasetVersion.ids)
  return _internal_mutable_ids();
}

inline ::int64_t DatasetVersion::_internal_ids(int index) const {
  return _internal_ids().Get(index);
}
inline void DatasetVersion::_internal_add_ids(::int64_t value) {
  _internal_mutable_ids()->Add(value);
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField<::int64_t>& DatasetVersion::_internal_ids() const {
  return _impl_.ids_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField<::int64_t>* DatasetVersion::_internal_mutable_ids() {
  return &_impl_.ids_;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace external
}  // namespace deployment
}  // namespace data_warehouse
}  // namespace messages
}  // namespace cavnue


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_cavnue_2fmessages_2fdata_5fwarehouse_2fdeployment_2fexternal_2fv1_2fdataset_5fversion_2eproto_2epb_2eh
