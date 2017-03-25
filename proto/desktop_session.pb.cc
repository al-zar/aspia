// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: desktop_session.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "desktop_session.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace aspia {
namespace proto {
namespace desktop {
class HostToClientDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<HostToClient> {
} _HostToClient_default_instance_;
class ClientToHostDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<ClientToHost> {
} _ClientToHost_default_instance_;

namespace protobuf_desktop_5fsession_2eproto {


void TableStruct::Shutdown() {
  _HostToClient_default_instance_.Shutdown();
  _ClientToHost_default_instance_.Shutdown();
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::aspia::proto::protobuf_proto_2eproto::InitDefaults();
  _HostToClient_default_instance_.DefaultConstruct();
  _ClientToHost_default_instance_.DefaultConstruct();
  _HostToClient_default_instance_.get_mutable()->video_packet_ = const_cast< ::aspia::proto::VideoPacket*>(
      ::aspia::proto::VideoPacket::internal_default_instance());
  _HostToClient_default_instance_.get_mutable()->cursor_shape_ = const_cast< ::aspia::proto::CursorShape*>(
      ::aspia::proto::CursorShape::internal_default_instance());
  _HostToClient_default_instance_.get_mutable()->clipboard_event_ = const_cast< ::aspia::proto::ClipboardEvent*>(
      ::aspia::proto::ClipboardEvent::internal_default_instance());
  _HostToClient_default_instance_.get_mutable()->config_request_ = const_cast< ::aspia::proto::DesktopConfigRequest*>(
      ::aspia::proto::DesktopConfigRequest::internal_default_instance());
  _ClientToHost_default_instance_.get_mutable()->pointer_event_ = const_cast< ::aspia::proto::PointerEvent*>(
      ::aspia::proto::PointerEvent::internal_default_instance());
  _ClientToHost_default_instance_.get_mutable()->key_event_ = const_cast< ::aspia::proto::KeyEvent*>(
      ::aspia::proto::KeyEvent::internal_default_instance());
  _ClientToHost_default_instance_.get_mutable()->clipboard_event_ = const_cast< ::aspia::proto::ClipboardEvent*>(
      ::aspia::proto::ClipboardEvent::internal_default_instance());
  _ClientToHost_default_instance_.get_mutable()->power_event_ = const_cast< ::aspia::proto::PowerEvent*>(
      ::aspia::proto::PowerEvent::internal_default_instance());
  _ClientToHost_default_instance_.get_mutable()->config_ = const_cast< ::aspia::proto::DesktopConfig*>(
      ::aspia::proto::DesktopConfig::internal_default_instance());
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  ::aspia::proto::protobuf_proto_2eproto::AddDescriptors();
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
#endif  // GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER

}  // namespace protobuf_desktop_5fsession_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int HostToClient::kVideoPacketFieldNumber;
const int HostToClient::kCursorShapeFieldNumber;
const int HostToClient::kClipboardEventFieldNumber;
const int HostToClient::kConfigRequestFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

HostToClient::HostToClient()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_desktop_5fsession_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:aspia.proto.desktop.HostToClient)
}
HostToClient::HostToClient(const HostToClient& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_video_packet()) {
    video_packet_ = new ::aspia::proto::VideoPacket(*from.video_packet_);
  } else {
    video_packet_ = NULL;
  }
  if (from.has_cursor_shape()) {
    cursor_shape_ = new ::aspia::proto::CursorShape(*from.cursor_shape_);
  } else {
    cursor_shape_ = NULL;
  }
  if (from.has_clipboard_event()) {
    clipboard_event_ = new ::aspia::proto::ClipboardEvent(*from.clipboard_event_);
  } else {
    clipboard_event_ = NULL;
  }
  if (from.has_config_request()) {
    config_request_ = new ::aspia::proto::DesktopConfigRequest(*from.config_request_);
  } else {
    config_request_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:aspia.proto.desktop.HostToClient)
}

void HostToClient::SharedCtor() {
  ::memset(&video_packet_, 0, reinterpret_cast<char*>(&config_request_) -
    reinterpret_cast<char*>(&video_packet_) + sizeof(config_request_));
  _cached_size_ = 0;
}

HostToClient::~HostToClient() {
  // @@protoc_insertion_point(destructor:aspia.proto.desktop.HostToClient)
  SharedDtor();
}

