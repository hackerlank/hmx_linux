// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: chatmsg.proto

#ifndef PROTOBUF_chatmsg_2eproto__INCLUDED
#define PROTOBUF_chatmsg_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_chatmsg_2eproto();
void protobuf_AssignDesc_chatmsg_2eproto();
void protobuf_ShutdownFile_chatmsg_2eproto();

class ChatMsgBinary;
class MsgConent;
class MsgMark;

// ===================================================================

class MsgConent : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:protobuf.MsgConent) */ {
 public:
  MsgConent();
  virtual ~MsgConent();

  MsgConent(const MsgConent& from);

  inline MsgConent& operator=(const MsgConent& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const MsgConent& default_instance();

  void Swap(MsgConent* other);

  // implements Message ----------------------------------------------

  inline MsgConent* New() const { return New(NULL); }

  MsgConent* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MsgConent& from);
  void MergeFrom(const MsgConent& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(MsgConent* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int64 msgid = 1;
  bool has_msgid() const;
  void clear_msgid();
  static const int kMsgidFieldNumber = 1;
  ::google::protobuf::int64 msgid() const;
  void set_msgid(::google::protobuf::int64 value);

  // optional int64 senduid = 2;
  bool has_senduid() const;
  void clear_senduid();
  static const int kSenduidFieldNumber = 2;
  ::google::protobuf::int64 senduid() const;
  void set_senduid(::google::protobuf::int64 value);

  // optional string sendname = 3;
  bool has_sendname() const;
  void clear_sendname();
  static const int kSendnameFieldNumber = 3;
  const ::std::string& sendname() const;
  void set_sendname(const ::std::string& value);
  void set_sendname(const char* value);
  void set_sendname(const char* value, size_t size);
  ::std::string* mutable_sendname();
  ::std::string* release_sendname();
  void set_allocated_sendname(::std::string* sendname);

  // optional int32 sendtime = 4;
  bool has_sendtime() const;
  void clear_sendtime();
  static const int kSendtimeFieldNumber = 4;
  ::google::protobuf::int32 sendtime() const;
  void set_sendtime(::google::protobuf::int32 value);

  // optional string conent = 5;
  bool has_conent() const;
  void clear_conent();
  static const int kConentFieldNumber = 5;
  const ::std::string& conent() const;
  void set_conent(const ::std::string& value);
  void set_conent(const char* value);
  void set_conent(const char* value, size_t size);
  ::std::string* mutable_conent();
  ::std::string* release_conent();
  void set_allocated_conent(::std::string* conent);

  // @@protoc_insertion_point(class_scope:protobuf.MsgConent)
 private:
  inline void set_has_msgid();
  inline void clear_has_msgid();
  inline void set_has_senduid();
  inline void clear_has_senduid();
  inline void set_has_sendname();
  inline void clear_has_sendname();
  inline void set_has_sendtime();
  inline void clear_has_sendtime();
  inline void set_has_conent();
  inline void clear_has_conent();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int64 msgid_;
  ::google::protobuf::int64 senduid_;
  ::google::protobuf::internal::ArenaStringPtr sendname_;
  ::google::protobuf::internal::ArenaStringPtr conent_;
  ::google::protobuf::int32 sendtime_;
  friend void  protobuf_AddDesc_chatmsg_2eproto();
  friend void protobuf_AssignDesc_chatmsg_2eproto();
  friend void protobuf_ShutdownFile_chatmsg_2eproto();

  void InitAsDefaultInstance();
  static MsgConent* default_instance_;
};
// -------------------------------------------------------------------

class MsgMark : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:protobuf.MsgMark) */ {
 public:
  MsgMark();
  virtual ~MsgMark();

  MsgMark(const MsgMark& from);

