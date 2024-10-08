// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cavnue/third_party/bq/v1/bq_field.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_cavnue_2fthird_5fparty_2fbq_2fv1_2fbq_5ffield_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_cavnue_2fthird_5fparty_2fbq_2fv1_2fbq_5ffield_2eproto_2epb_2eh

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
#include "google/protobuf/descriptor.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_cavnue_2fthird_5fparty_2fbq_2fv1_2fbq_5ffield_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_cavnue_2fthird_5fparty_2fbq_2fv1_2fbq_5ffield_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_cavnue_2fthird_5fparty_2fbq_2fv1_2fbq_5ffield_2eproto;
namespace gen_bq_schema {
class BigQueryFieldOptions;
struct BigQueryFieldOptionsDefaultTypeInternal;
extern BigQueryFieldOptionsDefaultTypeInternal _BigQueryFieldOptions_default_instance_;
}  // namespace gen_bq_schema
PROTOBUF_NAMESPACE_OPEN
template <>
::gen_bq_schema::BigQueryFieldOptions* Arena::CreateMaybeMessage<::gen_bq_schema::BigQueryFieldOptions>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace gen_bq_schema {

// ===================================================================


// -------------------------------------------------------------------

class BigQueryFieldOptions final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gen_bq_schema.BigQueryFieldOptions) */ {
 public:
  inline BigQueryFieldOptions() : BigQueryFieldOptions(nullptr) {}
  ~BigQueryFieldOptions() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR BigQueryFieldOptions(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  BigQueryFieldOptions(const BigQueryFieldOptions& from);
  BigQueryFieldOptions(BigQueryFieldOptions&& from) noexcept
    : BigQueryFieldOptions() {
    *this = ::std::move(from);
  }

  inline BigQueryFieldOptions& operator=(const BigQueryFieldOptions& from) {
    CopyFrom(from);
    return *this;
  }
  inline BigQueryFieldOptions& operator=(BigQueryFieldOptions&& from) noexcept {
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
  static const BigQueryFieldOptions& default_instance() {
    return *internal_default_instance();
  }
  static inline const BigQueryFieldOptions* internal_default_instance() {
    return reinterpret_cast<const BigQueryFieldOptions*>(
               &_BigQueryFieldOptions_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(BigQueryFieldOptions& a, BigQueryFieldOptions& b) {
    a.Swap(&b);
  }
  inline void Swap(BigQueryFieldOptions* other) {
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
  void UnsafeArenaSwap(BigQueryFieldOptions* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  BigQueryFieldOptions* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<BigQueryFieldOptions>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const BigQueryFieldOptions& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const BigQueryFieldOptions& from) {
    BigQueryFieldOptions::MergeImpl(*this, from);
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
  void InternalSwap(BigQueryFieldOptions* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "gen_bq_schema.BigQueryFieldOptions";
  }
  protected:
  explicit BigQueryFieldOptions(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTypeOverrideFieldNumber = 2,
    kDescriptionFieldNumber = 4,
    kNameFieldNumber = 5,
    kPolicyTagsFieldNumber = 6,
    kRequireFieldNumber = 1,
    kIgnoreFieldNumber = 3,
    kPartitionFieldNumber = 7,
    kClusterFieldNumber = 8,
  };
  // string type_override = 2 [json_name = "typeOverride"];
  void clear_type_override() ;
  const std::string& type_override() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_type_override(Arg_&& arg, Args_... args);
  std::string* mutable_type_override();
  PROTOBUF_NODISCARD std::string* release_type_override();
  void set_allocated_type_override(std::string* ptr);

  private:
  const std::string& _internal_type_override() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_type_override(
      const std::string& value);
  std::string* _internal_mutable_type_override();

  public:
  // string description = 4 [json_name = "description"];
  void clear_description() ;
  const std::string& description() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_description(Arg_&& arg, Args_... args);
  std::string* mutable_description();
  PROTOBUF_NODISCARD std::string* release_description();
  void set_allocated_description(std::string* ptr);

  private:
  const std::string& _internal_description() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_description(
      const std::string& value);
  std::string* _internal_mutable_description();

  public:
  // string name = 5 [json_name = "name"];
  void clear_name() ;
  const std::string& name() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_name(Arg_&& arg, Args_... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* ptr);

  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(
      const std::string& value);
  std::string* _internal_mutable_name();

  public:
  // string policy_tags = 6 [json_name = "policyTags"];
  void clear_policy_tags() ;
  const std::string& policy_tags() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_policy_tags(Arg_&& arg, Args_... args);
  std::string* mutable_policy_tags();
  PROTOBUF_NODISCARD std::string* release_policy_tags();
  void set_allocated_policy_tags(std::string* ptr);

  private:
  const std::string& _internal_policy_tags() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_policy_tags(
      const std::string& value);
  std::string* _internal_mutable_policy_tags();

  public:
  // bool require = 1 [json_name = "require"];
  void clear_require() ;
  bool require() const;
  void set_require(bool value);

  private:
  bool _internal_require() const;
  void _internal_set_require(bool value);

  public:
  // bool ignore = 3 [json_name = "ignore"];
  void clear_ignore() ;
  bool ignore() const;
  void set_ignore(bool value);

  private:
  bool _internal_ignore() const;
  void _internal_set_ignore(bool value);

  public:
  // bool partition = 7 [json_name = "partition"];
  void clear_partition() ;
  bool partition() const;
  void set_partition(bool value);

  private:
  bool _internal_partition() const;
  void _internal_set_partition(bool value);

  public:
  // bool cluster = 8 [json_name = "cluster"];
  void clear_cluster() ;
  bool cluster() const;
  void set_cluster(bool value);

  private:
  bool _internal_cluster() const;
  void _internal_set_cluster(bool value);

  public:
  // @@protoc_insertion_point(class_scope:gen_bq_schema.BigQueryFieldOptions)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr type_override_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr description_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr policy_tags_;
    bool require_;
    bool ignore_;
    bool partition_;
    bool cluster_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_cavnue_2fthird_5fparty_2fbq_2fv1_2fbq_5ffield_2eproto;
};

// ===================================================================



static const int kBigqueryFieldNumber = 90001;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::PROTOBUF_NAMESPACE_ID::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::MessageTypeTraits< ::gen_bq_schema::BigQueryFieldOptions >, 11, false >
  bigquery;

// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// BigQueryFieldOptions

// bool require = 1 [json_name = "require"];
inline void BigQueryFieldOptions::clear_require() {
  _impl_.require_ = false;
}
inline bool BigQueryFieldOptions::require() const {
  // @@protoc_insertion_point(field_get:gen_bq_schema.BigQueryFieldOptions.require)
  return _internal_require();
}
inline void BigQueryFieldOptions::set_require(bool value) {
  _internal_set_require(value);
  // @@protoc_insertion_point(field_set:gen_bq_schema.BigQueryFieldOptions.require)
}
inline bool BigQueryFieldOptions::_internal_require() const {
  return _impl_.require_;
}
inline void BigQueryFieldOptions::_internal_set_require(bool value) {
  ;
  _impl_.require_ = value;
}

// string type_override = 2 [json_name = "typeOverride"];
inline void BigQueryFieldOptions::clear_type_override() {
  _impl_.type_override_.ClearToEmpty();
}
inline const std::string& BigQueryFieldOptions::type_override() const {
  // @@protoc_insertion_point(field_get:gen_bq_schema.BigQueryFieldOptions.type_override)
  return _internal_type_override();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void BigQueryFieldOptions::set_type_override(Arg_&& arg,
                                                     Args_... args) {
  ;
  _impl_.type_override_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:gen_bq_schema.BigQueryFieldOptions.type_override)
}
inline std::string* BigQueryFieldOptions::mutable_type_override() {
  std::string* _s = _internal_mutable_type_override();
  // @@protoc_insertion_point(field_mutable:gen_bq_schema.BigQueryFieldOptions.type_override)
  return _s;
}
inline const std::string& BigQueryFieldOptions::_internal_type_override() const {
  return _impl_.type_override_.Get();
}
inline void BigQueryFieldOptions::_internal_set_type_override(const std::string& value) {
  ;


  _impl_.type_override_.Set(value, GetArenaForAllocation());
}
inline std::string* BigQueryFieldOptions::_internal_mutable_type_override() {
  ;
  return _impl_.type_override_.Mutable( GetArenaForAllocation());
}
inline std::string* BigQueryFieldOptions::release_type_override() {
  // @@protoc_insertion_point(field_release:gen_bq_schema.BigQueryFieldOptions.type_override)
  return _impl_.type_override_.Release();
}
inline void BigQueryFieldOptions::set_allocated_type_override(std::string* value) {
  _impl_.type_override_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.type_override_.IsDefault()) {
          _impl_.type_override_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:gen_bq_schema.BigQueryFieldOptions.type_override)
}

// bool ignore = 3 [json_name = "ignore"];
inline void BigQueryFieldOptions::clear_ignore() {
  _impl_.ignore_ = false;
}
inline bool BigQueryFieldOptions::ignore() const {
  // @@protoc_insertion_point(field_get:gen_bq_schema.BigQueryFieldOptions.ignore)
  return _internal_ignore();
}
inline void BigQueryFieldOptions::set_ignore(bool value) {
  _internal_set_ignore(value);
  // @@protoc_insertion_point(field_set:gen_bq_schema.BigQueryFieldOptions.ignore)
}
inline bool BigQueryFieldOptions::_internal_ignore() const {
  return _impl_.ignore_;
}
inline void BigQueryFieldOptions::_internal_set_ignore(bool value) {
  ;
  _impl_.ignore_ = value;
}

// string description = 4 [json_name = "description"];
inline void BigQueryFieldOptions::clear_description() {
  _impl_.description_.ClearToEmpty();
}
inline const std::string& BigQueryFieldOptions::description() const {
  // @@protoc_insertion_point(field_get:gen_bq_schema.BigQueryFieldOptions.description)
  return _internal_description();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void BigQueryFieldOptions::set_description(Arg_&& arg,
                                                     Args_... args) {
  ;
  _impl_.description_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:gen_bq_schema.BigQueryFieldOptions.description)
}
inline std::string* BigQueryFieldOptions::mutable_description() {
  std::string* _s = _internal_mutable_description();
  // @@protoc_insertion_point(field_mutable:gen_bq_schema.BigQueryFieldOptions.description)
  return _s;
}
inline const std::string& BigQueryFieldOptions::_internal_description() const {
  return _impl_.description_.Get();
}
inline void BigQueryFieldOptions::_internal_set_description(const std::string& value) {
  ;


  _impl_.description_.Set(value, GetArenaForAllocation());
}
inline std::string* BigQueryFieldOptions::_internal_mutable_description() {
  ;
  return _impl_.description_.Mutable( GetArenaForAllocation());
}
inline std::string* BigQueryFieldOptions::release_description() {
  // @@protoc_insertion_point(field_release:gen_bq_schema.BigQueryFieldOptions.description)
  return _impl_.description_.Release();
}
inline void BigQueryFieldOptions::set_allocated_description(std::string* value) {
  _impl_.description_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.description_.IsDefault()) {
          _impl_.description_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:gen_bq_schema.BigQueryFieldOptions.description)
}

// string name = 5 [json_name = "name"];
inline void BigQueryFieldOptions::clear_name() {
  _impl_.name_.ClearToEmpty();
}
inline const std::string& BigQueryFieldOptions::name() const {
  // @@protoc_insertion_point(field_get:gen_bq_schema.BigQueryFieldOptions.name)
  return _internal_name();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void BigQueryFieldOptions::set_name(Arg_&& arg,
                                                     Args_... args) {
  ;
  _impl_.name_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:gen_bq_schema.BigQueryFieldOptions.name)
}
inline std::string* BigQueryFieldOptions::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:gen_bq_schema.BigQueryFieldOptions.name)
  return _s;
}
inline const std::string& BigQueryFieldOptions::_internal_name() const {
  return _impl_.name_.Get();
}
inline void BigQueryFieldOptions::_internal_set_name(const std::string& value) {
  ;


  _impl_.name_.Set(value, GetArenaForAllocation());
}
inline std::string* BigQueryFieldOptions::_internal_mutable_name() {
  ;
  return _impl_.name_.Mutable( GetArenaForAllocation());
}
inline std::string* BigQueryFieldOptions::release_name() {
  // @@protoc_insertion_point(field_release:gen_bq_schema.BigQueryFieldOptions.name)
  return _impl_.name_.Release();
}
inline void BigQueryFieldOptions::set_allocated_name(std::string* value) {
  _impl_.name_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.name_.IsDefault()) {
          _impl_.name_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:gen_bq_schema.BigQueryFieldOptions.name)
}

// string policy_tags = 6 [json_name = "policyTags"];
inline void BigQueryFieldOptions::clear_policy_tags() {
  _impl_.policy_tags_.ClearToEmpty();
}
inline const std::string& BigQueryFieldOptions::policy_tags() const {
  // @@protoc_insertion_point(field_get:gen_bq_schema.BigQueryFieldOptions.policy_tags)
  return _internal_policy_tags();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void BigQueryFieldOptions::set_policy_tags(Arg_&& arg,
                                                     Args_... args) {
  ;
  _impl_.policy_tags_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:gen_bq_schema.BigQueryFieldOptions.policy_tags)
}
inline std::string* BigQueryFieldOptions::mutable_policy_tags() {
  std::string* _s = _internal_mutable_policy_tags();
  // @@protoc_insertion_point(field_mutable:gen_bq_schema.BigQueryFieldOptions.policy_tags)
  return _s;
}
inline const std::string& BigQueryFieldOptions::_internal_policy_tags() const {
  return _impl_.policy_tags_.Get();
}
inline void BigQueryFieldOptions::_internal_set_policy_tags(const std::string& value) {
  ;


  _impl_.policy_tags_.Set(value, GetArenaForAllocation());
}
inline std::string* BigQueryFieldOptions::_internal_mutable_policy_tags() {
  ;
  return _impl_.policy_tags_.Mutable( GetArenaForAllocation());
}
inline std::string* BigQueryFieldOptions::release_policy_tags() {
  // @@protoc_insertion_point(field_release:gen_bq_schema.BigQueryFieldOptions.policy_tags)
  return _impl_.policy_tags_.Release();
}
inline void BigQueryFieldOptions::set_allocated_policy_tags(std::string* value) {
  _impl_.policy_tags_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.policy_tags_.IsDefault()) {
          _impl_.policy_tags_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:gen_bq_schema.BigQueryFieldOptions.policy_tags)
}