void HostToClient::SharedDtor() {
  if (this != internal_default_instance()) {
    delete video_packet_;
  }
  if (this != internal_default_instance()) {
    delete cursor_shape_;
  }
  if (this != internal_default_instance()) {
    delete clipboard_event_;
  }
  if (this != internal_default_instance()) {
    delete config_request_;
  }
}

void HostToClient::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const HostToClient& HostToClient::default_instance() {
  protobuf_desktop_5fsession_2eproto::InitDefaults();
  return *internal_default_instance();
}

HostToClient* HostToClient::New(::google::protobuf::Arena* arena) const {
  HostToClient* n = new HostToClient;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void HostToClient::Clear() {
// @@protoc_insertion_point(message_clear_start:aspia.proto.desktop.HostToClient)
  if (GetArenaNoVirtual() == NULL && video_packet_ != NULL) {
    delete video_packet_;
  }
  video_packet_ = NULL;
  if (GetArenaNoVirtual() == NULL && cursor_shape_ != NULL) {
    delete cursor_shape_;
  }
  cursor_shape_ = NULL;
  if (GetArenaNoVirtual() == NULL && clipboard_event_ != NULL) {
    delete clipboard_event_;
  }
  clipboard_event_ = NULL;
  if (GetArenaNoVirtual() == NULL && config_request_ != NULL) {
    delete config_request_;
  }
  config_request_ = NULL;
}

bool HostToClient::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:aspia.proto.desktop.HostToClient)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .aspia.proto.VideoPacket video_packet = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_video_packet()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .aspia.proto.CursorShape cursor_shape = 2;
      case 2: {
        if (tag == 18u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_cursor_shape()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .aspia.proto.ClipboardEvent clipboard_event = 3;
      case 3: {
        if (tag == 26u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_clipboard_event()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .aspia.proto.DesktopConfigRequest config_request = 4;
      case 4: {
        if (tag == 34u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_config_request()));
        } else {
          goto handle_unusual;
        }
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
  // @@protoc_insertion_point(parse_success:aspia.proto.desktop.HostToClient)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:aspia.proto.desktop.HostToClient)
  return false;
#undef DO_
}

void HostToClient::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:aspia.proto.desktop.HostToClient)
  // .aspia.proto.VideoPacket video_packet = 1;
  if (this->has_video_packet()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, *this->video_packet_, output);
  }

  // .aspia.proto.CursorShape cursor_shape = 2;
  if (this->has_cursor_shape()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      2, *this->cursor_shape_, output);
  }

  // .aspia.proto.ClipboardEvent clipboard_event = 3;
  if (this->has_clipboard_event()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      3, *this->clipboard_event_, output);
  }

  // .aspia.proto.DesktopConfigRequest config_request = 4;
  if (this->has_config_request()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      4, *this->config_request_, output);
  }

  // @@protoc_insertion_point(serialize_end:aspia.proto.desktop.HostToClient)
}

size_t HostToClient::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:aspia.proto.desktop.HostToClient)
  size_t total_size = 0;

  // .aspia.proto.VideoPacket video_packet = 1;
  if (this->has_video_packet()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->video_packet_);
  }

  // .aspia.proto.CursorShape cursor_shape = 2;
  if (this->has_cursor_shape()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->cursor_shape_);
  }

  // .aspia.proto.ClipboardEvent clipboard_event = 3;
  if (this->has_clipboard_event()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->clipboard_event_);
  }

  // .aspia.proto.DesktopConfigRequest config_request = 4;
  if (this->has_config_request()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->config_request_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void HostToClient::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const HostToClient*>(&from));
}

void HostToClient::MergeFrom(const HostToClient& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:aspia.proto.desktop.HostToClient)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_video_packet()) {
    mutable_video_packet()->::aspia::proto::VideoPacket::MergeFrom(from.video_packet());
  }
  if (from.has_cursor_shape()) {
    mutable_cursor_shape()->::aspia::proto::CursorShape::MergeFrom(from.cursor_shape());
  }
  if (from.has_clipboard_event()) {
    mutable_clipboard_event()->::aspia::proto::ClipboardEvent::MergeFrom(from.clipboard_event());
  }
  if (from.has_config_request()) {
    mutable_config_request()->::aspia::proto::DesktopConfigRequest::MergeFrom(from.config_request());
  }
}

void HostToClient::CopyFrom(const HostToClient& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:aspia.proto.desktop.HostToClient)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool HostToClient::IsInitialized() const {
  return true;
}