  inline MsgMark& operator=(const MsgMark& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const MsgMark& default_instance();

  void Swap(MsgMark* other);

  // implements Message ----------------------------------------------

  inline MsgMark* New() const { return New(NULL); }

  MsgMark* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MsgMark& from);
  void MergeFrom(const MsgMark& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(MsgMark* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 opentime = 1;
  bool has_opentime() const;
  void clear_opentime();
  static const int kOpentimeFieldNumber = 1;
  ::google::protobuf::int32 opentime() const;
  void set_opentime(::google::protobuf::int32 value);

  // optional int32 lasttime = 2;
  bool has_lasttime() const;
  void clear_lasttime();
  static const int kLasttimeFieldNumber = 2;
  ::google::protobuf::int32 lasttime() const;
  void set_lasttime(::google::protobuf::int32 value);

  // repeated int64 readuids = 3;
  int readuids_size() const;
  void clear_readuids();
  static const int kReaduidsFieldNumber = 3;
  ::google::protobuf::int64 readuids(int index) const;
  void set_readuids(int index, ::google::protobuf::int64 value);
  void add_readuids(::google::protobuf::int64 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int64 >&
      readuids() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int64 >*
      mutable_readuids();

  // @@protoc_insertion_point(class_scope:protobuf.MsgMark)
 private:
  inline void set_has_opentime();
  inline void clear_has_opentime();
  inline void set_has_lasttime();
  inline void clear_has_lasttime();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 opentime_;
  ::google::protobuf::int32 lasttime_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int64 > readuids_;
  friend void  protobuf_AddDesc_chatmsg_2eproto();
  friend void protobuf_AssignDesc_chatmsg_2eproto();
  friend void protobuf_ShutdownFile_chatmsg_2eproto();

  void InitAsDefaultInstance();
  static MsgMark* default_instance_;
};
// -------------------------------------------------------------------

class ChatMsgBinary : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:protobuf.ChatMsgBinary) */ {
 public:
  ChatMsgBinary();
  virtual ~ChatMsgBinary();

  ChatMsgBinary(const ChatMsgBinary& from);

  inline ChatMsgBinary& operator=(const ChatMsgBinary& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ChatMsgBinary& default_instance();

  void Swap(ChatMsgBinary* other);

  // implements Message ----------------------------------------------

  inline ChatMsgBinary* New() const { return New(NULL); }

  ChatMsgBinary* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ChatMsgBinary& from);
  void MergeFrom(const ChatMsgBinary& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ChatMsgBinary* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .protobuf.MsgConent conent = 1;
  bool has_conent() const;
  void clear_conent();
  static const int kConentFieldNumber = 1;
  const ::protobuf::MsgConent& conent() const;
  ::protobuf::MsgConent* mutable_conent();
  ::protobuf::MsgConent* release_conent();
  void set_allocated_conent(::protobuf::MsgConent* conent);

  // @@protoc_insertion_point(class_scope:protobuf.ChatMsgBinary)
 private:
  inline void set_has_conent();
  inline void clear_has_conent();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::protobuf::MsgConent* conent_;
  friend void  protobuf_AddDesc_chatmsg_2eproto();
  friend void protobuf_AssignDesc_chatmsg_2eproto();
  friend void protobuf_ShutdownFile_chatmsg_2eproto();

  void InitAsDefaultInstance();
  static ChatMsgBinary* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// MsgConent

// optional int64 msgid = 1;
inline bool MsgConent::has_msgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MsgConent::set_has_msgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MsgConent::clear_has_msgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MsgConent::clear_msgid() {
  msgid_ = GOOGLE_LONGLONG(0);
  clear_has_msgid();
}
inline ::google::protobuf::int64 MsgConent::msgid() const {
  // @@protoc_insertion_point(field_get:protobuf.MsgConent.msgid)
  return msgid_;
}
inline void MsgConent::set_msgid(::google::protobuf::int64 value) {
  set_has_msgid();
  msgid_ = value;
  // @@protoc_insertion_point(field_set:protobuf.MsgConent.msgid)
}

// optional int64 senduid = 2;
inline bool MsgConent::has_senduid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MsgConent::set_has_senduid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MsgConent::clear_has_senduid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MsgConent::clear_senduid() {
  senduid_ = GOOGLE_LONGLONG(0);
  clear_has_senduid();
}
inline ::google::protobuf::int64 MsgConent::senduid() const {
  // @@protoc_insertion_point(field_get:protobuf.MsgConent.senduid)
  return senduid_;
}
inline void MsgConent::set_senduid(::google::protobuf::int64 value) {
  set_has_senduid();
  senduid_ = value;
  // @@protoc_insertion_point(field_set:protobuf.MsgConent.senduid)
}

// optional string sendname = 3;
inline bool MsgConent::has_sendname() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void MsgConent::set_has_sendname() {
  _has_bits_[0] |= 0x00000004u;
}
inline void MsgConent::clear_has_sendname() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void MsgConent::clear_sendname() {
  sendname_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_sendname();
}
inline const ::std::string& MsgConent::sendname() const {
  // @@protoc_insertion_point(field_get:protobuf.MsgConent.sendname)
  return sendname_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MsgConent::set_sendname(const ::std::string& value) {
  set_has_sendname();
  sendname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protobuf.MsgConent.sendname)
}
inline void MsgConent::set_sendname(const char* value) {
  set_has_sendname();
  sendname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protobuf.MsgConent.sendname)
}
inline void MsgConent::set_sendname(const char* value, size_t size) {
  set_has_sendname();
  sendname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protobuf.MsgConent.sendname)
}
inline ::std::string* MsgConent::mutable_sendname() {
  set_has_sendname();
  // @@protoc_insertion_point(field_mutable:protobuf.MsgConent.sendname)
  return sendname_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MsgConent::release_sendname() {
  // @@protoc_insertion_point(field_release:protobuf.MsgConent.sendname)
  clear_has_sendname();
  return sendname_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MsgConent::set_allocated_sendname(::std::string* sendname) {
  if (sendname != NULL) {
    set_has_sendname();
  } else {
    clear_has_sendname();
  }
  sendname_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), sendname);
  // @@protoc_insertion_point(field_set_allocated:protobuf.MsgConent.sendname)
}

// optional int32 sendtime = 4;
inline bool MsgConent::has_sendtime() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void MsgConent::set_has_sendtime() {
  _has_bits_[0] |= 0x00000008u;
}
inline void MsgConent::clear_has_sendtime() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void MsgConent::clear_sendtime() {
  sendtime_ = 0;
  clear_has_sendtime();
}
inline ::google::protobuf::int32 MsgConent::sendtime() const {
  // @@protoc_insertion_point(field_get:protobuf.MsgConent.sendtime)
  return sendtime_;
}
inline void MsgConent::set_sendtime(::google::protobuf::int32 value) {
  set_has_sendtime();
  sendtime_ = value;
  // @@protoc_insertion_point(field_set:protobuf.MsgConent.sendtime)
}

// optional string conent = 5;
inline bool MsgConent::has_conent() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void MsgConent::set_has_conent() {
  _has_bits_[0] |= 0x00000010u;
}
inline void MsgConent::clear_has_conent() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void MsgConent::clear_conent() {
  conent_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_conent();
}
inline const ::std::string& MsgConent::conent() const {
  // @@protoc_insertion_point(field_get:protobuf.MsgConent.conent)
  return conent_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MsgConent::set_conent(const ::std::string& value) {
  set_has_conent();
  conent_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protobuf.MsgConent.conent)
}
inline void MsgConent::set_conent(const char* value) {
  set_has_conent();
  conent_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protobuf.MsgConent.conent)
}
inline void MsgConent::set_conent(const char* value, size_t size) {
  set_has_conent();
  conent_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protobuf.MsgConent.conent)
}
inline ::std::string* MsgConent::mutable_conent() {
  set_has_conent();
  // @@protoc_insertion_point(field_mutable:protobuf.MsgConent.conent)
  return conent_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MsgConent::release_conent() {
  // @@protoc_insertion_point(field_release:protobuf.MsgConent.conent)
  clear_has_conent();
  return conent_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MsgConent::set_allocated_conent(::std::string* conent) {
  if (conent != NULL) {
    set_has_conent();
  } else {
    clear_has_conent();
  }
  conent_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), conent);
  // @@protoc_insertion_point(field_set_allocated:protobuf.MsgConent.conent)
}

// -------------------------------------------------------------------

// MsgMark

// optional int32 opentime = 1;
inline bool MsgMark::has_opentime() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MsgMark::set_has_opentime() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MsgMark::clear_has_opentime() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MsgMark::clear_opentime() {
  opentime_ = 0;
  clear_has_opentime();
}
inline ::google::protobuf::int32 MsgMark::opentime() const {
  // @@protoc_insertion_point(field_get:protobuf.MsgMark.opentime)
  return opentime_;
}
inline void MsgMark::set_opentime(::google::protobuf::int32 value) {
  set_has_opentime();
  opentime_ = value;
  // @@protoc_insertion_point(field_set:protobuf.MsgMark.opentime)
}

// optional int32 lasttime = 2;
inline bool MsgMark::has_lasttime() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MsgMark::set_has_lasttime() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MsgMark::clear_has_lasttime() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MsgMark::clear_lasttime() {
  lasttime_ = 0;
  clear_has_lasttime();
}
inline ::google::protobuf::int32 MsgMark::lasttime() const {
  // @@protoc_insertion_point(field_get:protobuf.MsgMark.lasttime)
  return lasttime_;
}
inline void MsgMark::set_lasttime(::google::protobuf::int32 value) {
  set_has_lasttime();
  lasttime_ = value;
  // @@protoc_insertion_point(field_set:protobuf.MsgMark.lasttime)
}

// repeated int64 readuids = 3;
inline int MsgMark::readuids_size() const {
  return readuids_.size();
}
inline void MsgMark::clear_readuids() {
  readuids_.Clear();
}
inline ::google::protobuf::int64 MsgMark::readuids(int index) const {
  // @@protoc_insertion_point(field_get:protobuf.MsgMark.readuids)
  return readuids_.Get(index);
}
inline void MsgMark::set_readuids(int index, ::google::protobuf::int64 value) {
  readuids_.Set(index, value);
  // @@protoc_insertion_point(field_set:protobuf.MsgMark.readuids)
}
inline void MsgMark::add_readuids(::google::protobuf::int64 value) {
  readuids_.Add(value);
  // @@protoc_insertion_point(field_add:protobuf.MsgMark.readuids)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int64 >&
MsgMark::readuids() const {
  // @@protoc_insertion_point(field_list:protobuf.MsgMark.readuids)
  return readuids_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int64 >*
MsgMark::mutable_readuids() {
  // @@protoc_insertion_point(field_mutable_list:protobuf.MsgMark.readuids)
  return &readuids_;
}

// -------------------------------------------------------------------

// ChatMsgBinary

// optional .protobuf.MsgConent conent = 1;
inline bool ChatMsgBinary::has_conent() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ChatMsgBinary::set_has_conent() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ChatMsgBinary::clear_has_conent() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ChatMsgBinary::clear_conent() {
  if (conent_ != NULL) conent_->::protobuf::MsgConent::Clear();
  clear_has_conent();
}
inline const ::protobuf::MsgConent& ChatMsgBinary::conent() const {
  // @@protoc_insertion_point(field_get:protobuf.ChatMsgBinary.conent)
  return conent_ != NULL ? *conent_ : *default_instance_->conent_;
}
inline ::protobuf::MsgConent* ChatMsgBinary::mutable_conent() {
  set_has_conent();
  if (conent_ == NULL) {
    conent_ = new ::protobuf::MsgConent;
  }
  // @@protoc_insertion_point(field_mutable:protobuf.ChatMsgBinary.conent)
  return conent_;
}
inline ::protobuf::MsgConent* ChatMsgBinary::release_conent() {
  // @@protoc_insertion_point(field_release:protobuf.ChatMsgBinary.conent)
  clear_has_conent();
  ::protobuf::MsgConent* temp = conent_;
  conent_ = NULL;
  return temp;
}
inline void ChatMsgBinary::set_allocated_conent(::protobuf::MsgConent* conent) {
  delete conent_;
  conent_ = conent;
  if (conent) {
    set_has_conent();
  } else {
    clear_has_conent();
  }
  // @@protoc_insertion_point(field_set_allocated:protobuf.ChatMsgBinary.conent)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_chatmsg_2eproto__INCLUDED
