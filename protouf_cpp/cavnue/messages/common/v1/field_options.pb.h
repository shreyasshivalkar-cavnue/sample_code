// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cavnue/messages/common/v1/field_options.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_cavnue_2fmessages_2fcommon_2fv1_2ffield_5foptions_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_cavnue_2fmessages_2fcommon_2fv1_2ffield_5foptions_2eproto_2epb_2eh

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
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/generated_enum_reflection.h"
#include "google/protobuf/descriptor.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_cavnue_2fmessages_2fcommon_2fv1_2ffield_5foptions_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_cavnue_2fmessages_2fcommon_2fv1_2ffield_5foptions_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_cavnue_2fmessages_2fcommon_2fv1_2ffield_5foptions_2eproto;
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

namespace cavnue {
namespace messages {
namespace common {
namespace v1 {
enum Units : int {
  UNITS_UNSPECIFIED = 0,
  UNITS_METERS_PER_SECOND = 1,
  UNITS_METERS_PER_SECOND_SQUARED = 2,
  UNITS_KILOMETERS_PER_HOUR = 3,
  UNITS_PIXELS = 4,
  UNITS_METERS = 5,
  UNITS_SECONDS = 7,
  UNITS_MILLISECONDS = 8,
  UNITS_RADIANS = 9,
  UNITS_DEGREES = 10,
  UNITS_DECIBELS = 11,
  UNITS_MILLIMETERS_PER_HOUR = 12,
  UNITS_CELSIUS = 13,
  UNITS_DEGREES_PER_SECOND = 14,
  UNITS_VEHICLES_PER_METER_PER_SECOND = 15,
  UNITS_VEHICLES_PER_METER = 16,
  Units_INT_MIN_SENTINEL_DO_NOT_USE_ =
      std::numeric_limits<::int32_t>::min(),
  Units_INT_MAX_SENTINEL_DO_NOT_USE_ =
      std::numeric_limits<::int32_t>::max(),
};

bool Units_IsValid(int value);
constexpr Units Units_MIN = static_cast<Units>(0);
constexpr Units Units_MAX = static_cast<Units>(16);
constexpr int Units_ARRAYSIZE = 16 + 1;
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
Units_descriptor();
template <typename T>
const std::string& Units_Name(T value) {
  static_assert(std::is_same<T, Units>::value ||
                    std::is_integral<T>::value,
                "Incorrect type passed to Units_Name().");
  return Units_Name(static_cast<Units>(value));
}
template <>
inline const std::string& Units_Name(Units value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfDenseEnum<Units_descriptor,
                                                 0, 16>(
      static_cast<int>(value));
}
inline bool Units_Parse(absl::string_view name, Units* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Units>(
      Units_descriptor(), name, value);
}
enum CRS : int {
  CRS_UNSPECIFIED = 0,
  CRS_WGS84 = 1,
  CRS_UTM = 2,
  CRS_ENU = 3,
  CRS_NED = 4,
  CRS_EGO = 5,
  CRS_INT_MIN_SENTINEL_DO_NOT_USE_ =
      std::numeric_limits<::int32_t>::min(),
  CRS_INT_MAX_SENTINEL_DO_NOT_USE_ =
      std::numeric_limits<::int32_t>::max(),
};

bool CRS_IsValid(int value);
constexpr CRS CRS_MIN = static_cast<CRS>(0);
constexpr CRS CRS_MAX = static_cast<CRS>(5);
constexpr int CRS_ARRAYSIZE = 5 + 1;
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
CRS_descriptor();
template <typename T>
const std::string& CRS_Name(T value) {
  static_assert(std::is_same<T, CRS>::value ||
                    std::is_integral<T>::value,
                "Incorrect type passed to CRS_Name().");
  return CRS_Name(static_cast<CRS>(value));
}
template <>
inline const std::string& CRS_Name(CRS value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfDenseEnum<CRS_descriptor,
                                                 0, 5>(
      static_cast<int>(value));
}
inline bool CRS_Parse(absl::string_view name, CRS* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<CRS>(
      CRS_descriptor(), name, value);
}

// ===================================================================



// ===================================================================



static const int kUnitsFieldNumber = 10001;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::PROTOBUF_NAMESPACE_ID::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::EnumTypeTraits< ::cavnue::messages::common::v1::Units, ::cavnue::messages::common::v1::Units_IsValid>, 14, false >
  units;
static const int kCrsFieldNumber = 10002;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::PROTOBUF_NAMESPACE_ID::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::EnumTypeTraits< ::cavnue::messages::common::v1::CRS, ::cavnue::messages::common::v1::CRS_IsValid>, 14, false >
  crs;
static const int kRowsFieldNumber = 20001;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::PROTOBUF_NAMESPACE_ID::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< ::uint32_t >, 13, false >
  rows;
static const int kColsFieldNumber = 20002;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::PROTOBUF_NAMESPACE_ID::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< ::uint32_t >, 13, false >
  cols;
static const int kAutogeneratedFieldNumber = 50001;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::PROTOBUF_NAMESPACE_ID::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  autogenerated;
static const int kDerivationFieldNumber = 50002;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::PROTOBUF_NAMESPACE_ID::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::RepeatedStringTypeTraits, 9, false >
  derivation;
static const int kPrimaryKeyFieldNumber = 50003;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::PROTOBUF_NAMESPACE_ID::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  primary_key;

// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace common
}  // namespace messages
}  // namespace cavnue


PROTOBUF_NAMESPACE_OPEN

template <>
struct is_proto_enum<::cavnue::messages::common::v1::Units> : std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor<::cavnue::messages::common::v1::Units>() {
  return ::cavnue::messages::common::v1::Units_descriptor();
}
template <>
struct is_proto_enum<::cavnue::messages::common::v1::CRS> : std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor<::cavnue::messages::common::v1::CRS>() {
  return ::cavnue::messages::common::v1::CRS_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_cavnue_2fmessages_2fcommon_2fv1_2ffield_5foptions_2eproto_2epb_2eh