void HostToClient::Swap(HostToClient* other) {
  if (other == this) return;
  InternalSwap(other);
}
void HostToClient::InternalSwap(HostToClient* other) {
  std::swap(video_packet_, other->video_packet_);
  std::swap(cursor_shape_, other->cursor_shape_);
  std::swap(clipboard_event_, other->clipboard_event_);
  std::swap(config_request_, other->config_request_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string HostToClient::GetTypeName() const {
  return "aspia.proto.desktop.HostToClient";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// HostToClient

// .aspia.proto.VideoPacket video_packet = 1;
bool HostToClient::has_video_packet() const {
  return this != internal_default_instance() && video_packet_ != NULL;
}
void HostToClient::clear_video_packet() {
  if (GetArenaNoVirtual() == NULL && video_packet_ != NULL) delete video_packet_;
  video_packet_ = NULL;
}
const ::aspia::proto::VideoPacket& HostToClient::video_packet() const {
  // @@protoc_insertion_point(field_get:aspia.proto.desktop.HostToClient.video_packet)
  return video_packet_ != NULL ? *video_packet_
                         : *::aspia::proto::VideoPacket::internal_default_instance();
}
::aspia::proto::VideoPacket* HostToClient::mutable_video_packet() {
  
  if (video_packet_ == NULL) {
    video_packet_ = new ::aspia::proto::VideoPacket;
  }
  // @@protoc_insertion_point(field_mutable:aspia.proto.desktop.HostToClient.video_packet)
  return video_packet_;
}
::aspia::proto::VideoPacket* HostToClient::release_video_packet() {
  // @@protoc_insertion_point(field_release:aspia.proto.desktop.HostToClient.video_packet)
  
  ::aspia::proto::VideoPacket* temp = video_packet_;
  video_packet_ = NULL;
  return temp;
}
void HostToClient::set_allocated_video_packet(::aspia::proto::VideoPacket* video_packet) {
  delete video_packet_;
  video_packet_ = video_packet;
  if (video_packet) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.desktop.HostToClient.video_packet)
}

// .aspia.proto.CursorShape cursor_shape = 2;
bool HostToClient::has_cursor_shape() const {
  return this != internal_default_instance() && cursor_shape_ != NULL;
}
void HostToClient::clear_cursor_shape() {
  if (GetArenaNoVirtual() == NULL && cursor_shape_ != NULL) delete cursor_shape_;
  cursor_shape_ = NULL;
}
const ::aspia::proto::CursorShape& HostToClient::cursor_shape() const {
  // @@protoc_insertion_point(field_get:aspia.proto.desktop.HostToClient.cursor_shape)
  return cursor_shape_ != NULL ? *cursor_shape_
                         : *::aspia::proto::CursorShape::internal_default_instance();
}
::aspia::proto::CursorShape* HostToClient::mutable_cursor_shape() {
  
  if (cursor_shape_ == NULL) {
    cursor_shape_ = new ::aspia::proto::CursorShape;
  }
  // @@protoc_insertion_point(field_mutable:aspia.proto.desktop.HostToClient.cursor_shape)
  return cursor_shape_;
}
::aspia::proto::CursorShape* HostToClient::release_cursor_shape() {
  // @@protoc_insertion_point(field_release:aspia.proto.desktop.HostToClient.cursor_shape)
  
  ::aspia::proto::CursorShape* temp = cursor_shape_;
  cursor_shape_ = NULL;
  return temp;
}
void HostToClient::set_allocated_cursor_shape(::aspia::proto::CursorShape* cursor_shape) {
  delete cursor_shape_;
  cursor_shape_ = cursor_shape;
  if (cursor_shape) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.desktop.HostToClient.cursor_shape)
}

// .aspia.proto.ClipboardEvent clipboard_event = 3;
bool HostToClient::has_clipboard_event() const {
  return this != internal_default_instance() && clipboard_event_ != NULL;
}
void HostToClient::clear_clipboard_event() {
  if (GetArenaNoVirtual() == NULL && clipboard_event_ != NULL) delete clipboard_event_;
  clipboard_event_ = NULL;
}
const ::aspia::proto::ClipboardEvent& HostToClient::clipboard_event() const {
  // @@protoc_insertion_point(field_get:aspia.proto.desktop.HostToClient.clipboard_event)
  return clipboard_event_ != NULL ? *clipboard_event_
                         : *::aspia::proto::ClipboardEvent::internal_default_instance();
}
::aspia::proto::ClipboardEvent* HostToClient::mutable_clipboard_event() {
  
  if (clipboard_event_ == NULL) {
    clipboard_event_ = new ::aspia::proto::ClipboardEvent;
  }
  // @@protoc_insertion_point(field_mutable:aspia.proto.desktop.HostToClient.clipboard_event)
  return clipboard_event_;
}
::aspia::proto::ClipboardEvent* HostToClient::release_clipboard_event() {
  // @@protoc_insertion_point(field_release:aspia.proto.desktop.HostToClient.clipboard_event)
  
  ::aspia::proto::ClipboardEvent* temp = clipboard_event_;
  clipboard_event_ = NULL;
  return temp;
}
void HostToClient::set_allocated_clipboard_event(::aspia::proto::ClipboardEvent* clipboard_event) {
  delete clipboard_event_;
  clipboard_event_ = clipboard_event;
  if (clipboard_event) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.desktop.HostToClient.clipboard_event)
}

