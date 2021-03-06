// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: redis.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "redis.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace neb {

namespace {

const ::google::protobuf::Descriptor* RedisReply_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RedisReply_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* E_REDIS_ERR_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* E_REDIS_REPLY_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_redis_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_redis_2eproto() {
  protobuf_AddDesc_redis_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "redis.proto");
  GOOGLE_CHECK(file != NULL);
  RedisReply_descriptor_ = file->message_type(0);
  static const int RedisReply_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RedisReply, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RedisReply, integer_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RedisReply, str_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RedisReply, element_),
  };
  RedisReply_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      RedisReply_descriptor_,
      RedisReply::default_instance_,
      RedisReply_offsets_,
      -1,
      -1,
      -1,
      sizeof(RedisReply),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RedisReply, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RedisReply, _is_default_instance_));
  E_REDIS_ERR_descriptor_ = file->enum_type(0);
  E_REDIS_REPLY_descriptor_ = file->enum_type(1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_redis_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      RedisReply_descriptor_, &RedisReply::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_redis_2eproto() {
  delete RedisReply::default_instance_;
  delete RedisReply_reflection_;
}

void protobuf_AddDesc_redis_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_redis_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\013redis.proto\022\003neb\"Z\n\nRedisReply\022\014\n\004type"
    "\030\001 \001(\005\022\017\n\007integer\030\002 \001(\003\022\013\n\003str\030\003 \001(\014\022 \n\007"
    "element\030\004 \003(\0132\017.neb.RedisReply*\230\001\n\013E_RED"
    "IS_ERR\022\014\n\010REDIS_OK\020\000\022\020\n\014REDIS_ERR_IO\020\001\022\023"
    "\n\017REDIS_ERR_OTHER\020\002\022\021\n\rREDIS_ERR_EOF\020\003\022\026"
    "\n\022REDIS_ERR_PROTOCOL\020\004\022\021\n\rREDIS_ERR_OOM\020"
    "\005\022\026\n\tREDIS_ERR\020\377\377\377\377\377\377\377\377\377\001*\265\001\n\rE_REDIS_RE"
    "PLY\022\030\n\024REDIS_REPLY_UNDEFINE\020\000\022\026\n\022REDIS_R"
    "EPLY_STRING\020\001\022\025\n\021REDIS_REPLY_ARRAY\020\002\022\027\n\023"
    "REDIS_REPLY_INTEGER\020\003\022\023\n\017REDIS_REPLY_NIL"
    "\020\004\022\026\n\022REDIS_REPLY_STATUS\020\005\022\025\n\021REDIS_REPL"
    "Y_ERROR\020\006b\006proto3", 457);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "redis.proto", &protobuf_RegisterTypes);
  RedisReply::default_instance_ = new RedisReply();
  RedisReply::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_redis_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_redis_2eproto {
  StaticDescriptorInitializer_redis_2eproto() {
    protobuf_AddDesc_redis_2eproto();
  }
} static_descriptor_initializer_redis_2eproto_;
const ::google::protobuf::EnumDescriptor* E_REDIS_ERR_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return E_REDIS_ERR_descriptor_;
}
bool E_REDIS_ERR_IsValid(int value) {
  switch(value) {
    case -1:
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* E_REDIS_REPLY_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return E_REDIS_REPLY_descriptor_;
}
bool E_REDIS_REPLY_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int RedisReply::kTypeFieldNumber;
const int RedisReply::kIntegerFieldNumber;
const int RedisReply::kStrFieldNumber;
const int RedisReply::kElementFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

RedisReply::RedisReply()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:neb.RedisReply)
}

void RedisReply::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

RedisReply::RedisReply(const RedisReply& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:neb.RedisReply)
}

void RedisReply::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  type_ = 0;
  integer_ = GOOGLE_LONGLONG(0);
  str_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

RedisReply::~RedisReply() {
  // @@protoc_insertion_point(destructor:neb.RedisReply)
  SharedDtor();
}

void RedisReply::SharedDtor() {
  str_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void RedisReply::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RedisReply::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RedisReply_descriptor_;
}

const RedisReply& RedisReply::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_redis_2eproto();
  return *default_instance_;
}

RedisReply* RedisReply::default_instance_ = NULL;

RedisReply* RedisReply::New(::google::protobuf::Arena* arena) const {
  RedisReply* n = new RedisReply;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void RedisReply::Clear() {
// @@protoc_insertion_point(message_clear_start:neb.RedisReply)
  type_ = 0;
  integer_ = GOOGLE_LONGLONG(0);
  str_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  element_.Clear();
}

bool RedisReply::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:neb.RedisReply)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 type = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &type_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_integer;
        break;
      }

      // optional int64 integer = 2;
      case 2: {
        if (tag == 16) {
         parse_integer:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &integer_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_str;
        break;
      }

      // optional bytes str = 3;
      case 3: {
        if (tag == 26) {
         parse_str:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_str()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_element;
        break;
      }

      // repeated .neb.RedisReply element = 4;
      case 4: {
        if (tag == 34) {
         parse_element:
          DO_(input->IncrementRecursionDepth());
         parse_loop_element:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_element()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_loop_element;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:neb.RedisReply)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:neb.RedisReply)
  return false;
#undef DO_
}

void RedisReply::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:neb.RedisReply)
  // optional int32 type = 1;
  if (this->type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->type(), output);
  }

  // optional int64 integer = 2;
  if (this->integer() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->integer(), output);
  }

  // optional bytes str = 3;
  if (this->str().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      3, this->str(), output);
  }

  // repeated .neb.RedisReply element = 4;
  for (unsigned int i = 0, n = this->element_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->element(i), output);
  }

  // @@protoc_insertion_point(serialize_end:neb.RedisReply)
}

