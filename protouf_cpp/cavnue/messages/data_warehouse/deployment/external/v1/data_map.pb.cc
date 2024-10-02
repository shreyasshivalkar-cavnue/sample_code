// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cavnue/messages/data_warehouse/deployment/external/v1/data_map.proto

#include "cavnue/messages/data_warehouse/deployment/external/v1/data_map.pb.h"

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
namespace data_warehouse {
namespace deployment {
namespace external {
namespace v1 {
template <typename>
PROTOBUF_CONSTEXPR DataMap::DataMap(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.ids_)*/ {}
  ,/* _impl_._ids_cached_byte_size_ = */ { 0 }

  , /*decltype(_impl_.simulation_id_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_.ts_)*/nullptr
  , /*decltype(_impl_.dataset_id_)*/ ::int64_t{0}
} {}
struct DataMapDefaultTypeInternal {
  PROTOBUF_CONSTEXPR DataMapDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~DataMapDefaultTypeInternal() {}
  union {
    DataMap _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 DataMapDefaultTypeInternal _DataMap_default_instance_;
}  // namespace v1
}  // namespace external
}  // namespace deployment
}  // namespace data_warehouse
}  // namespace messages
}  // namespace cavnue
static ::_pb::Metadata file_level_metadata_cavnue_2fmessages_2fdata_5fwarehouse_2fdeployment_2fexternal_2fv1_2fdata_5fmap_2eproto[1];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_cavnue_2fmessages_2fdata_5fwarehouse_2fdeployment_2fexternal_2fv1_2fdata_5fmap_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_cavnue_2fmessages_2fdata_5fwarehouse_2fdeployment_2fexternal_2fv1_2fdata_5fmap_2eproto = nullptr;
const ::uint32_t TableStruct_cavnue_2fmessages_2fdata_5fwarehouse_2fdeployment_2fexternal_2fv1_2fdata_5fmap_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    PROTOBUF_FIELD_OFFSET(::cavnue::messages::data_warehouse::deployment::external::v1::DataMap, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::cavnue::messages::data_warehouse::deployment::external::v1::DataMap, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::cavnue::messages::data_warehouse::deployment::external::v1::DataMap, _impl_.ts_),
    PROTOBUF_FIELD_OFFSET(::cavnue::messages::data_warehouse::deployment::external::v1::DataMap, _impl_.simulation_id_),
    PROTOBUF_FIELD_OFFSET(::cavnue::messages::data_warehouse::deployment::external::v1::DataMap, _impl_.dataset_id_),
    PROTOBUF_FIELD_OFFSET(::cavnue::messages::data_warehouse::deployment::external::v1::DataMap, _impl_.ids_),
    0,
    ~0u,
    ~0u,
    ~0u,
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, 12, -1, sizeof(::cavnue::messages::data_warehouse::deployment::external::v1::DataMap)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::cavnue::messages::data_warehouse::deployment::external::v1::_DataMap_default_instance_._instance,
};
const char descriptor_table_protodef_cavnue_2fmessages_2fdata_5fwarehouse_2fdeployment_2fexternal_2fv1_2fdata_5fmap_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\nDcavnue/messages/data_warehouse/deploym"
    "ent/external/v1/data_map.proto\0225cavnue.m"
    "essages.data_warehouse.deployment.extern"
    "al.v1\032\'cavnue/third_party/bq/v1/bq_field"
    ".proto\032\'cavnue/third_party/bq/v1/bq_tabl"
    "e.proto\032\037google/protobuf/timestamp.proto"
    "\"\260\001\n\007DataMap\022\?\n\002ts\030\001 \001(\0132\032.google.protob"
    "uf.TimestampB\023\212\371+\017\010\001\022\tTIMESTAMP8\001R\002ts\022#\n"
    "\rsimulation_id\030\002 \001(\tR\014simulationId\022\035\n\nda"
    "taset_id\030\003 \001(\003R\tdatasetId\022\020\n\003ids\030\004 \003(\003R\003"
    "ids:\016\202\371+\n\n\010DataMapsb\006proto3"
};
static const ::_pbi::DescriptorTable* const descriptor_table_cavnue_2fmessages_2fdata_5fwarehouse_2fdeployment_2fexternal_2fv1_2fdata_5fmap_2eproto_deps[3] =
    {
        &::descriptor_table_cavnue_2fthird_5fparty_2fbq_2fv1_2fbq_5ffield_2eproto,
        &::descriptor_table_cavnue_2fthird_5fparty_2fbq_2fv1_2fbq_5ftable_2eproto,
        &::descriptor_table_google_2fprotobuf_2ftimestamp_2eproto,
};
static ::absl::once_flag descriptor_table_cavnue_2fmessages_2fdata_5fwarehouse_2fdeployment_2fexternal_2fv1_2fdata_5fmap_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_cavnue_2fmessages_2fdata_5fwarehouse_2fdeployment_2fexternal_2fv1_2fdata_5fmap_2eproto = {
    false,
    false,
    427,
    descriptor_table_protodef_cavnue_2fmessages_2fdata_5fwarehouse_2fdeployment_2fexternal_2fv1_2fdata_5fmap_2eproto,
    "cavnue/messages/data_warehouse/deployment/external/v1/data_map.proto",
    &descriptor_table_cavnue_2fmessages_2fdata_5fwarehouse_2fdeployment_2fexternal_2fv1_2fdata_5fmap_2eproto_once,
    descriptor_table_cavnue_2fmessages_2fdata_5fwarehouse_2fdeployment_2fexternal_2fv1_2fdata_5fmap_2eproto_deps,
    3,
    1,
    schemas,
    file_default_instances,
    TableStruct_cavnue_2fmessages_2fdata_5fwarehouse_2fdeployment_2fexternal_2fv1_2fdata_5fmap_2eproto::offsets,
    file_level_metadata_cavnue_2fmessages_2fdata_5fwarehouse_2fdeployment_2fexternal_2fv1_2fdata_5fmap_2eproto,
    file_level_enum_descriptors_cavnue_2fmessages_2fdata_5fwarehouse_2fdeployment_2fexternal_2fv1_2fdata_5fmap_2eproto,
    file_level_service_descriptors_cavnue_2fmessages_2fdata_5fwarehouse_2fdeployment_2fexternal_2fv1_2fdata_5fmap_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_cavnue_2fmessages_2fdata_5fwarehouse_2fdeployment_2fexternal_2fv1_2fdata_5fmap_2eproto_getter() {
  return &descriptor_table_cavnue_2fmessages_2fdata_5fwarehouse_2fdeployment_2fexternal_2fv1_2fdata_5fmap_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_cavnue_2fmessages_2fdata_5fwarehouse_2fdeployment_2fexternal_2fv1_2fdata_5fmap_2eproto(&descriptor_table_cavnue_2fmessages_2fdata_5fwarehouse_2fdeployment_2fexternal_2fv1_2fdata_5fmap_2eproto);
namespace cavnue {
namespace messages {
namespace data_warehouse {
namespace deployment {
namespace external {
namespace v1 {
// ===================================================================

class DataMap::_Internal {
 public:
  using HasBits = decltype(std::declval<DataMap>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(DataMap, _impl_._has_bits_);
  static const ::PROTOBUF_NAMESPACE_ID::Timestamp& ts(const DataMap* msg);
  static void set_has_ts(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

const ::PROTOBUF_NAMESPACE_ID::Timestamp&
DataMap::_Internal::ts(const DataMap* msg) {
  return *msg->_impl_.ts_;
}
void DataMap::clear_ts() {
  if (_impl_.ts_ != nullptr) _impl_.ts_->Clear();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
DataMap::DataMap(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:cavnue.messages.data_warehouse.deployment.external.v1.DataMap)
}
DataMap::DataMap(const DataMap& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  DataMap* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.ids_) { from._impl_.ids_ }
    ,/* _impl_._ids_cached_byte_size_ = */ { 0 }

    , decltype(_impl_.simulation_id_) {}

    , decltype(_impl_.ts_){nullptr}
    , decltype(_impl_.dataset_id_) {}
  };

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.simulation_id_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.simulation_id_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_simulation_id().empty()) {
    _this->_impl_.simulation_id_.Set(from._internal_simulation_id(), _this->GetArenaForAllocation());
  }
  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_impl_.ts_ = new ::PROTOBUF_NAMESPACE_ID::Timestamp(*from._impl_.ts_);
  }
  _this->_impl_.dataset_id_ = from._impl_.dataset_id_;
  // @@protoc_insertion_point(copy_constructor:cavnue.messages.data_warehouse.deployment.external.v1.DataMap)
}

inline void DataMap::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.ids_) { arena }
    ,/* _impl_._ids_cached_byte_size_ = */ { 0 }

    , decltype(_impl_.simulation_id_) {}

    , decltype(_impl_.ts_){nullptr}
    , decltype(_impl_.dataset_id_) { ::int64_t{0} }

  };
  _impl_.simulation_id_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.simulation_id_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

DataMap::~DataMap() {
  // @@protoc_insertion_point(destructor:cavnue.messages.data_warehouse.deployment.external.v1.DataMap)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void DataMap::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.ids_.~RepeatedField();
  _impl_.simulation_id_.Destroy();
  if (this != internal_default_instance()) delete _impl_.ts_;
}

void DataMap::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void DataMap::Clear() {
// @@protoc_insertion_point(message_clear_start:cavnue.messages.data_warehouse.deployment.external.v1.DataMap)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_mutable_ids()->Clear();
  _impl_.simulation_id_.ClearToEmpty();
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    ABSL_DCHECK(_impl_.ts_ != nullptr);
    _impl_.ts_->Clear();
  }
  _impl_.dataset_id_ = ::int64_t{0};
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* DataMap::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .google.protobuf.Timestamp ts = 1 [json_name = "ts", (.gen_bq_schema.bigquery) = {
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_ts(), ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // string simulation_id = 2 [json_name = "simulationId"];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_simulation_id();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "cavnue.messages.data_warehouse.deployment.external.v1.DataMap.simulation_id"));
        } else {
          goto handle_unusual;
        }
        continue;
      // int64 dataset_id = 3 [json_name = "datasetId"];
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 24)) {
          _impl_.dataset_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // repeated int64 ids = 4 [json_name = "ids"];
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 34)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedInt64Parser(_internal_mutable_ids(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::uint8_t>(tag) == 32) {
          _internal_add_ids(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr));
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

::uint8_t* DataMap::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:cavnue.messages.data_warehouse.deployment.external.v1.DataMap)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // .google.protobuf.Timestamp ts = 1 [json_name = "ts", (.gen_bq_schema.bigquery) = {
  if (cached_has_bits & 0x00000001u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, _Internal::ts(this),
        _Internal::ts(this).GetCachedSize(), target, stream);
  }

  // string simulation_id = 2 [json_name = "simulationId"];
  if (!this->_internal_simulation_id().empty()) {
    const std::string& _s = this->_internal_simulation_id();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE, "cavnue.messages.data_warehouse.deployment.external.v1.DataMap.simulation_id");
    target = stream->WriteStringMaybeAliased(2, _s, target);
  }

  // int64 dataset_id = 3 [json_name = "datasetId"];
  if (this->_internal_dataset_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(
        3, this->_internal_dataset_id(), target);
  }

  // repeated int64 ids = 4 [json_name = "ids"];
  {
    int byte_size = _impl_._ids_cached_byte_size_.Get();
    if (byte_size > 0) {
      target = stream->WriteInt64Packed(4, _internal_ids(),
                                                 byte_size, target);
    }
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:cavnue.messages.data_warehouse.deployment.external.v1.DataMap)
  return target;
}

::size_t DataMap::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:cavnue.messages.data_warehouse.deployment.external.v1.DataMap)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated int64 ids = 4 [json_name = "ids"];
  {
    std::size_t data_size = ::_pbi::WireFormatLite::Int64Size(
        this->_internal_ids())
    ;
    _impl_._ids_cached_byte_size_.Set(::_pbi::ToCachedSize(data_size));
    std::size_t tag_size = data_size == 0
        ? 0
        : 1 + ::_pbi::WireFormatLite::Int32Size(
                            static_cast<int32_t>(data_size))
    ;
    total_size += tag_size + data_size;
  }

  // string simulation_id = 2 [json_name = "simulationId"];
  if (!this->_internal_simulation_id().empty()) {
    total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                    this->_internal_simulation_id());
  }

  // .google.protobuf.Timestamp ts = 1 [json_name = "ts", (.gen_bq_schema.bigquery) = {
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.ts_);
  }

  // int64 dataset_id = 3 [json_name = "datasetId"];
  if (this->_internal_dataset_id() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(
        this->_internal_dataset_id());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData DataMap::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    DataMap::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*DataMap::GetClassData() const { return &_class_data_; }


void DataMap::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<DataMap*>(&to_msg);
  auto& from = static_cast<const DataMap&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:cavnue.messages.data_warehouse.deployment.external.v1.DataMap)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.ids_.MergeFrom(from._impl_.ids_);
  if (!from._internal_simulation_id().empty()) {
    _this->_internal_set_simulation_id(from._internal_simulation_id());
  }
  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_internal_mutable_ts()->::PROTOBUF_NAMESPACE_ID::Timestamp::MergeFrom(
        from._internal_ts());
  }
  if (from._internal_dataset_id() != 0) {
    _this->_internal_set_dataset_id(from._internal_dataset_id());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void DataMap::CopyFrom(const DataMap& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cavnue.messages.data_warehouse.deployment.external.v1.DataMap)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DataMap::IsInitialized() const {
  return true;
}

void DataMap::InternalSwap(DataMap* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  _impl_.ids_.InternalSwap(&other->_impl_.ids_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.simulation_id_, lhs_arena,
                                       &other->_impl_.simulation_id_, rhs_arena);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(DataMap, _impl_.dataset_id_)
      + sizeof(DataMap::_impl_.dataset_id_)
      - PROTOBUF_FIELD_OFFSET(DataMap, _impl_.ts_)>(
          reinterpret_cast<char*>(&_impl_.ts_),
          reinterpret_cast<char*>(&other->_impl_.ts_));
}

::PROTOBUF_NAMESPACE_ID::Metadata DataMap::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_cavnue_2fmessages_2fdata_5fwarehouse_2fdeployment_2fexternal_2fv1_2fdata_5fmap_2eproto_getter, &descriptor_table_cavnue_2fmessages_2fdata_5fwarehouse_2fdeployment_2fexternal_2fv1_2fdata_5fmap_2eproto_once,
      file_level_metadata_cavnue_2fmessages_2fdata_5fwarehouse_2fdeployment_2fexternal_2fv1_2fdata_5fmap_2eproto[0]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace external
}  // namespace deployment
}  // namespace data_warehouse
}  // namespace messages
}  // namespace cavnue
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::cavnue::messages::data_warehouse::deployment::external::v1::DataMap*
Arena::CreateMaybeMessage< ::cavnue::messages::data_warehouse::deployment::external::v1::DataMap >(Arena* arena) {
  return Arena::CreateMessageInternal< ::cavnue::messages::data_warehouse::deployment::external::v1::DataMap >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