// .aspia.proto.DesktopConfigRequest config_request = 4;
bool HostToClient::has_config_request() const {
  return this != internal_default_instance() && config_request_ != NULL;
}
void HostToClient::clear_config_request() {
  if (GetArenaNoVirtual() == NULL && config_request_ != NULL) delete config_request_;
  config_request_ = NULL;
}
const ::aspia::proto::DesktopConfigRequest& HostToClient::config_request() const {
  // @@protoc_insertion_point(field_get:aspia.proto.desktop.HostToClient.config_request)
  return config_request_ != NULL ? *config_request_
                         : *::aspia::proto::DesktopConfigRequest::internal_default_instance();
}
::aspia::proto::DesktopConfigRequest* HostToClient::mutable_config_request() {
  
  if (config_request_ == NULL) {
    config_request_ = new ::aspia::proto::DesktopConfigRequest;
  }
  // @@protoc_insertion_point(field_mutable:aspia.proto.desktop.HostToClient.config_request)
  return config_request_;
}
::aspia::proto::DesktopConfigRequest* HostToClient::release_config_request() {
  // @@protoc_insertion_point(field_release:aspia.proto.desktop.HostToClient.config_request)
  
  ::aspia::proto::DesktopConfigRequest* temp = config_request_;
  config_request_ = NULL;
  return temp;
}
void HostToClient::set_allocated_config_request(::aspia::proto::DesktopConfigRequest* config_request) {
  delete config_request_;
  config_request_ = config_request;
  if (config_request) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.desktop.HostToClient.config_request)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ClientToHost::kPointerEventFieldNumber;
const int ClientToHost::kKeyEventFieldNumber;
const int ClientToHost::kClipboardEventFieldNumber;
const int ClientToHost::kPowerEventFieldNumber;
const int ClientToHost::kConfigFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ClientToHost::ClientToHost()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_desktop_5fsession_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:aspia.proto.desktop.ClientToHost)
}
ClientToHost::ClientToHost(const ClientToHost& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_pointer_event()) {
    pointer_event_ = new ::aspia::proto::PointerEvent(*from.pointer_event_);
  } else {
    pointer_event_ = NULL;
  }
  if (from.has_key_event()) {
    key_event_ = new ::aspia::proto::KeyEvent(*from.key_event_);
  } else {
    key_event_ = NULL;
  }
  if (from.has_clipboard_event()) {
    clipboard_event_ = new ::aspia::proto::ClipboardEvent(*from.clipboard_event_);
  } else {
    clipboard_event_ = NULL;
  }
  if (from.has_power_event()) {
    power_event_ = new ::aspia::proto::PowerEvent(*from.power_event_);
  } else {
    power_event_ = NULL;
  }
  if (from.has_config()) {
    config_ = new ::aspia::proto::DesktopConfig(*from.config_);
  } else {
    config_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:aspia.proto.desktop.ClientToHost)
}

void ClientToHost::SharedCtor() {
  ::memset(&pointer_event_, 0, reinterpret_cast<char*>(&config_) -
    reinterpret_cast<char*>(&pointer_event_) + sizeof(config_));
  _cached_size_ = 0;
}

ClientToHost::~ClientToHost() {
  // @@protoc_insertion_point(destructor:aspia.proto.desktop.ClientToHost)
  SharedDtor();
}