::google::protobuf::uint8* RedisReply::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:neb.RedisReply)
  // optional int32 type = 1;
  if (this->type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->type(), target);
  }

  // optional int64 integer = 2;
  if (this->integer() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->integer(), target);
  }

  // optional bytes str = 3;
  if (this->str().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        3, this->str(), target);
  }

  // repeated .neb.RedisReply element = 4;
  for (unsigned int i = 0, n = this->element_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        4, this->element(i), false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:neb.RedisReply)
  return target;
}

int RedisReply::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:neb.RedisReply)
  int total_size = 0;

  // optional int32 type = 1;
  if (this->type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->type());
  }

  // optional int64 integer = 2;
  if (this->integer() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->integer());
  }

  // optional bytes str = 3;
  if (this->str().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->str());
  }

  // repeated .neb.RedisReply element = 4;
  total_size += 1 * this->element_size();
  for (int i = 0; i < this->element_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->element(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void RedisReply::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:neb.RedisReply)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const RedisReply* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const RedisReply>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:neb.RedisReply)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:neb.RedisReply)
    MergeFrom(*source);
  }
}

void RedisReply::MergeFrom(const RedisReply& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:neb.RedisReply)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  element_.MergeFrom(from.element_);
  if (from.type() != 0) {
    set_type(from.type());
  }
  if (from.integer() != 0) {
    set_integer(from.integer());
  }
  if (from.str().size() > 0) {

    str_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.str_);
  }
}

void RedisReply::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:neb.RedisReply)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RedisReply::CopyFrom(const RedisReply& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:neb.RedisReply)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RedisReply::IsInitialized() const {

  return true;
}

void RedisReply::Swap(RedisReply* other) {
  if (other == this) return;
  InternalSwap(other);
}
void RedisReply::InternalSwap(RedisReply* other) {
  std::swap(type_, other->type_);
  std::swap(integer_, other->integer_);
  str_.Swap(&other->str_);
  element_.UnsafeArenaSwap(&other->element_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata RedisReply::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RedisReply_descriptor_;
  metadata.reflection = RedisReply_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// RedisReply

// optional int32 type = 1;
void RedisReply::clear_type() {
  type_ = 0;
}
 ::google::protobuf::int32 RedisReply::type() const {
  // @@protoc_insertion_point(field_get:neb.RedisReply.type)
  return type_;
}
 void RedisReply::set_type(::google::protobuf::int32 value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:neb.RedisReply.type)
}

// optional int64 integer = 2;
void RedisReply::clear_integer() {
  integer_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 RedisReply::integer() const {
  // @@protoc_insertion_point(field_get:neb.RedisReply.integer)
  return integer_;
}
 void RedisReply::set_integer(::google::protobuf::int64 value) {
  
  integer_ = value;
  // @@protoc_insertion_point(field_set:neb.RedisReply.integer)
}

// optional bytes str = 3;
void RedisReply::clear_str() {
  str_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& RedisReply::str() const {
  // @@protoc_insertion_point(field_get:neb.RedisReply.str)
  return str_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void RedisReply::set_str(const ::std::string& value) {
  
  str_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:neb.RedisReply.str)
}
 void RedisReply::set_str(const char* value) {
  
  str_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:neb.RedisReply.str)
}
 void RedisReply::set_str(const void* value, size_t size) {
  
  str_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:neb.RedisReply.str)
}
 ::std::string* RedisReply::mutable_str() {
  
  // @@protoc_insertion_point(field_mutable:neb.RedisReply.str)
  return str_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* RedisReply::release_str() {
  // @@protoc_insertion_point(field_release:neb.RedisReply.str)
  
  return str_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void RedisReply::set_allocated_str(::std::string* str) {
  if (str != NULL) {
    
  } else {
    
  }
  str_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), str);
  // @@protoc_insertion_point(field_set_allocated:neb.RedisReply.str)
}

// repeated .neb.RedisReply element = 4;
int RedisReply::element_size() const {
  return element_.size();
}
void RedisReply::clear_element() {
  element_.Clear();
}
const ::neb::RedisReply& RedisReply::element(int index) const {
  // @@protoc_insertion_point(field_get:neb.RedisReply.element)
  return element_.Get(index);
}
::neb::RedisReply* RedisReply::mutable_element(int index) {
  // @@protoc_insertion_point(field_mutable:neb.RedisReply.element)
  return element_.Mutable(index);
}
::neb::RedisReply* RedisReply::add_element() {
  // @@protoc_insertion_point(field_add:neb.RedisReply.element)
  return element_.Add();
}
::google::protobuf::RepeatedPtrField< ::neb::RedisReply >*
RedisReply::mutable_element() {
  // @@protoc_insertion_point(field_mutable_list:neb.RedisReply.element)
  return &element_;
}
const ::google::protobuf::RepeatedPtrField< ::neb::RedisReply >&
RedisReply::element() const {
  // @@protoc_insertion_point(field_list:neb.RedisReply.element)
  return element_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace neb

// @@protoc_insertion_point(global_scope)
