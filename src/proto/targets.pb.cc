// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "targets.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace proto {

namespace {

const ::google::protobuf::Descriptor* Target_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Target_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_targets_2eproto() {
  protobuf_AddDesc_targets_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "targets.proto");
  GOOGLE_CHECK(file != NULL);
  Target_descriptor_ = file->message_type(0);
  static const int Target_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Target, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Target, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Target, length_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Target, bias_indices_l_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Target, bias_indices_r_),
  };
  Target_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Target_descriptor_,
      Target::default_instance_,
      Target_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Target, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Target, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Target));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_targets_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Target_descriptor_, &Target::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_targets_2eproto() {
  delete Target::default_instance_;
  delete Target_reflection_;
}

void protobuf_AddDesc_targets_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\rtargets.proto\022\005proto\"b\n\006Target\022\014\n\004name"
    "\030\001 \001(\t\022\n\n\002id\030\002 \002(\r\022\016\n\006length\030\003 \002(\r\022\026\n\016bi"
    "as_indices_l\030\004 \003(\r\022\026\n\016bias_indices_r\030\005 \003"
    "(\r", 122);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "targets.proto", &protobuf_RegisterTypes);
  Target::default_instance_ = new Target();
  Target::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_targets_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_targets_2eproto {
  StaticDescriptorInitializer_targets_2eproto() {
    protobuf_AddDesc_targets_2eproto();
  }
} static_descriptor_initializer_targets_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int Target::kNameFieldNumber;
const int Target::kIdFieldNumber;
const int Target::kLengthFieldNumber;
const int Target::kBiasIndicesLFieldNumber;
const int Target::kBiasIndicesRFieldNumber;
#endif  // !_MSC_VER

Target::Target()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Target::InitAsDefaultInstance() {
}

Target::Target(const Target& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Target::SharedCtor() {
  _cached_size_ = 0;
  name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  id_ = 0u;
  length_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Target::~Target() {
  SharedDtor();
}

void Target::SharedDtor() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (this != default_instance_) {
  }
}

void Target::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Target::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Target_descriptor_;
}

const Target& Target::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_targets_2eproto();  return *default_instance_;
}

Target* Target::default_instance_ = NULL;

Target* Target::New() const {
  return new Target;
}

void Target::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_name()) {
      if (name_ != &::google::protobuf::internal::kEmptyString) {
        name_->clear();
      }
    }
    id_ = 0u;
    length_ = 0u;
  }
  bias_indices_l_.Clear();
  bias_indices_r_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Target::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string name = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_id;
        break;
      }
      
      // required uint32 id = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &id_)));
          set_has_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_length;
        break;
      }
      
      // required uint32 length = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_length:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &length_)));
          set_has_length();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_bias_indices_l;
        break;
      }
      
      // repeated uint32 bias_indices_l = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_bias_indices_l:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 32, input, this->mutable_bias_indices_l())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_bias_indices_l())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_bias_indices_l;
        if (input->ExpectTag(40)) goto parse_bias_indices_r;
        break;
      }
      
      // repeated uint32 bias_indices_r = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_bias_indices_r:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 40, input, this->mutable_bias_indices_r())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_bias_indices_r())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_bias_indices_r;
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void Target::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->name(), output);
  }
  
  // required uint32 id = 2;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->id(), output);
  }
  
  // required uint32 length = 3;
  if (has_length()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->length(), output);
  }
  
  // repeated uint32 bias_indices_l = 4;
  for (int i = 0; i < this->bias_indices_l_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(
      4, this->bias_indices_l(i), output);
  }
  
  // repeated uint32 bias_indices_r = 5;
  for (int i = 0; i < this->bias_indices_r_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(
      5, this->bias_indices_r(i), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Target::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }
  
  // required uint32 id = 2;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->id(), target);
  }
  
  // required uint32 length = 3;
  if (has_length()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->length(), target);
  }
  
  // repeated uint32 bias_indices_l = 4;
  for (int i = 0; i < this->bias_indices_l_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32ToArray(4, this->bias_indices_l(i), target);
  }
  
  // repeated uint32 bias_indices_r = 5;
  for (int i = 0; i < this->bias_indices_r_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32ToArray(5, this->bias_indices_r(i), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Target::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string name = 1;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }
    
    // required uint32 id = 2;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->id());
    }
    
    // required uint32 length = 3;
    if (has_length()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->length());
    }
    
  }
  // repeated uint32 bias_indices_l = 4;
  {
    int data_size = 0;
    for (int i = 0; i < this->bias_indices_l_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        UInt32Size(this->bias_indices_l(i));
    }
    total_size += 1 * this->bias_indices_l_size() + data_size;
  }
  
  // repeated uint32 bias_indices_r = 5;
  {
    int data_size = 0;
    for (int i = 0; i < this->bias_indices_r_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        UInt32Size(this->bias_indices_r(i));
    }
    total_size += 1 * this->bias_indices_r_size() + data_size;
  }
  
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Target::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Target* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Target*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Target::MergeFrom(const Target& from) {
  GOOGLE_CHECK_NE(&from, this);
  bias_indices_l_.MergeFrom(from.bias_indices_l_);
  bias_indices_r_.MergeFrom(from.bias_indices_r_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_name()) {
      set_name(from.name());
    }
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_length()) {
      set_length(from.length());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Target::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Target::CopyFrom(const Target& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Target::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000006) != 0x00000006) return false;
  
  return true;
}

void Target::Swap(Target* other) {
  if (other != this) {
    std::swap(name_, other->name_);
    std::swap(id_, other->id_);
    std::swap(length_, other->length_);
    bias_indices_l_.Swap(&other->bias_indices_l_);
    bias_indices_r_.Swap(&other->bias_indices_r_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Target::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Target_descriptor_;
  metadata.reflection = Target_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto

// @@protoc_insertion_point(global_scope)
