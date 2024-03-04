// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Services.proto

#include "Services.pb.h"

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
namespace protobuf
{
}  // namespace protobuf
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_Services_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_Services_2eproto = nullptr;
const ::uint32_t TableStruct_Services_2eproto::offsets[1] = {};
static constexpr ::_pbi::MigrationSchema* schemas = nullptr;
static constexpr ::_pb::Message* const* file_default_instances = nullptr;
const char descriptor_table_protodef_Services_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n\016Services.proto\022\010protobuf\032\025Message2Clie"
    "nts.proto\032\024Message2Server.proto2\363\005\n\020Avai"
    "lableService\0223\n\rTryConnection\022\017.protobuf"
    ".IDMsg\032\021.protobuf.BoolRes\022=\n\tAddPlayer\022\023"
    ".protobuf.PlayerMsg\032\031.protobuf.MessageTo"
    "Client0\001\0227\n\006GetMap\022\025.protobuf.NullReques"
    "t\032\026.protobuf.MessageOfMap\022,\n\004Move\022\021.prot"
    "obuf.MoveMsg\032\021.protobuf.MoveRes\0222\n\007Recov"
    "er\022\024.protobuf.RecoverMsg\032\021.protobuf.Bool"
    "Res\022-\n\007Produce\022\017.protobuf.IDMsg\032\021.protob"
    "uf.BoolRes\0224\n\007Rebuild\022\026.protobuf.Constru"
    "ctMsg\032\021.protobuf.BoolRes\0226\n\tConstruct\022\026."
    "protobuf.ConstructMsg\032\021.protobuf.BoolRes"
    "\0220\n\006Attack\022\023.protobuf.AttackMsg\032\021.protob"
    "uf.BoolRes\022,\n\004Send\022\021.protobuf.SendMsg\032\021."
    "protobuf.BoolRes\0228\n\rInstallModule\022\024.prot"
    "obuf.InstallMsg\032\021.protobuf.BoolRes\022-\n\007Re"
    "cycle\022\017.protobuf.IDMsg\032\021.protobuf.BoolRe"
    "s\0226\n\tBuildShip\022\026.protobuf.BuildShipMsg\032\021"
    ".protobuf.BoolRes\0222\n\014EndAllAction\022\017.prot"
    "obuf.IDMsg\032\021.protobuf.BoolResb\006proto3"};
static const ::_pbi::DescriptorTable* const descriptor_table_Services_2eproto_deps[2] =
    {
        &::descriptor_table_Message2Clients_2eproto,
        &::descriptor_table_Message2Server_2eproto,
};
static ::absl::once_flag descriptor_table_Services_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_Services_2eproto = {
    false,
    false,
    837,
    descriptor_table_protodef_Services_2eproto,
    "Services.proto",
    &descriptor_table_Services_2eproto_once,
    descriptor_table_Services_2eproto_deps,
    2,
    0,
    schemas,
    file_default_instances,
    TableStruct_Services_2eproto::offsets,
    nullptr,
    file_level_enum_descriptors_Services_2eproto,
    file_level_service_descriptors_Services_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_Services_2eproto_getter()
{
    return &descriptor_table_Services_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_Services_2eproto(&descriptor_table_Services_2eproto);
namespace protobuf
{
    // @@protoc_insertion_point(namespace_scope)
}  // namespace protobuf
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
