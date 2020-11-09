// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/monitoring.proto

#include "google/api/monitoring.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_google_2fapi_2fmonitoring_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Monitoring_MonitoringDestination_google_2fapi_2fmonitoring_2eproto;
namespace google {
namespace api {
class Monitoring_MonitoringDestinationDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Monitoring_MonitoringDestination> _instance;
} _Monitoring_MonitoringDestination_default_instance_;
class MonitoringDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Monitoring> _instance;
} _Monitoring_default_instance_;
}  // namespace api
}  // namespace google
static void InitDefaultsscc_info_Monitoring_google_2fapi_2fmonitoring_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::google::api::_Monitoring_default_instance_;
    new (ptr) ::google::api::Monitoring();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::google::api::Monitoring::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Monitoring_google_2fapi_2fmonitoring_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_Monitoring_google_2fapi_2fmonitoring_2eproto}, {
      &scc_info_Monitoring_MonitoringDestination_google_2fapi_2fmonitoring_2eproto.base,}};

static void InitDefaultsscc_info_Monitoring_MonitoringDestination_google_2fapi_2fmonitoring_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::google::api::_Monitoring_MonitoringDestination_default_instance_;
    new (ptr) ::google::api::Monitoring_MonitoringDestination();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::google::api::Monitoring_MonitoringDestination::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Monitoring_MonitoringDestination_google_2fapi_2fmonitoring_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_Monitoring_MonitoringDestination_google_2fapi_2fmonitoring_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_google_2fapi_2fmonitoring_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_google_2fapi_2fmonitoring_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_google_2fapi_2fmonitoring_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_google_2fapi_2fmonitoring_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::google::api::Monitoring_MonitoringDestination, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::google::api::Monitoring_MonitoringDestination, monitored_resource_),
  PROTOBUF_FIELD_OFFSET(::google::api::Monitoring_MonitoringDestination, metrics_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::google::api::Monitoring, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::google::api::Monitoring, producer_destinations_),
  PROTOBUF_FIELD_OFFSET(::google::api::Monitoring, consumer_destinations_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::google::api::Monitoring_MonitoringDestination)},
  { 7, -1, sizeof(::google::api::Monitoring)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::google::api::_Monitoring_MonitoringDestination_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::google::api::_Monitoring_default_instance_),
};

const char descriptor_table_protodef_google_2fapi_2fmonitoring_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\033google/api/monitoring.proto\022\ngoogle.ap"
  "i\"\354\001\n\nMonitoring\022K\n\025producer_destination"
  "s\030\001 \003(\0132,.google.api.Monitoring.Monitori"
  "ngDestination\022K\n\025consumer_destinations\030\002"
  " \003(\0132,.google.api.Monitoring.MonitoringD"
  "estination\032D\n\025MonitoringDestination\022\032\n\022m"
  "onitored_resource\030\001 \001(\t\022\017\n\007metrics\030\002 \003(\t"
  "Bq\n\016com.google.apiB\017MonitoringProtoP\001ZEg"
  "oogle.golang.org/genproto/googleapis/api"
  "/serviceconfig;serviceconfig\242\002\004GAPIb\006pro"
  "to3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_google_2fapi_2fmonitoring_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_google_2fapi_2fmonitoring_2eproto_sccs[2] = {
  &scc_info_Monitoring_google_2fapi_2fmonitoring_2eproto.base,
  &scc_info_Monitoring_MonitoringDestination_google_2fapi_2fmonitoring_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_google_2fapi_2fmonitoring_2eproto_once;
static bool descriptor_table_google_2fapi_2fmonitoring_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fapi_2fmonitoring_2eproto = {
  &descriptor_table_google_2fapi_2fmonitoring_2eproto_initialized, descriptor_table_protodef_google_2fapi_2fmonitoring_2eproto, "google/api/monitoring.proto", 403,
  &descriptor_table_google_2fapi_2fmonitoring_2eproto_once, descriptor_table_google_2fapi_2fmonitoring_2eproto_sccs, descriptor_table_google_2fapi_2fmonitoring_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_google_2fapi_2fmonitoring_2eproto::offsets,
  file_level_metadata_google_2fapi_2fmonitoring_2eproto, 2, file_level_enum_descriptors_google_2fapi_2fmonitoring_2eproto, file_level_service_descriptors_google_2fapi_2fmonitoring_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_google_2fapi_2fmonitoring_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_google_2fapi_2fmonitoring_2eproto), true);
