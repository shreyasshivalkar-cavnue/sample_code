// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cavnue/messages/data_warehouse/management/v2/datasets.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_cavnue_2fmessages_2fdata_5fwarehouse_2fmanagement_2fv2_2fdatasets_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_cavnue_2fmessages_2fdata_5fwarehouse_2fmanagement_2fv2_2fdatasets_2eproto_2epb_2eh

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
#include "google/protobuf/generated_enum_reflection.h"
#include "google/protobuf/unknown_field_set.h"
#include "cavnue/third_party/bq/v1/bq_field.pb.h"
#include "cavnue/third_party/bq/v1/bq_table.pb.h"
#include "cavnue/messages/common/v1/field_options.pb.h"
#include "google/protobuf/timestamp.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_cavnue_2fmessages_2fdata_5fwarehouse_2fmanagement_2fv2_2fdatasets_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_cavnue_2fmessages_2fdata_5fwarehouse_2fmanagement_2fv2_2fdatasets_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_cavnue_2fmessages_2fdata_5fwarehouse_2fmanagement_2fv2_2fdatasets_2eproto;
namespace cavnue {
namespace messages {
namespace data_warehouse {
namespace management {
namespace v2 {
class Dataset;
struct DatasetDefaultTypeInternal;
extern DatasetDefaultTypeInternal _Dataset_default_instance_;
}  // namespace v2
}  // namespace management
}  // namespace data_warehouse
}  // namespace messages
}  // namespace cavnue
PROTOBUF_NAMESPACE_OPEN
template <>
::cavnue::messages::data_warehouse::management::v2::Dataset* Arena::CreateMaybeMessage<::cavnue::messages::data_warehouse::management::v2::Dataset>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace cavnue {
namespace messages {
namespace data_warehouse {
namespace management {
namespace v2 {
enum Dataset_Type : int {
  Dataset_Type_TYPE_UNSPECIFIED = 0,
  Dataset_Type_TYPE_SPEEDING = 1,
  Dataset_Type_TYPE_IMPEDING = 2,
  Dataset_Type_TYPE_STATIONARY = 3,
  Dataset_Type_TYPE_TRAFFIC = 4,
  Dataset_Type_TYPE_COLLISION = 5,
  Dataset_Type_Dataset_Type_INT_MIN_SENTINEL_DO_NOT_USE_ =
      std::numeric_limits<::int32_t>::min(),
  Dataset_Type_Dataset_Type_INT_MAX_SENTINEL_DO_NOT_USE_ =
      std::numeric_limits<::int32_t>::max(),
};

bool Dataset_Type_IsValid(int value);
constexpr Dataset_Type Dataset_Type_Type_MIN = static_cast<Dataset_Type>(0);
constexpr Dataset_Type Dataset_Type_Type_MAX = static_cast<Dataset_Type>(5);
constexpr int Dataset_Type_Type_ARRAYSIZE = 5 + 1;
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
Dataset_Type_descriptor();
template <typename T>
const std::string& Dataset_Type_Name(T value) {
  static_assert(std::is_same<T, Dataset_Type>::value ||
                    std::is_integral<T>::value,
                "Incorrect type passed to Type_Name().");
  return Dataset_Type_Name(static_cast<Dataset_Type>(value));
}
template <>
inline const std::string& Dataset_Type_Name(Dataset_Type value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfDenseEnum<Dataset_Type_descriptor,
                                                 0, 5>(
      static_cast<int>(value));
}
inline bool Dataset_Type_Parse(absl::string_view name, Dataset_Type* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Dataset_Type>(
      Dataset_Type_descriptor(), name, value);
}

// ===================================================================


// -------------------------------------------------------------------

class Dataset final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:cavnue.messages.data_warehouse.management.v2.Dataset) */ {
 public:
  inline Dataset() : Dataset(nullptr) {}
  ~Dataset() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR Dataset(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Dataset(const Dataset& from);
  Dataset(Dataset&& from) noexcept
    : Dataset() {
    *this = ::std::move(from);
  }

  inline Dataset& operator=(const Dataset& from) {
    CopyFrom(from);
    return *this;
  }
  inline Dataset& operator=(Dataset&& from) noexcept {
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
  static const Dataset& default_instance() {
    return *internal_default_instance();
  }
  static inline const Dataset* internal_default_instance() {
    return reinterpret_cast<const Dataset*>(
               &_Dataset_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Dataset& a, Dataset& b) {
    a.Swap(&b);
  }
  inline void Swap(Dataset* other) {
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
  void UnsafeArenaSwap(Dataset* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Dataset* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Dataset>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Dataset& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Dataset& from) {
    Dataset::MergeImpl(*this, from);
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
  void InternalSwap(Dataset* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "cavnue.messages.data_warehouse.management.v2.Dataset";
  }
  protected:
  explicit Dataset(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  using Type = Dataset_Type;
  static constexpr Type TYPE_UNSPECIFIED = Dataset_Type_TYPE_UNSPECIFIED;
  static constexpr Type TYPE_SPEEDING = Dataset_Type_TYPE_SPEEDING;
  static constexpr Type TYPE_IMPEDING = Dataset_Type_TYPE_IMPEDING;
  static constexpr Type TYPE_STATIONARY = Dataset_Type_TYPE_STATIONARY;
  static constexpr Type TYPE_TRAFFIC = Dataset_Type_TYPE_TRAFFIC;
  static constexpr Type TYPE_COLLISION = Dataset_Type_TYPE_COLLISION;
  static inline bool Type_IsValid(int value) {
    return Dataset_Type_IsValid(value);
  }
  static constexpr Type Type_MIN = Dataset_Type_Type_MIN;
  static constexpr Type Type_MAX = Dataset_Type_Type_MAX;
  static constexpr int Type_ARRAYSIZE = Dataset_Type_Type_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Type_descriptor() {
    return Dataset_Type_descriptor();
  }
  template <typename T>
  static inline const std::string& Type_Name(T value) {
    return Dataset_Type_Name(value);
  }
  static inline bool Type_Parse(absl::string_view name, Type* value) {
    return Dataset_Type_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kDataIdsFieldNumber = 4,
    kIdentifierFieldNumber = 2,
    kSimIdFieldNumber = 8,
    kStartTsFieldNumber = 6,
    kEndTsFieldNumber = 7,
    kDatasetIdFieldNumber = 1,
    kEnvironmentIdFieldNumber = 3,
    kCohortIdFieldNumber = 9,
    kTypeFieldNumber = 5,
  };
  // repeated int64 data_ids = 4 [json_name = "dataIds"];
  int data_ids_size() const;
  private:
  int _internal_data_ids_size() const;

  public:
  void clear_data_ids() ;
  ::int64_t data_ids(int index) const;
  void set_data_ids(int index, ::int64_t value);
  void add_data_ids(::int64_t value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField<::int64_t>& data_ids() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField<::int64_t>* mutable_data_ids();

  private:
  ::int64_t _internal_data_ids(int index) const;
  void _internal_add_data_ids(::int64_t value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField<::int64_t>& _internal_data_ids() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField<::int64_t>* _internal_mutable_data_ids();

  public:
  // optional string identifier = 2 [json_name = "identifier", (.gen_bq_schema.bigquery) = {
  bool has_identifier() const;
  void clear_identifier() ;
  const std::string& identifier() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_identifier(Arg_&& arg, Args_... args);
  std::string* mutable_identifier();
  PROTOBUF_NODISCARD std::string* release_identifier();
  void set_allocated_identifier(std::string* ptr);

  private:
  const std::string& _internal_identifier() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_identifier(
      const std::string& value);
  std::string* _internal_mutable_identifier();

  public:
  // string sim_id = 8 [json_name = "simId"];
  void clear_sim_id() ;
  const std::string& sim_id() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_sim_id(Arg_&& arg, Args_... args);
  std::string* mutable_sim_id();
  PROTOBUF_NODISCARD std::string* release_sim_id();
  void set_allocated_sim_id(std::string* ptr);

  private:
  const std::string& _internal_sim_id() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_sim_id(
      const std::string& value);
  std::string* _internal_mutable_sim_id();

  public:
  // optional .google.protobuf.Timestamp start_ts = 6 [json_name = "startTs", (.gen_bq_schema.bigquery) = {
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
  // optional .google.protobuf.Timestamp end_ts = 7 [json_name = "endTs", (.gen_bq_schema.bigquery) = {
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
  // optional int64 dataset_id = 1 [json_name = "datasetId", (.cavnue.messages.common.v1.primary_key) = true, (.gen_bq_schema.bigquery) = {
  bool has_dataset_id() const;
  void clear_dataset_id() ;
  ::int64_t dataset_id() const;
  void set_dataset_id(::int64_t value);

  private:
  ::int64_t _internal_dataset_id() const;
  void _internal_set_dataset_id(::int64_t value);

  public:
  // optional int64 environment_id = 3 [json_name = "environmentId", (.gen_bq_schema.bigquery) = {
  bool has_environment_id() const;
  void clear_environment_id() ;
  ::int64_t environment_id() const;
  void set_environment_id(::int64_t value);

  private:
  ::int64_t _internal_environment_id() const;
  void _internal_set_environment_id(::int64_t value);

  public:
  // optional int64 cohort_id = 9 [json_name = "cohortId", (.gen_bq_schema.bigquery) = {
  bool has_cohort_id() const;
  void clear_cohort_id() ;
  ::int64_t cohort_id() const;
  void set_cohort_id(::int64_t value);

  private:
  ::int64_t _internal_cohort_id() const;
  void _internal_set_cohort_id(::int64_t value);

  public:
  // .cavnue.messages.data_warehouse.management.v2.Dataset.Type type = 5 [json_name = "type"];
  void clear_type() ;
  ::cavnue::messages::data_warehouse::management::v2::Dataset_Type type() const;
  void set_type(::cavnue::messages::data_warehouse::management::v2::Dataset_Type value);

  private:
  ::cavnue::messages::data_warehouse::management::v2::Dataset_Type _internal_type() const;
  void _internal_set_type(::cavnue::messages::data_warehouse::management::v2::Dataset_Type value);

  public:
  // @@protoc_insertion_point(class_scope:cavnue.messages.data_warehouse.management.v2.Dataset)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::RepeatedField<::int64_t> data_ids_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _data_ids_cached_byte_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr identifier_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr sim_id_;
    ::PROTOBUF_NAMESPACE_ID::Timestamp* start_ts_;
    ::PROTOBUF_NAMESPACE_ID::Timestamp* end_ts_;
    ::int64_t dataset_id_;
    ::int64_t environment_id_;
    ::int64_t cohort_id_;
    int type_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_cavnue_2fmessages_2fdata_5fwarehouse_2fmanagement_2fv2_2fdatasets_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Dataset

// optional int64 dataset_id = 1 [json_name = "datasetId", (.cavnue.messages.common.v1.primary_key) = true, (.gen_bq_schema.bigquery) = {
inline bool Dataset::has_dataset_id() const {
  bool value = (_impl_._has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline void Dataset::clear_dataset_id() {
  _impl_.dataset_id_ = ::int64_t{0};
  _impl_._has_bits_[0] &= ~0x00000008u;
}
inline ::int64_t Dataset::dataset_id() const {
  // @@protoc_insertion_point(field_get:cavnue.messages.data_warehouse.management.v2.Dataset.dataset_id)
  return _internal_dataset_id();
}
inline void Dataset::set_dataset_id(::int64_t value) {
  _internal_set_dataset_id(value);
  // @@protoc_insertion_point(field_set:cavnue.messages.data_warehouse.management.v2.Dataset.dataset_id)
}
inline ::int64_t Dataset::_internal_dataset_id() const {
  return _impl_.dataset_id_;
}
inline void Dataset::_internal_set_dataset_id(::int64_t value) {
  _impl_._has_bits_[0] |= 0x00000008u;
  _impl_.dataset_id_ = value;
}

// optional string identifier = 2 [json_name = "identifier", (.gen_bq_schema.bigquery) = {
inline bool Dataset::has_identifier() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void Dataset::clear_identifier() {
  _impl_.identifier_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Dataset::identifier() const {
  // @@protoc_insertion_point(field_get:cavnue.messages.data_warehouse.management.v2.Dataset.identifier)
  return _internal_identifier();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Dataset::set_identifier(Arg_&& arg,
                                                     Args_... args) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.identifier_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:cavnue.messages.data_warehouse.management.v2.Dataset.identifier)
}
inline std::string* Dataset::mutable_identifier() {
  std::string* _s = _internal_mutable_identifier();
  // @@protoc_insertion_point(field_mutable:cavnue.messages.data_warehouse.management.v2.Dataset.identifier)
  return _s;
}
inline const std::string& Dataset::_internal_identifier() const {
  return _impl_.identifier_.Get();
}
inline void Dataset::_internal_set_identifier(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;


  _impl_.identifier_.Set(value, GetArenaForAllocation());
}
inline std::string* Dataset::_internal_mutable_identifier() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.identifier_.Mutable( GetArenaForAllocation());
}
inline std::string* Dataset::release_identifier() {
  // @@protoc_insertion_point(field_release:cavnue.messages.data_warehouse.management.v2.Dataset.identifier)
  if ((_impl_._has_bits_[0] & 0x00000001u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* released = _impl_.identifier_.Release();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.identifier_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return released;
}
inline void Dataset::set_allocated_identifier(std::string* value) {
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.identifier_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.identifier_.IsDefault()) {
          _impl_.identifier_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:cavnue.messages.data_warehouse.management.v2.Dataset.identifier)
}

// optional int64 environment_id = 3 [json_name = "environmentId", (.gen_bq_schema.bigquery) = {
inline bool Dataset::has_environment_id() const {
  bool value = (_impl_._has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline void Dataset::clear_environment_id() {
  _impl_.environment_id_ = ::int64_t{0};
  _impl_._has_bits_[0] &= ~0x00000010u;
}
inline ::int64_t Dataset::environment_id() const {
  // @@protoc_insertion_point(field_get:cavnue.messages.data_warehouse.management.v2.Dataset.environment_id)
  return _internal_environment_id();
}
inline void Dataset::set_environment_id(::int64_t value) {
  _internal_set_environment_id(value);
  // @@protoc_insertion_point(field_set:cavnue.messages.data_warehouse.management.v2.Dataset.environment_id)
}
inline ::int64_t Dataset::_internal_environment_id() const {
  return _impl_.environment_id_;
}
inline void Dataset::_internal_set_environment_id(::int64_t value) {
  _impl_._has_bits_[0] |= 0x00000010u;
  _impl_.environment_id_ = value;
}

// repeated int64 data_ids = 4 [json_name = "dataIds"];
inline int Dataset::_internal_data_ids_size() const {
  return _impl_.data_ids_.size();
}
inline int Dataset::data_ids_size() const {
  return _internal_data_ids_size();
}
inline void Dataset::clear_data_ids() {
  _internal_mutable_data_ids()->Clear();
}
inline ::int64_t Dataset::data_ids(int index) const {
  // @@protoc_insertion_point(field_get:cavnue.messages.data_warehouse.management.v2.Dataset.data_ids)
  return _internal_data_ids(index);
}
inline void Dataset::set_data_ids(int index, ::int64_t value) {
  _internal_mutable_data_ids()->Set(index, value);
  // @@protoc_insertion_point(field_set:cavnue.messages.data_warehouse.management.v2.Dataset.data_ids)
}
inline void Dataset::add_data_ids(::int64_t value) {
  _internal_add_data_ids(value);
  // @@protoc_insertion_point(field_add:cavnue.messages.data_warehouse.management.v2.Dataset.data_ids)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField<::int64_t>& Dataset::data_ids() const {
  // @@protoc_insertion_point(field_list:cavnue.messages.data_warehouse.management.v2.Dataset.data_ids)
  return _internal_data_ids();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField<::int64_t>* Dataset::mutable_data_ids() {
  // @@protoc_insertion_point(field_mutable_list:cavnue.messages.data_warehouse.management.v2.Dataset.data_ids)
  return _internal_mutable_data_ids();
}

inline ::int64_t Dataset::_internal_data_ids(int index) const {
  return _internal_data_ids().Get(index);
}
inline void Dataset::_internal_add_data_ids(::int64_t value) {
  _internal_mutable_data_ids()->Add(value);
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField<::int64_t>& Dataset::_internal_data_ids() const {
  return _impl_.data_ids_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField<::int64_t>* Dataset::_internal_mutable_data_ids() {
  return &_impl_.data_ids_;
}

// .cavnue.messages.data_warehouse.management.v2.Dataset.Type type = 5 [json_name = "type"];
inline void Dataset::clear_type() {
  _impl_.type_ = 0;
}
inline ::cavnue::messages::data_warehouse::management::v2::Dataset_Type Dataset::type() const {
  // @@protoc_insertion_point(field_get:cavnue.messages.data_warehouse.management.v2.Dataset.type)
  return _internal_type();
}
inline void Dataset::set_type(::cavnue::messages::data_warehouse::management::v2::Dataset_Type value) {
   _internal_set_type(value);
  // @@protoc_insertion_point(field_set:cavnue.messages.data_warehouse.management.v2.Dataset.type)
}
inline ::cavnue::messages::data_warehouse::management::v2::Dataset_Type Dataset::_internal_type() const {
  return static_cast<::cavnue::messages::data_warehouse::management::v2::Dataset_Type>(_impl_.type_);
}
inline void Dataset::_internal_set_type(::cavnue::messages::data_warehouse::management::v2::Dataset_Type value) {
  ;
  _impl_.type_ = value;
}

// optional .google.protobuf.Timestamp start_ts = 6 [json_name = "startTs", (.gen_bq_schema.bigquery) = {
inline bool Dataset::has_start_ts() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.start_ts_ != nullptr);
  return value;
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& Dataset::_internal_start_ts() const {
  const ::PROTOBUF_NAMESPACE_ID::Timestamp* p = _impl_.start_ts_;
  return p != nullptr ? *p : reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Timestamp&>(
      ::PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& Dataset::start_ts() const {
  // @@protoc_insertion_point(field_get:cavnue.messages.data_warehouse.management.v2.Dataset.start_ts)
  return _internal_start_ts();
}
inline void Dataset::unsafe_arena_set_allocated_start_ts(
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
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:cavnue.messages.data_warehouse.management.v2.Dataset.start_ts)
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* Dataset::release_start_ts() {
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
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* Dataset::unsafe_arena_release_start_ts() {
  // @@protoc_insertion_point(field_release:cavnue.messages.data_warehouse.management.v2.Dataset.start_ts)
  _impl_._has_bits_[0] &= ~0x00000002u;
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = _impl_.start_ts_;
  _impl_.start_ts_ = nullptr;
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* Dataset::_internal_mutable_start_ts() {
  _impl_._has_bits_[0] |= 0x00000002u;
  if (_impl_.start_ts_ == nullptr) {
    auto* p = CreateMaybeMessage<::PROTOBUF_NAMESPACE_ID::Timestamp>(GetArenaForAllocation());
    _impl_.start_ts_ = p;
  }
  return _impl_.start_ts_;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* Dataset::mutable_start_ts() {
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _msg = _internal_mutable_start_ts();
  // @@protoc_insertion_point(field_mutable:cavnue.messages.data_warehouse.management.v2.Dataset.start_ts)
  return _msg;
}
inline void Dataset::set_allocated_start_ts(::PROTOBUF_NAMESPACE_ID::Timestamp* start_ts) {
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
  // @@protoc_insertion_point(field_set_allocated:cavnue.messages.data_warehouse.management.v2.Dataset.start_ts)
}

// optional .google.protobuf.Timestamp end_ts = 7 [json_name = "endTs", (.gen_bq_schema.bigquery) = {
inline bool Dataset::has_end_ts() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.end_ts_ != nullptr);
  return value;
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& Dataset::_internal_end_ts() const {
  const ::PROTOBUF_NAMESPACE_ID::Timestamp* p = _impl_.end_ts_;
  return p != nullptr ? *p : reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Timestamp&>(
      ::PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& Dataset::end_ts() const {
  // @@protoc_insertion_point(field_get:cavnue.messages.data_warehouse.management.v2.Dataset.end_ts)
  return _internal_end_ts();
}
inline void Dataset::unsafe_arena_set_allocated_end_ts(
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
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:cavnue.messages.data_warehouse.management.v2.Dataset.end_ts)
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* Dataset::release_end_ts() {
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
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* Dataset::unsafe_arena_release_end_ts() {
  // @@protoc_insertion_point(field_release:cavnue.messages.data_warehouse.management.v2.Dataset.end_ts)
  _impl_._has_bits_[0] &= ~0x00000004u;
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = _impl_.end_ts_;
  _impl_.end_ts_ = nullptr;
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* Dataset::_internal_mutable_end_ts() {
  _impl_._has_bits_[0] |= 0x00000004u;
  if (_impl_.end_ts_ == nullptr) {
    auto* p = CreateMaybeMessage<::PROTOBUF_NAMESPACE_ID::Timestamp>(GetArenaForAllocation());
    _impl_.end_ts_ = p;
  }
  return _impl_.end_ts_;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* Dataset::mutable_end_ts() {
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _msg = _internal_mutable_end_ts();
  // @@protoc_insertion_point(field_mutable:cavnue.messages.data_warehouse.management.v2.Dataset.end_ts)
  return _msg;
}
inline void Dataset::set_allocated_end_ts(::PROTOBUF_NAMESPACE_ID::Timestamp* end_ts) {
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
  // @@protoc_insertion_point(field_set_allocated:cavnue.messages.data_warehouse.management.v2.Dataset.end_ts)
}

// string sim_id = 8 [json_name = "simId"];
inline void Dataset::clear_sim_id() {
  _impl_.sim_id_.ClearToEmpty();
}
inline const std::string& Dataset::sim_id() const {
  // @@protoc_insertion_point(field_get:cavnue.messages.data_warehouse.management.v2.Dataset.sim_id)
  return _internal_sim_id();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Dataset::set_sim_id(Arg_&& arg,
                                                     Args_... args) {
  ;
  _impl_.sim_id_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:cavnue.messages.data_warehouse.management.v2.Dataset.sim_id)
}
inline std::string* Dataset::mutable_sim_id() {
  std::string* _s = _internal_mutable_sim_id();
  // @@protoc_insertion_point(field_mutable:cavnue.messages.data_warehouse.management.v2.Dataset.sim_id)
  return _s;
}
inline const std::string& Dataset::_internal_sim_id() const {
  return _impl_.sim_id_.Get();
}
inline void Dataset::_internal_set_sim_id(const std::string& value) {
  ;


  _impl_.sim_id_.Set(value, GetArenaForAllocation());
}
inline std::string* Dataset::_internal_mutable_sim_id() {
  ;
  return _impl_.sim_id_.Mutable( GetArenaForAllocation());
}
inline std::string* Dataset::release_sim_id() {
  // @@protoc_insertion_point(field_release:cavnue.messages.data_warehouse.management.v2.Dataset.sim_id)
  return _impl_.sim_id_.Release();
}
inline void Dataset::set_allocated_sim_id(std::string* value) {
  _impl_.sim_id_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.sim_id_.IsDefault()) {
          _impl_.sim_id_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:cavnue.messages.data_warehouse.management.v2.Dataset.sim_id)
}

// optional int64 cohort_id = 9 [json_name = "cohortId", (.gen_bq_schema.bigquery) = {
inline bool Dataset::has_cohort_id() const {
  bool value = (_impl_._has_bits_[0] & 0x00000020u) != 0;
  return value;
}
inline void Dataset::clear_cohort_id() {
  _impl_.cohort_id_ = ::int64_t{0};
  _impl_._has_bits_[0] &= ~0x00000020u;
}
inline ::int64_t Dataset::cohort_id() const {
  // @@protoc_insertion_point(field_get:cavnue.messages.data_warehouse.management.v2.Dataset.cohort_id)
  return _internal_cohort_id();
}
inline void Dataset::set_cohort_id(::int64_t value) {
  _internal_set_cohort_id(value);
  // @@protoc_insertion_point(field_set:cavnue.messages.data_warehouse.management.v2.Dataset.cohort_id)
}
inline ::int64_t Dataset::_internal_cohort_id() const {
  return _impl_.cohort_id_;
}
inline void Dataset::_internal_set_cohort_id(::int64_t value) {
  _impl_._has_bits_[0] |= 0x00000020u;
  _impl_.cohort_id_ = value;
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


PROTOBUF_NAMESPACE_OPEN

template <>
struct is_proto_enum<::cavnue::messages::data_warehouse::management::v2::Dataset_Type> : std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor<::cavnue::messages::data_warehouse::management::v2::Dataset_Type>() {
  return ::cavnue::messages::data_warehouse::management::v2::Dataset_Type_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_cavnue_2fmessages_2fdata_5fwarehouse_2fmanagement_2fv2_2fdatasets_2eproto_2epb_2eh