void ClientToHost::SharedDtor() {
  if (this != internal_default_instance()) {
    delete pointer_event_;
  }
  if (this != internal_default_instance()) {
    delete key_event_;
  }
  if (this != internal_default_instance()) {
    delete clipboard_event_;
  }
  if (this != internal_default_instance()) {
    delete power_event_;
  }
  if (this != internal_default_instance()) {
    delete config_;
  }
}

void ClientToHost::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ClientToHost& ClientToHost::default_instance() {
  protobuf_desktop_5fsession_2eproto::InitDefaults();
  return *internal_default_instance();
}

ClientToHost* ClientToHost::New(::google::protobuf::Arena* arena) const {
  ClientToHost* n = new ClientToHost;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ClientToHost::Clear() {
// @@protoc_insertion_point(message_clear_start:aspia.proto.desktop.ClientToHost)
  if (GetArenaNoVirtual() == NULL && pointer_event_ != NULL) {
    delete pointer_event_;
  }
  pointer_event_ = NULL;
  if (GetArenaNoVirtual() == NULL && key_event_ != NULL) {
    delete key_event_;
  }
  key_event_ = NULL;
  if (GetArenaNoVirtual() == NULL && clipboard_event_ != NULL) {
    delete clipboard_event_;
  }
  clipboard_event_ = NULL;
  if (GetArenaNoVirtual() == NULL && power_event_ != NULL) {
    delete power_event_;
  }
  power_event_ = NULL;
  if (GetArenaNoVirtual() == NULL && config_ != NULL) {
    delete config_;
  }
  config_ = NULL;
}

bool ClientToHost::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:aspia.proto.desktop.ClientToHost)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .aspia.proto.PointerEvent pointer_event = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_pointer_event()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .aspia.proto.KeyEvent key_event = 2;
      case 2: {
        if (tag == 18u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_key_event()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .aspia.proto.ClipboardEvent clipboard_event = 3;
      case 3: {
        if (tag == 26u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_clipboard_event()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .aspia.proto.PowerEvent power_event = 4;
      case 4: {
        if (tag == 34u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_power_event()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .aspia.proto.DesktopConfig config = 5;
      case 5: {
        if (tag == 42u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_config()));
        } else {
          goto handle_unusual;
        }
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
  // @@protoc_insertion_point(parse_success:aspia.proto.desktop.ClientToHost)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:aspia.proto.desktop.ClientToHost)
  return false;
#undef DO_
}

void ClientToHost::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:aspia.proto.desktop.ClientToHost)
  // .aspia.proto.PointerEvent pointer_event = 1;
  if (this->has_pointer_event()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, *this->pointer_event_, output);
  }

  // .aspia.proto.KeyEvent key_event = 2;
  if (this->has_key_event()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      2, *this->key_event_, output);
  }

  // .aspia.proto.ClipboardEvent clipboard_event = 3;
  if (this->has_clipboard_event()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      3, *this->clipboard_event_, output);
  }

  // .aspia.proto.PowerEvent power_event = 4;
  if (this->has_power_event()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      4, *this->power_event_, output);
  }

  // .aspia.proto.DesktopConfig config = 5;
  if (this->has_config()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      5, *this->config_, output);
  }

  // @@protoc_insertion_point(serialize_end:aspia.proto.desktop.ClientToHost)
}

size_t ClientToHost::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:aspia.proto.desktop.ClientToHost)
  size_t total_size = 0;

  // .aspia.proto.PointerEvent pointer_event = 1;
  if (this->has_pointer_event()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->pointer_event_);
  }

  // .aspia.proto.KeyEvent key_event = 2;
  if (this->has_key_event()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->key_event_);
  }

  // .aspia.proto.ClipboardEvent clipboard_event = 3;
  if (this->has_clipboard_event()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->clipboard_event_);
  }

  // .aspia.proto.PowerEvent power_event = 4;
  if (this->has_power_event()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->power_event_);
  }

  // .aspia.proto.DesktopConfig config = 5;
  if (this->has_config()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->config_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ClientToHost::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ClientToHost*>(&from));
}

void ClientToHost::MergeFrom(const ClientToHost& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:aspia.proto.desktop.ClientToHost)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_pointer_event()) {
    mutable_pointer_event()->::aspia::proto::PointerEvent::MergeFrom(from.pointer_event());
  }
  if (from.has_key_event()) {
    mutable_key_event()->::aspia::proto::KeyEvent::MergeFrom(from.key_event());
  }
  if (from.has_clipboard_event()) {
    mutable_clipboard_event()->::aspia::proto::ClipboardEvent::MergeFrom(from.clipboard_event());
  }
  if (from.has_power_event()) {
    mutable_power_event()->::aspia::proto::PowerEvent::MergeFrom(from.power_event());
  }
  if (from.has_config()) {
    mutable_config()->::aspia::proto::DesktopConfig::MergeFrom(from.config());
  }
}