namespace google {
namespace api {

// ===================================================================

void Monitoring_MonitoringDestination::InitAsDefaultInstance() {
}
class Monitoring_MonitoringDestination::_Internal {
 public:
};

Monitoring_MonitoringDestination::Monitoring_MonitoringDestination()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.api.Monitoring.MonitoringDestination)
}
Monitoring_MonitoringDestination::Monitoring_MonitoringDestination(const Monitoring_MonitoringDestination& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      metrics_(from.metrics_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  monitored_resource_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_monitored_resource().empty()) {
    monitored_resource_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.monitored_resource_);
  }
  // @@protoc_insertion_point(copy_constructor:google.api.Monitoring.MonitoringDestination)
}

void Monitoring_MonitoringDestination::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Monitoring_MonitoringDestination_google_2fapi_2fmonitoring_2eproto.base);
  monitored_resource_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

Monitoring_MonitoringDestination::~Monitoring_MonitoringDestination() {
  // @@protoc_insertion_point(destructor:google.api.Monitoring.MonitoringDestination)
  SharedDtor();
}

void Monitoring_MonitoringDestination::SharedDtor() {
  monitored_resource_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void Monitoring_MonitoringDestination::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Monitoring_MonitoringDestination& Monitoring_MonitoringDestination::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Monitoring_MonitoringDestination_google_2fapi_2fmonitoring_2eproto.base);
  return *internal_default_instance();
}


void Monitoring_MonitoringDestination::Clear() {
// @@protoc_insertion_point(message_clear_start:google.api.Monitoring.MonitoringDestination)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  metrics_.Clear();
  monitored_resource_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

const char* Monitoring_MonitoringDestination::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string monitored_resource = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(_internal_mutable_monitored_resource(), ptr, ctx, "google.api.Monitoring.MonitoringDestination.monitored_resource");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated string metrics = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(_internal_add_metrics(), ptr, ctx, "google.api.Monitoring.MonitoringDestination.metrics");
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Monitoring_MonitoringDestination::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.api.Monitoring.MonitoringDestination)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string monitored_resource = 1;
  if (this->monitored_resource().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_monitored_resource().data(), static_cast<int>(this->_internal_monitored_resource().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.Monitoring.MonitoringDestination.monitored_resource");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_monitored_resource(), target);
  }

  // repeated string metrics = 2;
  for (int i = 0, n = this->_internal_metrics_size(); i < n; i++) {
    const auto& s = this->_internal_metrics(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.Monitoring.MonitoringDestination.metrics");
    target = stream->WriteString(2, s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.api.Monitoring.MonitoringDestination)
  return target;
}

size_t Monitoring_MonitoringDestination::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.api.Monitoring.MonitoringDestination)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string metrics = 2;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(metrics_.size());
  for (int i = 0, n = metrics_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      metrics_.Get(i));
  }

  // string monitored_resource = 1;
  if (this->monitored_resource().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_monitored_resource());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Monitoring_MonitoringDestination::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.api.Monitoring.MonitoringDestination)
  GOOGLE_DCHECK_NE(&from, this);
  const Monitoring_MonitoringDestination* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Monitoring_MonitoringDestination>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.api.Monitoring.MonitoringDestination)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.api.Monitoring.MonitoringDestination)
    MergeFrom(*source);
  }
}

void Monitoring_MonitoringDestination::MergeFrom(const Monitoring_MonitoringDestination& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.api.Monitoring.MonitoringDestination)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  metrics_.MergeFrom(from.metrics_);
  if (from.monitored_resource().size() > 0) {

    monitored_resource_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.monitored_resource_);
  }
}