// bool partition = 7 [json_name = "partition"];
inline void BigQueryFieldOptions::clear_partition() {
  _impl_.partition_ = false;
}
inline bool BigQueryFieldOptions::partition() const {
  // @@protoc_insertion_point(field_get:gen_bq_schema.BigQueryFieldOptions.partition)
  return _internal_partition();
}
inline void BigQueryFieldOptions::set_partition(bool value) {
  _internal_set_partition(value);
  // @@protoc_insertion_point(field_set:gen_bq_schema.BigQueryFieldOptions.partition)
}
inline bool BigQueryFieldOptions::_internal_partition() const {
  return _impl_.partition_;
}
inline void BigQueryFieldOptions::_internal_set_partition(bool value) {
  ;
  _impl_.partition_ = value;
}

// bool cluster = 8 [json_name = "cluster"];
inline void BigQueryFieldOptions::clear_cluster() {
  _impl_.cluster_ = false;
}
inline bool BigQueryFieldOptions::cluster() const {
  // @@protoc_insertion_point(field_get:gen_bq_schema.BigQueryFieldOptions.cluster)
  return _internal_cluster();
}
inline void BigQueryFieldOptions::set_cluster(bool value) {
  _internal_set_cluster(value);
  // @@protoc_insertion_point(field_set:gen_bq_schema.BigQueryFieldOptions.cluster)
}
inline bool BigQueryFieldOptions::_internal_cluster() const {
  return _impl_.cluster_;
}
inline void BigQueryFieldOptions::_internal_set_cluster(bool value) {
  ;
  _impl_.cluster_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace gen_bq_schema


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_cavnue_2fthird_5fparty_2fbq_2fv1_2fbq_5ffield_2eproto_2epb_2eh