void ClientToHost::CopyFrom(const ClientToHost& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:aspia.proto.desktop.ClientToHost)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ClientToHost::IsInitialized() const {
  return true;
}

void ClientToHost::Swap(ClientToHost* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ClientToHost::InternalSwap(ClientToHost* other) {
  std::swap(pointer_event_, other->pointer_event_);
  std::swap(key_event_, other->key_event_);
  std::swap(clipboard_event_, other->clipboard_event_);
  std::swap(power_event_, other->power_event_);
  std::swap(config_, other->config_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string ClientToHost::GetTypeName() const {
  return "aspia.proto.desktop.ClientToHost";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ClientToHost

// .aspia.proto.PointerEvent pointer_event = 1;
bool ClientToHost::has_pointer_event() const {
  return this != internal_default_instance() && pointer_event_ != NULL;
}
void ClientToHost::clear_pointer_event() {
  if (GetArenaNoVirtual() == NULL && pointer_event_ != NULL) delete pointer_event_;
  pointer_event_ = NULL;
}
const ::aspia::proto::PointerEvent& ClientToHost::pointer_event() const {
  // @@protoc_insertion_point(field_get:aspia.proto.desktop.ClientToHost.pointer_event)
  return pointer_event_ != NULL ? *pointer_event_
                         : *::aspia::proto::PointerEvent::internal_default_instance();
}
::aspia::proto::PointerEvent* ClientToHost::mutable_pointer_event() {
  
  if (pointer_event_ == NULL) {
    pointer_event_ = new ::aspia::proto::PointerEvent;
  }
  // @@protoc_insertion_point(field_mutable:aspia.proto.desktop.ClientToHost.pointer_event)
  return pointer_event_;
}
::aspia::proto::PointerEvent* ClientToHost::release_pointer_event() {
  // @@protoc_insertion_point(field_release:aspia.proto.desktop.ClientToHost.pointer_event)
  
  ::aspia::proto::PointerEvent* temp = pointer_event_;
  pointer_event_ = NULL;
  return temp;
}
void ClientToHost::set_allocated_pointer_event(::aspia::proto::PointerEvent* pointer_event) {
  delete pointer_event_;
  pointer_event_ = pointer_event;
  if (pointer_event) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.desktop.ClientToHost.pointer_event)
}

// .aspia.proto.KeyEvent key_event = 2;
bool ClientToHost::has_key_event() const {
  return this != internal_default_instance() && key_event_ != NULL;
}
void ClientToHost::clear_key_event() {
  if (GetArenaNoVirtual() == NULL && key_event_ != NULL) delete key_event_;
  key_event_ = NULL;
}
const ::aspia::proto::KeyEvent& ClientToHost::key_event() const {
  // @@protoc_insertion_point(field_get:aspia.proto.desktop.ClientToHost.key_event)
  return key_event_ != NULL ? *key_event_
                         : *::aspia::proto::KeyEvent::internal_default_instance();
}
::aspia::proto::KeyEvent* ClientToHost::mutable_key_event() {
  
  if (key_event_ == NULL) {
    key_event_ = new ::aspia::proto::KeyEvent;
  }
  // @@protoc_insertion_point(field_mutable:aspia.proto.desktop.ClientToHost.key_event)
  return key_event_;
}
::aspia::proto::KeyEvent* ClientToHost::release_key_event() {
  // @@protoc_insertion_point(field_release:aspia.proto.desktop.ClientToHost.key_event)
  
  ::aspia::proto::KeyEvent* temp = key_event_;
  key_event_ = NULL;
  return temp;
}
void ClientToHost::set_allocated_key_event(::aspia::proto::KeyEvent* key_event) {
  delete key_event_;
  key_event_ = key_event;
  if (key_event) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.desktop.ClientToHost.key_event)
}

// .aspia.proto.ClipboardEvent clipboard_event = 3;
bool ClientToHost::has_clipboard_event() const {
  return this != internal_default_instance() && clipboard_event_ != NULL;
}
void ClientToHost::clear_clipboard_event() {
  if (GetArenaNoVirtual() == NULL && clipboard_event_ != NULL) delete clipboard_event_;
  clipboard_event_ = NULL;
}
const ::aspia::proto::ClipboardEvent& ClientToHost::clipboard_event() const {
  // @@protoc_insertion_point(field_get:aspia.proto.desktop.ClientToHost.clipboard_event)
  return clipboard_event_ != NULL ? *clipboard_event_
                         : *::aspia::proto::ClipboardEvent::internal_default_instance();
}
::aspia::proto::ClipboardEvent* ClientToHost::mutable_clipboard_event() {
  
  if (clipboard_event_ == NULL) {
    clipboard_event_ = new ::aspia::proto::ClipboardEvent;
  }
  // @@protoc_insertion_point(field_mutable:aspia.proto.desktop.ClientToHost.clipboard_event)
  return clipboard_event_;
}
::aspia::proto::ClipboardEvent* ClientToHost::release_clipboard_event() {
  // @@protoc_insertion_point(field_release:aspia.proto.desktop.ClientToHost.clipboard_event)
  
  ::aspia::proto::ClipboardEvent* temp = clipboard_event_;
  clipboard_event_ = NULL;
  return temp;
}
void ClientToHost::set_allocated_clipboard_event(::aspia::proto::ClipboardEvent* clipboard_event) {
  delete clipboard_event_;
  clipboard_event_ = clipboard_event;
  if (clipboard_event) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.desktop.ClientToHost.clipboard_event)
}

// .aspia.proto.PowerEvent power_event = 4;
bool ClientToHost::has_power_event() const {
  return this != internal_default_instance() && power_event_ != NULL;
}
void ClientToHost::clear_power_event() {
  if (GetArenaNoVirtual() == NULL && power_event_ != NULL) delete power_event_;
  power_event_ = NULL;
}
const ::aspia::proto::PowerEvent& ClientToHost::power_event() const {
  // @@protoc_insertion_point(field_get:aspia.proto.desktop.ClientToHost.power_event)
  return power_event_ != NULL ? *power_event_
                         : *::aspia::proto::PowerEvent::internal_default_instance();
}
::aspia::proto::PowerEvent* ClientToHost::mutable_power_event() {
  
  if (power_event_ == NULL) {
    power_event_ = new ::aspia::proto::PowerEvent;
  }
  // @@protoc_insertion_point(field_mutable:aspia.proto.desktop.ClientToHost.power_event)
  return power_event_;
}
::aspia::proto::PowerEvent* ClientToHost::release_power_event() {
  // @@protoc_insertion_point(field_release:aspia.proto.desktop.ClientToHost.power_event)
  
  ::aspia::proto::PowerEvent* temp = power_event_;
  power_event_ = NULL;
  return temp;
}
void ClientToHost::set_allocated_power_event(::aspia::proto::PowerEvent* power_event) {
  delete power_event_;
  power_event_ = power_event;
  if (power_event) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.desktop.ClientToHost.power_event)
}