void Monitoring_MonitoringDestination::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.api.Monitoring.MonitoringDestination)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Monitoring_MonitoringDestination::CopyFrom(const Monitoring_MonitoringDestination& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.api.Monitoring.MonitoringDestination)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Monitoring_MonitoringDestination::IsInitialized() const {
  return true;
}

void Monitoring_MonitoringDestination::InternalSwap(Monitoring_MonitoringDestination* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  metrics_.InternalSwap(&other->metrics_);
  monitored_resource_.Swap(&other->monitored_resource_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::PROTOBUF_NAMESPACE_ID::Metadata Monitoring_MonitoringDestination::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void Monitoring::InitAsDefaultInstance() {
}
class Monitoring::_Internal {
 public:
};

Monitoring::Monitoring()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.api.Monitoring)
}
Monitoring::Monitoring(const Monitoring& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      producer_destinations_(from.producer_destinations_),
      consumer_destinations_(from.consumer_destinations_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:google.api.Monitoring)
}

void Monitoring::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Monitoring_google_2fapi_2fmonitoring_2eproto.base);
}

Monitoring::~Monitoring() {
  // @@protoc_insertion_point(destructor:google.api.Monitoring)
  SharedDtor();
}

void Monitoring::SharedDtor() {
}

void Monitoring::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Monitoring& Monitoring::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Monitoring_google_2fapi_2fmonitoring_2eproto.base);
  return *internal_default_instance();
}


void Monitoring::Clear() {
// @@protoc_insertion_point(message_clear_start:google.api.Monitoring)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  producer_destinations_.Clear();
  consumer_destinations_.Clear();
  _internal_metadata_.Clear();
}

const char* Monitoring::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated .google.api.Monitoring.MonitoringDestination producer_destinations = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_producer_destinations(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else goto handle_unusual;
        continue;
      // repeated .google.api.Monitoring.MonitoringDestination consumer_destinations = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_consumer_destinations(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Monitoring::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.api.Monitoring)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .google.api.Monitoring.MonitoringDestination producer_destinations = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_producer_destinations_size()); i < n; i++) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(1, this->_internal_producer_destinations(i), target, stream);
  }

  // repeated .google.api.Monitoring.MonitoringDestination consumer_destinations = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_consumer_destinations_size()); i < n; i++) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(2, this->_internal_consumer_destinations(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.api.Monitoring)
  return target;
}

size_t Monitoring::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.api.Monitoring)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .google.api.Monitoring.MonitoringDestination producer_destinations = 1;
  total_size += 1UL * this->_internal_producer_destinations_size();
  for (const auto& msg : this->producer_destinations_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated .google.api.Monitoring.MonitoringDestination consumer_destinations = 2;
  total_size += 1UL * this->_internal_consumer_destinations_size();
  for (const auto& msg : this->consumer_destinations_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Monitoring::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.api.Monitoring)
  GOOGLE_DCHECK_NE(&from, this);
  const Monitoring* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Monitoring>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.api.Monitoring)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.api.Monitoring)
    MergeFrom(*source);
  }
}

void Monitoring::MergeFrom(const Monitoring& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.api.Monitoring)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  producer_destinations_.MergeFrom(from.producer_destinations_);
  consumer_destinations_.MergeFrom(from.consumer_destinations_);
}

void Monitoring::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.api.Monitoring)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Monitoring::CopyFrom(const Monitoring& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.api.Monitoring)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Monitoring::IsInitialized() const {
  return true;
}

void Monitoring::InternalSwap(Monitoring* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  producer_destinations_.InternalSwap(&other->producer_destinations_);
  consumer_destinations_.InternalSwap(&other->consumer_destinations_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Monitoring::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace api
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::google::api::Monitoring_MonitoringDestination* Arena::CreateMaybeMessage< ::google::api::Monitoring_MonitoringDestination >(Arena* arena) {
  return Arena::CreateInternal< ::google::api::Monitoring_MonitoringDestination >(arena);
}
template<> PROTOBUF_NOINLINE ::google::api::Monitoring* Arena::CreateMaybeMessage< ::google::api::Monitoring >(Arena* arena) {
  return Arena::CreateInternal< ::google::api::Monitoring >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>