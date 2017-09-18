// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: stock_day.proto

#ifndef PROTOBUF_stock_5fday_2eproto__INCLUDED
#define PROTOBUF_stock_5fday_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3004000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
class stock_day;
class stock_dayDefaultTypeInternal;
extern stock_dayDefaultTypeInternal _stock_day_default_instance_;

namespace protobuf_stock_5fday_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static void InitDefaultsImpl();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_stock_5fday_2eproto

// ===================================================================

class stock_day : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:stock_day) */ {
 public:
  stock_day();
  virtual ~stock_day();

  stock_day(const stock_day& from);

  inline stock_day& operator=(const stock_day& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  stock_day(stock_day&& from) noexcept
    : stock_day() {
    *this = ::std::move(from);
  }

  inline stock_day& operator=(stock_day&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const stock_day& default_instance();

  static inline const stock_day* internal_default_instance() {
    return reinterpret_cast<const stock_day*>(
               &_stock_day_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(stock_day* other);
  friend void swap(stock_day& a, stock_day& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline stock_day* New() const PROTOBUF_FINAL { return New(NULL); }

  stock_day* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const stock_day& from);
  void MergeFrom(const stock_day& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(stock_day* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string code = 1;
  void clear_code();
  static const int kCodeFieldNumber = 1;
  const ::std::string& code() const;
  void set_code(const ::std::string& value);
  #if LANG_CXX11
  void set_code(::std::string&& value);
  #endif
  void set_code(const char* value);
  void set_code(const char* value, size_t size);
  ::std::string* mutable_code();
  ::std::string* release_code();
  void set_allocated_code(::std::string* code);

  // string date = 7;
  void clear_date();
  static const int kDateFieldNumber = 7;
  const ::std::string& date() const;
  void set_date(const ::std::string& value);
  #if LANG_CXX11
  void set_date(::std::string&& value);
  #endif
  void set_date(const char* value);
  void set_date(const char* value, size_t size);
  ::std::string* mutable_date();
  ::std::string* release_date();
  void set_allocated_date(::std::string* date);

  // string date_stamp = 9;
  void clear_date_stamp();
  static const int kDateStampFieldNumber = 9;
  const ::std::string& date_stamp() const;
  void set_date_stamp(const ::std::string& value);
  #if LANG_CXX11
  void set_date_stamp(::std::string&& value);
  #endif
  void set_date_stamp(const char* value);
  void set_date_stamp(const char* value, size_t size);
  ::std::string* mutable_date_stamp();
  ::std::string* release_date_stamp();
  void set_allocated_date_stamp(::std::string* date_stamp);

  // float open = 2;
  void clear_open();
  static const int kOpenFieldNumber = 2;
  float open() const;
  void set_open(float value);

  // float high = 3;
  void clear_high();
  static const int kHighFieldNumber = 3;
  float high() const;
  void set_high(float value);

  // float low = 4;
  void clear_low();
  static const int kLowFieldNumber = 4;
  float low() const;
  void set_low(float value);

  // float close = 5;
  void clear_close();
  static const int kCloseFieldNumber = 5;
  float close() const;
  void set_close(float value);

  // float volume = 6;
  void clear_volume();
  static const int kVolumeFieldNumber = 6;
  float volume() const;
  void set_volume(float value);

  // float amount = 8;
  void clear_amount();
  static const int kAmountFieldNumber = 8;
  float amount() const;
  void set_amount(float value);

  // float preclose = 10;
  void clear_preclose();
  static const int kPrecloseFieldNumber = 10;
  float preclose() const;
  void set_preclose(float value);

  // float adj = 11;
  void clear_adj();
  static const int kAdjFieldNumber = 11;
  float adj() const;
  void set_adj(float value);

  // @@protoc_insertion_point(class_scope:stock_day)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr code_;
  ::google::protobuf::internal::ArenaStringPtr date_;
  ::google::protobuf::internal::ArenaStringPtr date_stamp_;
  float open_;
  float high_;
  float low_;
  float close_;
  float volume_;
  float amount_;
  float preclose_;
  float adj_;
  mutable int _cached_size_;
  friend struct protobuf_stock_5fday_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// stock_day

// string code = 1;
inline void stock_day::clear_code() {
  code_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& stock_day::code() const {
  // @@protoc_insertion_point(field_get:stock_day.code)
  return code_.GetNoArena();
}
inline void stock_day::set_code(const ::std::string& value) {
  
  code_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:stock_day.code)
}
#if LANG_CXX11
inline void stock_day::set_code(::std::string&& value) {
  
  code_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:stock_day.code)
}
#endif
inline void stock_day::set_code(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  code_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:stock_day.code)
}
inline void stock_day::set_code(const char* value, size_t size) {
  
  code_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:stock_day.code)
}
inline ::std::string* stock_day::mutable_code() {
  
  // @@protoc_insertion_point(field_mutable:stock_day.code)
  return code_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* stock_day::release_code() {
  // @@protoc_insertion_point(field_release:stock_day.code)
  
  return code_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void stock_day::set_allocated_code(::std::string* code) {
  if (code != NULL) {
    
  } else {
    
  }
  code_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), code);
  // @@protoc_insertion_point(field_set_allocated:stock_day.code)
}

// float open = 2;
inline void stock_day::clear_open() {
  open_ = 0;
}
inline float stock_day::open() const {
  // @@protoc_insertion_point(field_get:stock_day.open)
  return open_;
}
inline void stock_day::set_open(float value) {
  
  open_ = value;
  // @@protoc_insertion_point(field_set:stock_day.open)
}

// float high = 3;
inline void stock_day::clear_high() {
  high_ = 0;
}
inline float stock_day::high() const {
  // @@protoc_insertion_point(field_get:stock_day.high)
  return high_;
}
inline void stock_day::set_high(float value) {
  
  high_ = value;
  // @@protoc_insertion_point(field_set:stock_day.high)
}

// float low = 4;
inline void stock_day::clear_low() {
  low_ = 0;
}
inline float stock_day::low() const {
  // @@protoc_insertion_point(field_get:stock_day.low)
  return low_;
}
inline void stock_day::set_low(float value) {
  
  low_ = value;
  // @@protoc_insertion_point(field_set:stock_day.low)
}

// float close = 5;
inline void stock_day::clear_close() {
  close_ = 0;
}
inline float stock_day::close() const {
  // @@protoc_insertion_point(field_get:stock_day.close)
  return close_;
}
inline void stock_day::set_close(float value) {
  
  close_ = value;
  // @@protoc_insertion_point(field_set:stock_day.close)
}

// float volume = 6;
inline void stock_day::clear_volume() {
  volume_ = 0;
}
inline float stock_day::volume() const {
  // @@protoc_insertion_point(field_get:stock_day.volume)
  return volume_;
}
inline void stock_day::set_volume(float value) {
  
  volume_ = value;
  // @@protoc_insertion_point(field_set:stock_day.volume)
}

// string date = 7;
inline void stock_day::clear_date() {
  date_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& stock_day::date() const {
  // @@protoc_insertion_point(field_get:stock_day.date)
  return date_.GetNoArena();
}
inline void stock_day::set_date(const ::std::string& value) {
  
  date_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:stock_day.date)
}
#if LANG_CXX11
inline void stock_day::set_date(::std::string&& value) {
  
  date_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:stock_day.date)
}
#endif
inline void stock_day::set_date(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  date_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:stock_day.date)
}
inline void stock_day::set_date(const char* value, size_t size) {
  
  date_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:stock_day.date)
}
inline ::std::string* stock_day::mutable_date() {
  
  // @@protoc_insertion_point(field_mutable:stock_day.date)
  return date_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* stock_day::release_date() {
  // @@protoc_insertion_point(field_release:stock_day.date)
  
  return date_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void stock_day::set_allocated_date(::std::string* date) {
  if (date != NULL) {
    
  } else {
    
  }
  date_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), date);
  // @@protoc_insertion_point(field_set_allocated:stock_day.date)
}

// float amount = 8;
inline void stock_day::clear_amount() {
  amount_ = 0;
}
inline float stock_day::amount() const {
  // @@protoc_insertion_point(field_get:stock_day.amount)
  return amount_;
}
inline void stock_day::set_amount(float value) {
  
  amount_ = value;
  // @@protoc_insertion_point(field_set:stock_day.amount)
}

// string date_stamp = 9;
inline void stock_day::clear_date_stamp() {
  date_stamp_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& stock_day::date_stamp() const {
  // @@protoc_insertion_point(field_get:stock_day.date_stamp)
  return date_stamp_.GetNoArena();
}
inline void stock_day::set_date_stamp(const ::std::string& value) {
  
  date_stamp_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:stock_day.date_stamp)
}
#if LANG_CXX11
inline void stock_day::set_date_stamp(::std::string&& value) {
  
  date_stamp_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:stock_day.date_stamp)
}
#endif
inline void stock_day::set_date_stamp(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  date_stamp_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:stock_day.date_stamp)
}
inline void stock_day::set_date_stamp(const char* value, size_t size) {
  
  date_stamp_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:stock_day.date_stamp)
}
inline ::std::string* stock_day::mutable_date_stamp() {
  
  // @@protoc_insertion_point(field_mutable:stock_day.date_stamp)
  return date_stamp_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* stock_day::release_date_stamp() {
  // @@protoc_insertion_point(field_release:stock_day.date_stamp)
  
  return date_stamp_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void stock_day::set_allocated_date_stamp(::std::string* date_stamp) {
  if (date_stamp != NULL) {
    
  } else {
    
  }
  date_stamp_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), date_stamp);
  // @@protoc_insertion_point(field_set_allocated:stock_day.date_stamp)
}

// float preclose = 10;
inline void stock_day::clear_preclose() {
  preclose_ = 0;
}
inline float stock_day::preclose() const {
  // @@protoc_insertion_point(field_get:stock_day.preclose)
  return preclose_;
}
inline void stock_day::set_preclose(float value) {
  
  preclose_ = value;
  // @@protoc_insertion_point(field_set:stock_day.preclose)
}

// float adj = 11;
inline void stock_day::clear_adj() {
  adj_ = 0;
}
inline float stock_day::adj() const {
  // @@protoc_insertion_point(field_get:stock_day.adj)
  return adj_;
}
inline void stock_day::set_adj(float value) {
  
  adj_ = value;
  // @@protoc_insertion_point(field_set:stock_day.adj)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_stock_5fday_2eproto__INCLUDED