// .aspia.proto.DesktopConfig config = 5;
bool ClientToHost::has_config() const {
  return this != internal_default_instance() && config_ != NULL;
}
void ClientToHost::clear_config() {
  if (GetArenaNoVirtual() == NULL && config_ != NULL) delete config_;
  config_ = NULL;
}
const ::aspia::proto::DesktopConfig& ClientToHost::config() const {
  // @@protoc_insertion_point(field_get:aspia.proto.desktop.ClientToHost.config)
  return config_ != NULL ? *config_
                         : *::aspia::proto::DesktopConfig::internal_default_instance();
}
::aspia::proto::DesktopConfig* ClientToHost::mutable_config() {
  
  if (config_ == NULL) {
    config_ = new ::aspia::proto::DesktopConfig;
  }
  // @@protoc_insertion_point(field_mutable:aspia.proto.desktop.ClientToHost.config)
  return config_;
}
::aspia::proto::DesktopConfig* ClientToHost::release_config() {
  // @@protoc_insertion_point(field_release:aspia.proto.desktop.ClientToHost.config)
  
  ::aspia::proto::DesktopConfig* temp = config_;
  config_ = NULL;
  return temp;
}
void ClientToHost::set_allocated_config(::aspia::proto::DesktopConfig* config) {
  delete config_;
  config_ = config;
  if (config) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.desktop.ClientToHost.config)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace desktop
}  // namespace proto
}  // namespace aspia

// @@protoc_insertion_point(global_scope)
