/* This file was generated by upb_generator from the input file:
 *
 *     envoy/config/core/v3/protocol.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include "upb/reflection/def.h"
#include "envoy/config/core/v3/protocol.upbdefs.h"
#include "envoy/config/core/v3/protocol.upb_minitable.h"

extern _upb_DefPool_Init envoy_config_core_v3_extension_proto_upbdefinit;
extern _upb_DefPool_Init envoy_type_v3_percent_proto_upbdefinit;
extern _upb_DefPool_Init google_protobuf_duration_proto_upbdefinit;
extern _upb_DefPool_Init google_protobuf_wrappers_proto_upbdefinit;
extern _upb_DefPool_Init xds_annotations_v3_status_proto_upbdefinit;
extern _upb_DefPool_Init envoy_annotations_deprecation_proto_upbdefinit;
extern _upb_DefPool_Init udpa_annotations_status_proto_upbdefinit;
extern _upb_DefPool_Init udpa_annotations_versioning_proto_upbdefinit;
extern _upb_DefPool_Init validate_validate_proto_upbdefinit;
static const char descriptor[6708] = {'\n', '#', 'e', 'n', 'v', 'o', 'y', '/', 'c', 'o', 'n', 'f', 'i', 'g', '/', 'c', 'o', 'r', 'e', '/', 'v', '3', '/', 'p', 'r', 
'o', 't', 'o', 'c', 'o', 'l', '.', 'p', 'r', 'o', 't', 'o', '\022', '\024', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 
'g', '.', 'c', 'o', 'r', 'e', '.', 'v', '3', '\032', '$', 'e', 'n', 'v', 'o', 'y', '/', 'c', 'o', 'n', 'f', 'i', 'g', '/', 'c', 
'o', 'r', 'e', '/', 'v', '3', '/', 'e', 'x', 't', 'e', 'n', 's', 'i', 'o', 'n', '.', 'p', 'r', 'o', 't', 'o', '\032', '\033', 'e', 
'n', 'v', 'o', 'y', '/', 't', 'y', 'p', 'e', '/', 'v', '3', '/', 'p', 'e', 'r', 'c', 'e', 'n', 't', '.', 'p', 'r', 'o', 't', 
'o', '\032', '\036', 'g', 'o', 'o', 'g', 'l', 'e', '/', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '/', 'd', 'u', 'r', 'a', 't', 'i', 
'o', 'n', '.', 'p', 'r', 'o', 't', 'o', '\032', '\036', 'g', 'o', 'o', 'g', 'l', 'e', '/', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', 
'/', 'w', 'r', 'a', 'p', 'p', 'e', 'r', 's', '.', 'p', 'r', 'o', 't', 'o', '\032', '\037', 'x', 'd', 's', '/', 'a', 'n', 'n', 'o', 
't', 'a', 't', 'i', 'o', 'n', 's', '/', 'v', '3', '/', 's', 't', 'a', 't', 'u', 's', '.', 'p', 'r', 'o', 't', 'o', '\032', '#', 
'e', 'n', 'v', 'o', 'y', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 'd', 'e', 'p', 'r', 'e', 'c', 'a', 
't', 'i', 'o', 'n', '.', 'p', 'r', 'o', 't', 'o', '\032', '\035', 'u', 'd', 'p', 'a', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 
'o', 'n', 's', '/', 's', 't', 'a', 't', 'u', 's', '.', 'p', 'r', 'o', 't', 'o', '\032', '!', 'u', 'd', 'p', 'a', '/', 'a', 'n', 
'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 'v', 'e', 'r', 's', 'i', 'o', 'n', 'i', 'n', 'g', '.', 'p', 'r', 'o', 't', 
'o', '\032', '\027', 'v', 'a', 'l', 'i', 'd', 'a', 't', 'e', '/', 'v', 'a', 'l', 'i', 'd', 'a', 't', 'e', '.', 'p', 'r', 'o', 't', 
'o', '\"', 'A', '\n', '\022', 'T', 'c', 'p', 'P', 'r', 'o', 't', 'o', 'c', 'o', 'l', 'O', 'p', 't', 'i', 'o', 'n', 's', ':', '+', 
'\232', '\305', '\210', '\036', '&', '\n', '$', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'p', 'i', '.', 'v', '2', '.', 'c', 'o', 'r', 'e', '.', 
'T', 'c', 'p', 'P', 'r', 'o', 't', 'o', 'c', 'o', 'l', 'O', 'p', 't', 'i', 'o', 'n', 's', '\"', '\267', '\001', '\n', '\025', 'Q', 'u', 
'i', 'c', 'K', 'e', 'e', 'p', 'A', 'l', 'i', 'v', 'e', 'S', 'e', 't', 't', 'i', 'n', 'g', 's', '\022', 'J', '\n', '\014', 'm', 'a', 
'x', '_', 'i', 'n', 't', 'e', 'r', 'v', 'a', 'l', '\030', '\001', ' ', '\001', '(', '\013', '2', '\031', '.', 'g', 'o', 'o', 'g', 'l', 'e', 
'.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'D', 'u', 'r', 'a', 't', 'i', 'o', 'n', 'B', '\014', '\372', 'B', '\t', '\252', '\001', 
'\006', '\"', '\000', '2', '\002', '\010', '\001', 'R', '\013', 'm', 'a', 'x', 'I', 'n', 't', 'e', 'r', 'v', 'a', 'l', '\022', 'R', '\n', '\020', 'i', 
'n', 'i', 't', 'i', 'a', 'l', '_', 'i', 'n', 't', 'e', 'r', 'v', 'a', 'l', '\030', '\002', ' ', '\001', '(', '\013', '2', '\031', '.', 'g', 
'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'D', 'u', 'r', 'a', 't', 'i', 'o', 'n', 'B', '\014', 
'\372', 'B', '\t', '\252', '\001', '\006', '\"', '\000', '2', '\002', '\010', '\001', 'R', '\017', 'i', 'n', 'i', 't', 'i', 'a', 'l', 'I', 'n', 't', 'e', 
'r', 'v', 'a', 'l', '\"', '\250', '\004', '\n', '\023', 'Q', 'u', 'i', 'c', 'P', 'r', 'o', 't', 'o', 'c', 'o', 'l', 'O', 'p', 't', 'i', 
'o', 'n', 's', '\022', '[', '\n', '\026', 'm', 'a', 'x', '_', 'c', 'o', 'n', 'c', 'u', 'r', 'r', 'e', 'n', 't', '_', 's', 't', 'r', 
'e', 'a', 'm', 's', '\030', '\001', ' ', '\001', '(', '\013', '2', '\034', '.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 
'b', 'u', 'f', '.', 'U', 'I', 'n', 't', '3', '2', 'V', 'a', 'l', 'u', 'e', 'B', '\007', '\372', 'B', '\004', '*', '\002', '(', '\001', 'R', 
'\024', 'm', 'a', 'x', 'C', 'o', 'n', 'c', 'u', 'r', 'r', 'e', 'n', 't', 'S', 't', 'r', 'e', 'a', 'm', 's', '\022', 'g', '\n', '\032', 
'i', 'n', 'i', 't', 'i', 'a', 'l', '_', 's', 't', 'r', 'e', 'a', 'm', '_', 'w', 'i', 'n', 'd', 'o', 'w', '_', 's', 'i', 'z', 
'e', '\030', '\002', ' ', '\001', '(', '\013', '2', '\034', '.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', 
'.', 'U', 'I', 'n', 't', '3', '2', 'V', 'a', 'l', 'u', 'e', 'B', '\014', '\372', 'B', '\t', '*', '\007', '\030', '\200', '\200', '\200', '\010', '(', 
'\001', 'R', '\027', 'i', 'n', 'i', 't', 'i', 'a', 'l', 'S', 't', 'r', 'e', 'a', 'm', 'W', 'i', 'n', 'd', 'o', 'w', 'S', 'i', 'z', 
'e', '\022', 'o', '\n', '\036', 'i', 'n', 'i', 't', 'i', 'a', 'l', '_', 'c', 'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', '_', 'w', 
'i', 'n', 'd', 'o', 'w', '_', 's', 'i', 'z', 'e', '\030', '\003', ' ', '\001', '(', '\013', '2', '\034', '.', 'g', 'o', 'o', 'g', 'l', 'e', 
'.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'U', 'I', 'n', 't', '3', '2', 'V', 'a', 'l', 'u', 'e', 'B', '\014', '\372', 'B', 
'\t', '*', '\007', '\030', '\200', '\200', '\200', '\014', '(', '\001', 'R', '\033', 'i', 'n', 'i', 't', 'i', 'a', 'l', 'C', 'o', 'n', 'n', 'e', 'c', 
't', 'i', 'o', 'n', 'W', 'i', 'n', 'd', 'o', 'w', 'S', 'i', 'z', 'e', '\022', 'z', '\n', '&', 'n', 'u', 'm', '_', 't', 'i', 'm', 
'e', 'o', 'u', 't', 's', '_', 't', 'o', '_', 't', 'r', 'i', 'g', 'g', 'e', 'r', '_', 'p', 'o', 'r', 't', '_', 'm', 'i', 'g', 
'r', 'a', 't', 'i', 'o', 'n', '\030', '\004', ' ', '\001', '(', '\013', '2', '\034', '.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 
't', 'o', 'b', 'u', 'f', '.', 'U', 'I', 'n', 't', '3', '2', 'V', 'a', 'l', 'u', 'e', 'B', '\t', '\372', 'B', '\006', '*', '\004', '\030', 
'\005', '(', '\000', 'R', '!', 'n', 'u', 'm', 'T', 'i', 'm', 'e', 'o', 'u', 't', 's', 'T', 'o', 'T', 'r', 'i', 'g', 'g', 'e', 'r', 
'P', 'o', 'r', 't', 'M', 'i', 'g', 'r', 'a', 't', 'i', 'o', 'n', '\022', '^', '\n', '\024', 'c', 'o', 'n', 'n', 'e', 'c', 't', 'i', 
'o', 'n', '_', 'k', 'e', 'e', 'p', 'a', 'l', 'i', 'v', 'e', '\030', '\005', ' ', '\001', '(', '\013', '2', '+', '.', 'e', 'n', 'v', 'o', 
'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'c', 'o', 'r', 'e', '.', 'v', '3', '.', 'Q', 'u', 'i', 'c', 'K', 'e', 'e', 'p', 
'A', 'l', 'i', 'v', 'e', 'S', 'e', 't', 't', 'i', 'n', 'g', 's', 'R', '\023', 'c', 'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', 
'K', 'e', 'e', 'p', 'a', 'l', 'i', 'v', 'e', '\"', '\344', '\001', '\n', '\033', 'U', 'p', 's', 't', 'r', 'e', 'a', 'm', 'H', 't', 't', 
'p', 'P', 'r', 'o', 't', 'o', 'c', 'o', 'l', 'O', 'p', 't', 'i', 'o', 'n', 's', '\022', '\031', '\n', '\010', 'a', 'u', 't', 'o', '_', 
's', 'n', 'i', '\030', '\001', ' ', '\001', '(', '\010', 'R', '\007', 'a', 'u', 't', 'o', 'S', 'n', 'i', '\022', '.', '\n', '\023', 'a', 'u', 't', 
'o', '_', 's', 'a', 'n', '_', 'v', 'a', 'l', 'i', 'd', 'a', 't', 'i', 'o', 'n', '\030', '\002', ' ', '\001', '(', '\010', 'R', '\021', 'a', 
'u', 't', 'o', 'S', 'a', 'n', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'i', 'o', 'n', '\022', 'D', '\n', '\030', 'o', 'v', 'e', 'r', 'r', 
'i', 'd', 'e', '_', 'a', 'u', 't', 'o', '_', 's', 'n', 'i', '_', 'h', 'e', 'a', 'd', 'e', 'r', '\030', '\003', ' ', '\001', '(', '\t', 
'B', '\013', '\372', 'B', '\010', 'r', '\006', '\300', '\001', '\001', '\320', '\001', '\001', 'R', '\025', 'o', 'v', 'e', 'r', 'r', 'i', 'd', 'e', 'A', 'u', 
't', 'o', 'S', 'n', 'i', 'H', 'e', 'a', 'd', 'e', 'r', ':', '4', '\232', '\305', '\210', '\036', '/', '\n', '-', 'e', 'n', 'v', 'o', 'y', 
'.', 'a', 'p', 'i', '.', 'v', '2', '.', 'c', 'o', 'r', 'e', '.', 'U', 'p', 's', 't', 'r', 'e', 'a', 'm', 'H', 't', 't', 'p', 
'P', 'r', 'o', 't', 'o', 'c', 'o', 'l', 'O', 'p', 't', 'i', 'o', 'n', 's', '\"', '\206', '\004', '\n', '\036', 'A', 'l', 't', 'e', 'r', 
'n', 'a', 't', 'e', 'P', 'r', 'o', 't', 'o', 'c', 'o', 'l', 's', 'C', 'a', 'c', 'h', 'e', 'O', 'p', 't', 'i', 'o', 'n', 's', 
'\022', '\033', '\n', '\004', 'n', 'a', 'm', 'e', '\030', '\001', ' ', '\001', '(', '\t', 'B', '\007', '\372', 'B', '\004', 'r', '\002', '\020', '\001', 'R', '\004', 
'n', 'a', 'm', 'e', '\022', 'F', '\n', '\013', 'm', 'a', 'x', '_', 'e', 'n', 't', 'r', 'i', 'e', 's', '\030', '\002', ' ', '\001', '(', '\013', 
'2', '\034', '.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'U', 'I', 'n', 't', '3', '2', 
'V', 'a', 'l', 'u', 'e', 'B', '\007', '\372', 'B', '\004', '*', '\002', ' ', '\000', 'R', '\n', 'm', 'a', 'x', 'E', 'n', 't', 'r', 'i', 'e', 
's', '\022', '_', '\n', '\026', 'k', 'e', 'y', '_', 'v', 'a', 'l', 'u', 'e', '_', 's', 't', 'o', 'r', 'e', '_', 'c', 'o', 'n', 'f', 
'i', 'g', '\030', '\003', ' ', '\001', '(', '\013', '2', '*', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'c', 
'o', 'r', 'e', '.', 'v', '3', '.', 'T', 'y', 'p', 'e', 'd', 'E', 'x', 't', 'e', 'n', 's', 'i', 'o', 'n', 'C', 'o', 'n', 'f', 
'i', 'g', 'R', '\023', 'k', 'e', 'y', 'V', 'a', 'l', 'u', 'e', 'S', 't', 'o', 'r', 'e', 'C', 'o', 'n', 'f', 'i', 'g', '\022', '\204', 
'\001', '\n', '\024', 'p', 'r', 'e', 'p', 'o', 'p', 'u', 'l', 'a', 't', 'e', 'd', '_', 'e', 'n', 't', 'r', 'i', 'e', 's', '\030', '\004', 
' ', '\003', '(', '\013', '2', 'Q', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'c', 'o', 'r', 'e', '.', 
'v', '3', '.', 'A', 'l', 't', 'e', 'r', 'n', 'a', 't', 'e', 'P', 'r', 'o', 't', 'o', 'c', 'o', 'l', 's', 'C', 'a', 'c', 'h', 
'e', 'O', 'p', 't', 'i', 'o', 'n', 's', '.', 'A', 'l', 't', 'e', 'r', 'n', 'a', 't', 'e', 'P', 'r', 'o', 't', 'o', 'c', 'o', 
'l', 's', 'C', 'a', 'c', 'h', 'e', 'E', 'n', 't', 'r', 'y', 'R', '\023', 'p', 'r', 'e', 'p', 'o', 'p', 'u', 'l', 'a', 't', 'e', 
'd', 'E', 'n', 't', 'r', 'i', 'e', 's', '\022', '-', '\n', '\022', 'c', 'a', 'n', 'o', 'n', 'i', 'c', 'a', 'l', '_', 's', 'u', 'f', 
'f', 'i', 'x', 'e', 's', '\030', '\005', ' ', '\003', '(', '\t', 'R', '\021', 'c', 'a', 'n', 'o', 'n', 'i', 'c', 'a', 'l', 'S', 'u', 'f', 
'f', 'i', 'x', 'e', 's', '\032', 'h', '\n', '\034', 'A', 'l', 't', 'e', 'r', 'n', 'a', 't', 'e', 'P', 'r', 'o', 't', 'o', 'c', 'o', 
'l', 's', 'C', 'a', 'c', 'h', 'e', 'E', 'n', 't', 'r', 'y', '\022', '\'', '\n', '\010', 'h', 'o', 's', 't', 'n', 'a', 'm', 'e', '\030', 
'\001', ' ', '\001', '(', '\t', 'B', '\013', '\372', 'B', '\010', 'r', '\006', '\300', '\001', '\001', '\320', '\001', '\001', 'R', '\010', 'h', 'o', 's', 't', 'n', 
'a', 'm', 'e', '\022', '\037', '\n', '\004', 'p', 'o', 'r', 't', '\030', '\002', ' ', '\001', '(', '\r', 'B', '\013', '\372', 'B', '\010', '*', '\006', '\020', 
'\377', '\377', '\003', ' ', '\000', 'R', '\004', 'p', 'o', 'r', 't', '\"', '\257', '\005', '\n', '\023', 'H', 't', 't', 'p', 'P', 'r', 'o', 't', 'o', 
'c', 'o', 'l', 'O', 'p', 't', 'i', 'o', 'n', 's', '\022', '<', '\n', '\014', 'i', 'd', 'l', 'e', '_', 't', 'i', 'm', 'e', 'o', 'u', 
't', '\030', '\001', ' ', '\001', '(', '\013', '2', '\031', '.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', 
'.', 'D', 'u', 'r', 'a', 't', 'i', 'o', 'n', 'R', '\013', 'i', 'd', 'l', 'e', 'T', 'i', 'm', 'e', 'o', 'u', 't', '\022', 'Q', '\n', 
'\027', 'm', 'a', 'x', '_', 'c', 'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', '_', 'd', 'u', 'r', 'a', 't', 'i', 'o', 'n', '\030', 
'\003', ' ', '\001', '(', '\013', '2', '\031', '.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'D', 
'u', 'r', 'a', 't', 'i', 'o', 'n', 'R', '\025', 'm', 'a', 'x', 'C', 'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', 'D', 'u', 'r', 
'a', 't', 'i', 'o', 'n', '\022', 'Q', '\n', '\021', 'm', 'a', 'x', '_', 'h', 'e', 'a', 'd', 'e', 'r', 's', '_', 'c', 'o', 'u', 'n', 
't', '\030', '\002', ' ', '\001', '(', '\013', '2', '\034', '.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', 
'.', 'U', 'I', 'n', 't', '3', '2', 'V', 'a', 'l', 'u', 'e', 'B', '\007', '\372', 'B', '\004', '*', '\002', '(', '\001', 'R', '\017', 'm', 'a', 
'x', 'H', 'e', 'a', 'd', 'e', 'r', 's', 'C', 'o', 'u', 'n', 't', '\022', 'I', '\n', '\023', 'm', 'a', 'x', '_', 's', 't', 'r', 'e', 
'a', 'm', '_', 'd', 'u', 'r', 'a', 't', 'i', 'o', 'n', '\030', '\004', ' ', '\001', '(', '\013', '2', '\031', '.', 'g', 'o', 'o', 'g', 'l', 
'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'D', 'u', 'r', 'a', 't', 'i', 'o', 'n', 'R', '\021', 'm', 'a', 'x', 'S', 
't', 'r', 'e', 'a', 'm', 'D', 'u', 'r', 'a', 't', 'i', 'o', 'n', '\022', '\215', '\001', '\n', '\037', 'h', 'e', 'a', 'd', 'e', 'r', 's', 
'_', 'w', 'i', 't', 'h', '_', 'u', 'n', 'd', 'e', 'r', 's', 'c', 'o', 'r', 'e', 's', '_', 'a', 'c', 't', 'i', 'o', 'n', '\030', 
'\005', ' ', '\001', '(', '\016', '2', 'F', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'c', 'o', 'r', 'e', 
'.', 'v', '3', '.', 'H', 't', 't', 'p', 'P', 'r', 'o', 't', 'o', 'c', 'o', 'l', 'O', 'p', 't', 'i', 'o', 'n', 's', '.', 'H', 
'e', 'a', 'd', 'e', 'r', 's', 'W', 'i', 't', 'h', 'U', 'n', 'd', 'e', 'r', 's', 'c', 'o', 'r', 'e', 's', 'A', 'c', 't', 'i', 
'o', 'n', 'R', '\034', 'h', 'e', 'a', 'd', 'e', 'r', 's', 'W', 'i', 't', 'h', 'U', 'n', 'd', 'e', 'r', 's', 'c', 'o', 'r', 'e', 
's', 'A', 'c', 't', 'i', 'o', 'n', '\022', '[', '\n', '\033', 'm', 'a', 'x', '_', 'r', 'e', 'q', 'u', 'e', 's', 't', 's', '_', 'p', 
'e', 'r', '_', 'c', 'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', '\030', '\006', ' ', '\001', '(', '\013', '2', '\034', '.', 'g', 'o', 'o', 
'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'U', 'I', 'n', 't', '3', '2', 'V', 'a', 'l', 'u', 'e', 'R', 
'\030', 'm', 'a', 'x', 'R', 'e', 'q', 'u', 'e', 's', 't', 's', 'P', 'e', 'r', 'C', 'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', 
'\"', 'N', '\n', '\034', 'H', 'e', 'a', 'd', 'e', 'r', 's', 'W', 'i', 't', 'h', 'U', 'n', 'd', 'e', 'r', 's', 'c', 'o', 'r', 'e', 
's', 'A', 'c', 't', 'i', 'o', 'n', '\022', '\t', '\n', '\005', 'A', 'L', 'L', 'O', 'W', '\020', '\000', '\022', '\022', '\n', '\016', 'R', 'E', 'J', 
'E', 'C', 'T', '_', 'R', 'E', 'Q', 'U', 'E', 'S', 'T', '\020', '\001', '\022', '\017', '\n', '\013', 'D', 'R', 'O', 'P', '_', 'H', 'E', 'A', 
'D', 'E', 'R', '\020', '\002', ':', ',', '\232', '\305', '\210', '\036', '\'', '\n', '%', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'p', 'i', '.', 'v', 
'2', '.', 'c', 'o', 'r', 'e', '.', 'H', 't', 't', 'p', 'P', 'r', 'o', 't', 'o', 'c', 'o', 'l', 'O', 'p', 't', 'i', 'o', 'n', 
's', '\"', '\223', '\t', '\n', '\024', 'H', 't', 't', 'p', '1', 'P', 'r', 'o', 't', 'o', 'c', 'o', 'l', 'O', 'p', 't', 'i', 'o', 'n', 
's', '\022', 'H', '\n', '\022', 'a', 'l', 'l', 'o', 'w', '_', 'a', 'b', 's', 'o', 'l', 'u', 't', 'e', '_', 'u', 'r', 'l', '\030', '\001', 
' ', '\001', '(', '\013', '2', '\032', '.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'B', 'o', 
'o', 'l', 'V', 'a', 'l', 'u', 'e', 'R', '\020', 'a', 'l', 'l', 'o', 'w', 'A', 'b', 's', 'o', 'l', 'u', 't', 'e', 'U', 'r', 'l', 
'\022', '$', '\n', '\016', 'a', 'c', 'c', 'e', 'p', 't', '_', 'h', 't', 't', 'p', '_', '1', '0', '\030', '\002', ' ', '\001', '(', '\010', 'R', 
'\014', 'a', 'c', 'c', 'e', 'p', 't', 'H', 't', 't', 'p', '1', '0', '\022', '6', '\n', '\030', 'd', 'e', 'f', 'a', 'u', 'l', 't', '_', 
'h', 'o', 's', 't', '_', 'f', 'o', 'r', '_', 'h', 't', 't', 'p', '_', '1', '0', '\030', '\003', ' ', '\001', '(', '\t', 'R', '\024', 'd', 
'e', 'f', 'a', 'u', 'l', 't', 'H', 'o', 's', 't', 'F', 'o', 'r', 'H', 't', 't', 'p', '1', '0', '\022', 'f', '\n', '\021', 'h', 'e', 
'a', 'd', 'e', 'r', '_', 'k', 'e', 'y', '_', 'f', 'o', 'r', 'm', 'a', 't', '\030', '\004', ' ', '\001', '(', '\013', '2', ':', '.', 'e', 
'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'c', 'o', 'r', 'e', '.', 'v', '3', '.', 'H', 't', 't', 'p', '1', 
'P', 'r', 'o', 't', 'o', 'c', 'o', 'l', 'O', 'p', 't', 'i', 'o', 'n', 's', '.', 'H', 'e', 'a', 'd', 'e', 'r', 'K', 'e', 'y', 
'F', 'o', 'r', 'm', 'a', 't', 'R', '\017', 'h', 'e', 'a', 'd', 'e', 'r', 'K', 'e', 'y', 'F', 'o', 'r', 'm', 'a', 't', '\022', '\'', 
'\n', '\017', 'e', 'n', 'a', 'b', 'l', 'e', '_', 't', 'r', 'a', 'i', 'l', 'e', 'r', 's', '\030', '\005', ' ', '\001', '(', '\010', 'R', '\016', 
'e', 'n', 'a', 'b', 'l', 'e', 'T', 'r', 'a', 'i', 'l', 'e', 'r', 's', '\022', '0', '\n', '\024', 'a', 'l', 'l', 'o', 'w', '_', 'c', 
'h', 'u', 'n', 'k', 'e', 'd', '_', 'l', 'e', 'n', 'g', 't', 'h', '\030', '\006', ' ', '\001', '(', '\010', 'R', '\022', 'a', 'l', 'l', 'o', 
'w', 'C', 'h', 'u', 'n', 'k', 'e', 'd', 'L', 'e', 'n', 'g', 't', 'h', '\022', 'z', '\n', '-', 'o', 'v', 'e', 'r', 'r', 'i', 'd', 
'e', '_', 's', 't', 'r', 'e', 'a', 'm', '_', 'e', 'r', 'r', 'o', 'r', '_', 'o', 'n', '_', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 
'_', 'h', 't', 't', 'p', '_', 'm', 'e', 's', 's', 'a', 'g', 'e', '\030', '\007', ' ', '\001', '(', '\013', '2', '\032', '.', 'g', 'o', 'o', 
'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'B', 'o', 'o', 'l', 'V', 'a', 'l', 'u', 'e', 'R', '\'', 'o', 
'v', 'e', 'r', 'r', 'i', 'd', 'e', 'S', 't', 'r', 'e', 'a', 'm', 'E', 'r', 'r', 'o', 'r', 'O', 'n', 'I', 'n', 'v', 'a', 'l', 
'i', 'd', 'H', 't', 't', 'p', 'M', 'e', 's', 's', 'a', 'g', 'e', '\022', '7', '\n', '\030', 's', 'e', 'n', 'd', '_', 'f', 'u', 'l', 
'l', 'y', '_', 'q', 'u', 'a', 'l', 'i', 'f', 'i', 'e', 'd', '_', 'u', 'r', 'l', '\030', '\010', ' ', '\001', '(', '\010', 'R', '\025', 's', 
'e', 'n', 'd', 'F', 'u', 'l', 'l', 'y', 'Q', 'u', 'a', 'l', 'i', 'f', 'i', 'e', 'd', 'U', 'r', 'l', '\022', 'N', '\n', '\020', 'u', 
's', 'e', '_', 'b', 'a', 'l', 's', 'a', '_', 'p', 'a', 'r', 's', 'e', 'r', '\030', '\t', ' ', '\001', '(', '\013', '2', '\032', '.', 'g', 
'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'B', 'o', 'o', 'l', 'V', 'a', 'l', 'u', 'e', 'B', 
'\010', '\322', '\306', '\244', '\341', '\006', '\002', '\010', '\001', 'R', '\016', 'u', 's', 'e', 'B', 'a', 'l', 's', 'a', 'P', 'a', 'r', 's', 'e', 'r', 
'\022', ':', '\n', '\024', 'a', 'l', 'l', 'o', 'w', '_', 'c', 'u', 's', 't', 'o', 'm', '_', 'm', 'e', 't', 'h', 'o', 'd', 's', '\030', 
'\n', ' ', '\001', '(', '\010', 'B', '\010', '\322', '\306', '\244', '\341', '\006', '\002', '\010', '\001', 'R', '\022', 'a', 'l', 'l', 'o', 'w', 'C', 'u', 's', 
't', 'o', 'm', 'M', 'e', 't', 'h', 'o', 'd', 's', '\032', '\237', '\003', '\n', '\017', 'H', 'e', 'a', 'd', 'e', 'r', 'K', 'e', 'y', 'F', 
'o', 'r', 'm', 'a', 't', '\022', 'x', '\n', '\021', 'p', 'r', 'o', 'p', 'e', 'r', '_', 'c', 'a', 's', 'e', '_', 'w', 'o', 'r', 'd', 
's', '\030', '\001', ' ', '\001', '(', '\013', '2', 'J', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'c', 'o', 
'r', 'e', '.', 'v', '3', '.', 'H', 't', 't', 'p', '1', 'P', 'r', 'o', 't', 'o', 'c', 'o', 'l', 'O', 'p', 't', 'i', 'o', 'n', 
's', '.', 'H', 'e', 'a', 'd', 'e', 'r', 'K', 'e', 'y', 'F', 'o', 'r', 'm', 'a', 't', '.', 'P', 'r', 'o', 'p', 'e', 'r', 'C', 
'a', 's', 'e', 'W', 'o', 'r', 'd', 's', 'H', '\000', 'R', '\017', 'p', 'r', 'o', 'p', 'e', 'r', 'C', 'a', 's', 'e', 'W', 'o', 'r', 
'd', 's', '\022', '[', '\n', '\022', 's', 't', 'a', 't', 'e', 'f', 'u', 'l', '_', 'f', 'o', 'r', 'm', 'a', 't', 't', 'e', 'r', '\030', 
'\010', ' ', '\001', '(', '\013', '2', '*', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'c', 'o', 'r', 'e', 
'.', 'v', '3', '.', 'T', 'y', 'p', 'e', 'd', 'E', 'x', 't', 'e', 'n', 's', 'i', 'o', 'n', 'C', 'o', 'n', 'f', 'i', 'g', 'H', 
'\000', 'R', '\021', 's', 't', 'a', 't', 'e', 'f', 'u', 'l', 'F', 'o', 'r', 'm', 'a', 't', 't', 'e', 'r', '\032', '`', '\n', '\017', 'P', 
'r', 'o', 'p', 'e', 'r', 'C', 'a', 's', 'e', 'W', 'o', 'r', 'd', 's', ':', 'M', '\232', '\305', '\210', '\036', 'H', '\n', 'F', 'e', 'n', 
'v', 'o', 'y', '.', 'a', 'p', 'i', '.', 'v', '2', '.', 'c', 'o', 'r', 'e', '.', 'H', 't', 't', 'p', '1', 'P', 'r', 'o', 't', 
'o', 'c', 'o', 'l', 'O', 'p', 't', 'i', 'o', 'n', 's', '.', 'H', 'e', 'a', 'd', 'e', 'r', 'K', 'e', 'y', 'F', 'o', 'r', 'm', 
'a', 't', '.', 'P', 'r', 'o', 'p', 'e', 'r', 'C', 'a', 's', 'e', 'W', 'o', 'r', 'd', 's', ':', '=', '\232', '\305', '\210', '\036', '8', 
'\n', '6', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'p', 'i', '.', 'v', '2', '.', 'c', 'o', 'r', 'e', '.', 'H', 't', 't', 'p', '1', 
'P', 'r', 'o', 't', 'o', 'c', 'o', 'l', 'O', 'p', 't', 'i', 'o', 'n', 's', '.', 'H', 'e', 'a', 'd', 'e', 'r', 'K', 'e', 'y', 
'F', 'o', 'r', 'm', 'a', 't', 'B', '\024', '\n', '\r', 'h', 'e', 'a', 'd', 'e', 'r', '_', 'f', 'o', 'r', 'm', 'a', 't', '\022', '\003', 
'\370', 'B', '\001', ':', '-', '\232', '\305', '\210', '\036', '(', '\n', '&', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'p', 'i', '.', 'v', '2', '.', 
'c', 'o', 'r', 'e', '.', 'H', 't', 't', 'p', '1', 'P', 'r', 'o', 't', 'o', 'c', 'o', 'l', 'O', 'p', 't', 'i', 'o', 'n', 's', 
'\"', '\301', '\002', '\n', '\021', 'K', 'e', 'e', 'p', 'a', 'l', 'i', 'v', 'e', 'S', 'e', 't', 't', 'i', 'n', 'g', 's', '\022', 'C', '\n', 
'\010', 'i', 'n', 't', 'e', 'r', 'v', 'a', 'l', '\030', '\001', ' ', '\001', '(', '\013', '2', '\031', '.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 
'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'D', 'u', 'r', 'a', 't', 'i', 'o', 'n', 'B', '\014', '\372', 'B', '\t', '\252', '\001', '\006', 
'2', '\004', '\020', '\300', '\204', '=', 'R', '\010', 'i', 'n', 't', 'e', 'r', 'v', 'a', 'l', '\022', 'C', '\n', '\007', 't', 'i', 'm', 'e', 'o', 
'u', 't', '\030', '\002', ' ', '\001', '(', '\013', '2', '\031', '.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 
'f', '.', 'D', 'u', 'r', 'a', 't', 'i', 'o', 'n', 'B', '\016', '\372', 'B', '\013', '\252', '\001', '\010', '\010', '\001', '2', '\004', '\020', '\300', '\204', 
'=', 'R', '\007', 't', 'i', 'm', 'e', 'o', 'u', 't', '\022', '?', '\n', '\017', 'i', 'n', 't', 'e', 'r', 'v', 'a', 'l', '_', 'j', 'i', 
't', 't', 'e', 'r', '\030', '\003', ' ', '\001', '(', '\013', '2', '\026', '.', 'e', 'n', 'v', 'o', 'y', '.', 't', 'y', 'p', 'e', '.', 'v', 
'3', '.', 'P', 'e', 'r', 'c', 'e', 'n', 't', 'R', '\016', 'i', 'n', 't', 'e', 'r', 'v', 'a', 'l', 'J', 'i', 't', 't', 'e', 'r', 
'\022', 'a', '\n', '\030', 'c', 'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', '_', 'i', 'd', 'l', 'e', '_', 'i', 'n', 't', 'e', 'r', 
'v', 'a', 'l', '\030', '\004', ' ', '\001', '(', '\013', '2', '\031', '.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 
'u', 'f', '.', 'D', 'u', 'r', 'a', 't', 'i', 'o', 'n', 'B', '\014', '\372', 'B', '\t', '\252', '\001', '\006', '2', '\004', '\020', '\300', '\204', '=', 
'R', '\026', 'c', 'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', 'I', 'd', 'l', 'e', 'I', 'n', 't', 'e', 'r', 'v', 'a', 'l', '\"', 
'\320', '\016', '\n', '\024', 'H', 't', 't', 'p', '2', 'P', 'r', 'o', 't', 'o', 'c', 'o', 'l', 'O', 'p', 't', 'i', 'o', 'n', 's', '\022', 
'F', '\n', '\020', 'h', 'p', 'a', 'c', 'k', '_', 't', 'a', 'b', 'l', 'e', '_', 's', 'i', 'z', 'e', '\030', '\001', ' ', '\001', '(', '\013', 
'2', '\034', '.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'U', 'I', 'n', 't', '3', '2', 
'V', 'a', 'l', 'u', 'e', 'R', '\016', 'h', 'p', 'a', 'c', 'k', 'T', 'a', 'b', 'l', 'e', 'S', 'i', 'z', 'e', '\022', 'a', '\n', '\026', 
'm', 'a', 'x', '_', 'c', 'o', 'n', 'c', 'u', 'r', 'r', 'e', 'n', 't', '_', 's', 't', 'r', 'e', 'a', 'm', 's', '\030', '\002', ' ', 
'\001', '(', '\013', '2', '\034', '.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'U', 'I', 'n', 
't', '3', '2', 'V', 'a', 'l', 'u', 'e', 'B', '\r', '\372', 'B', '\n', '*', '\010', '\030', '\377', '\377', '\377', '\377', '\007', '(', '\001', 'R', '\024', 
'm', 'a', 'x', 'C', 'o', 'n', 'c', 'u', 'r', 'r', 'e', 'n', 't', 'S', 't', 'r', 'e', 'a', 'm', 's', '\022', 'j', '\n', '\032', 'i', 
'n', 'i', 't', 'i', 'a', 'l', '_', 's', 't', 'r', 'e', 'a', 'm', '_', 'w', 'i', 'n', 'd', 'o', 'w', '_', 's', 'i', 'z', 'e', 
'\030', '\003', ' ', '\001', '(', '\013', '2', '\034', '.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 
'U', 'I', 'n', 't', '3', '2', 'V', 'a', 'l', 'u', 'e', 'B', '\017', '\372', 'B', '\014', '*', '\n', '\030', '\377', '\377', '\377', '\377', '\007', '(', 
'\377', '\377', '\003', 'R', '\027', 'i', 'n', 'i', 't', 'i', 'a', 'l', 'S', 't', 'r', 'e', 'a', 'm', 'W', 'i', 'n', 'd', 'o', 'w', 'S', 
'i', 'z', 'e', '\022', 'r', '\n', '\036', 'i', 'n', 'i', 't', 'i', 'a', 'l', '_', 'c', 'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', 
'_', 'w', 'i', 'n', 'd', 'o', 'w', '_', 's', 'i', 'z', 'e', '\030', '\004', ' ', '\001', '(', '\013', '2', '\034', '.', 'g', 'o', 'o', 'g', 
'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'U', 'I', 'n', 't', '3', '2', 'V', 'a', 'l', 'u', 'e', 'B', '\017', 
'\372', 'B', '\014', '*', '\n', '\030', '\377', '\377', '\377', '\377', '\007', '(', '\377', '\377', '\003', 'R', '\033', 'i', 'n', 'i', 't', 'i', 'a', 'l', 'C', 
'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', 'W', 'i', 'n', 'd', 'o', 'w', 'S', 'i', 'z', 'e', '\022', '#', '\n', '\r', 'a', 'l', 
'l', 'o', 'w', '_', 'c', 'o', 'n', 'n', 'e', 'c', 't', '\030', '\005', ' ', '\001', '(', '\010', 'R', '\014', 'a', 'l', 'l', 'o', 'w', 'C', 
'o', 'n', 'n', 'e', 'c', 't', '\022', '%', '\n', '\016', 'a', 'l', 'l', 'o', 'w', '_', 'm', 'e', 't', 'a', 'd', 'a', 't', 'a', '\030', 
'\006', ' ', '\001', '(', '\010', 'R', '\r', 'a', 'l', 'l', 'o', 'w', 'M', 'e', 't', 'a', 'd', 'a', 't', 'a', '\022', 'U', '\n', '\023', 'm', 
'a', 'x', '_', 'o', 'u', 't', 'b', 'o', 'u', 'n', 'd', '_', 'f', 'r', 'a', 'm', 'e', 's', '\030', '\007', ' ', '\001', '(', '\013', '2', 
'\034', '.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'U', 'I', 'n', 't', '3', '2', 'V', 
'a', 'l', 'u', 'e', 'B', '\007', '\372', 'B', '\004', '*', '\002', '(', '\001', 'R', '\021', 'm', 'a', 'x', 'O', 'u', 't', 'b', 'o', 'u', 'n', 
'd', 'F', 'r', 'a', 'm', 'e', 's', '\022', 'd', '\n', '\033', 'm', 'a', 'x', '_', 'o', 'u', 't', 'b', 'o', 'u', 'n', 'd', '_', 'c', 
'o', 'n', 't', 'r', 'o', 'l', '_', 'f', 'r', 'a', 'm', 'e', 's', '\030', '\010', ' ', '\001', '(', '\013', '2', '\034', '.', 'g', 'o', 'o', 
'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'U', 'I', 'n', 't', '3', '2', 'V', 'a', 'l', 'u', 'e', 'B', 
'\007', '\372', 'B', '\004', '*', '\002', '(', '\001', 'R', '\030', 'm', 'a', 'x', 'O', 'u', 't', 'b', 'o', 'u', 'n', 'd', 'C', 'o', 'n', 't', 
'r', 'o', 'l', 'F', 'r', 'a', 'm', 'e', 's', '\022', '\204', '\001', '\n', '1', 'm', 'a', 'x', '_', 'c', 'o', 'n', 's', 'e', 'c', 'u', 
't', 'i', 'v', 'e', '_', 'i', 'n', 'b', 'o', 'u', 'n', 'd', '_', 'f', 'r', 'a', 'm', 'e', 's', '_', 'w', 'i', 't', 'h', '_', 
'e', 'm', 'p', 't', 'y', '_', 'p', 'a', 'y', 'l', 'o', 'a', 'd', '\030', '\t', ' ', '\001', '(', '\013', '2', '\034', '.', 'g', 'o', 'o', 
'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'U', 'I', 'n', 't', '3', '2', 'V', 'a', 'l', 'u', 'e', 'R', 
'+', 'm', 'a', 'x', 'C', 'o', 'n', 's', 'e', 'c', 'u', 't', 'i', 'v', 'e', 'I', 'n', 'b', 'o', 'u', 'n', 'd', 'F', 'r', 'a', 
'm', 'e', 's', 'W', 'i', 't', 'h', 'E', 'm', 'p', 't', 'y', 'P', 'a', 'y', 'l', 'o', 'a', 'd', '\022', 'o', '\n', '&', 'm', 'a', 
'x', '_', 'i', 'n', 'b', 'o', 'u', 'n', 'd', '_', 'p', 'r', 'i', 'o', 'r', 'i', 't', 'y', '_', 'f', 'r', 'a', 'm', 'e', 's', 
'_', 'p', 'e', 'r', '_', 's', 't', 'r', 'e', 'a', 'm', '\030', '\n', ' ', '\001', '(', '\013', '2', '\034', '.', 'g', 'o', 'o', 'g', 'l', 
'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'U', 'I', 'n', 't', '3', '2', 'V', 'a', 'l', 'u', 'e', 'R', '!', 'm', 
'a', 'x', 'I', 'n', 'b', 'o', 'u', 'n', 'd', 'P', 'r', 'i', 'o', 'r', 'i', 't', 'y', 'F', 'r', 'a', 'm', 'e', 's', 'P', 'e', 
'r', 'S', 't', 'r', 'e', 'a', 'm', '\022', '\221', '\001', '\n', '4', 'm', 'a', 'x', '_', 'i', 'n', 'b', 'o', 'u', 'n', 'd', '_', 'w', 
'i', 'n', 'd', 'o', 'w', '_', 'u', 'p', 'd', 'a', 't', 'e', '_', 'f', 'r', 'a', 'm', 'e', 's', '_', 'p', 'e', 'r', '_', 'd', 
'a', 't', 'a', '_', 'f', 'r', 'a', 'm', 'e', '_', 's', 'e', 'n', 't', '\030', '\013', ' ', '\001', '(', '\013', '2', '\034', '.', 'g', 'o', 
'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'U', 'I', 'n', 't', '3', '2', 'V', 'a', 'l', 'u', 'e', 
'B', '\007', '\372', 'B', '\004', '*', '\002', '(', '\001', 'R', ',', 'm', 'a', 'x', 'I', 'n', 'b', 'o', 'u', 'n', 'd', 'W', 'i', 'n', 'd', 
'o', 'w', 'U', 'p', 'd', 'a', 't', 'e', 'F', 'r', 'a', 'm', 'e', 's', 'P', 'e', 'r', 'D', 'a', 't', 'a', 'F', 'r', 'a', 'm', 
'e', 'S', 'e', 'n', 't', '\022', '^', '\n', '&', 's', 't', 'r', 'e', 'a', 'm', '_', 'e', 'r', 'r', 'o', 'r', '_', 'o', 'n', '_', 
'i', 'n', 'v', 'a', 'l', 'i', 'd', '_', 'h', 't', 't', 'p', '_', 'm', 'e', 's', 's', 'a', 'g', 'i', 'n', 'g', '\030', '\014', ' ', 
'\001', '(', '\010', 'B', '\013', '\030', '\001', '\222', '\307', '\206', '\330', '\004', '\003', '3', '.', '0', 'R', '!', 's', 't', 'r', 'e', 'a', 'm', 'E', 
'r', 'r', 'o', 'r', 'O', 'n', 'I', 'n', 'v', 'a', 'l', 'i', 'd', 'H', 't', 't', 'p', 'M', 'e', 's', 's', 'a', 'g', 'i', 'n', 
'g', '\022', 'z', '\n', '-', 'o', 'v', 'e', 'r', 'r', 'i', 'd', 'e', '_', 's', 't', 'r', 'e', 'a', 'm', '_', 'e', 'r', 'r', 'o', 
'r', '_', 'o', 'n', '_', 'i', 'n', 'v', 'a', 'l', 'i', 'd', '_', 'h', 't', 't', 'p', '_', 'm', 'e', 's', 's', 'a', 'g', 'e', 
'\030', '\016', ' ', '\001', '(', '\013', '2', '\032', '.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 
'B', 'o', 'o', 'l', 'V', 'a', 'l', 'u', 'e', 'R', '\'', 'o', 'v', 'e', 'r', 'r', 'i', 'd', 'e', 'S', 't', 'r', 'e', 'a', 'm', 
'E', 'r', 'r', 'o', 'r', 'O', 'n', 'I', 'n', 'v', 'a', 'l', 'i', 'd', 'H', 't', 't', 'p', 'M', 'e', 's', 's', 'a', 'g', 'e', 
'\022', 'z', '\n', '\032', 'c', 'u', 's', 't', 'o', 'm', '_', 's', 'e', 't', 't', 'i', 'n', 'g', 's', '_', 'p', 'a', 'r', 'a', 'm', 
'e', 't', 'e', 'r', 's', '\030', '\r', ' ', '\003', '(', '\013', '2', '<', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 
'g', '.', 'c', 'o', 'r', 'e', '.', 'v', '3', '.', 'H', 't', 't', 'p', '2', 'P', 'r', 'o', 't', 'o', 'c', 'o', 'l', 'O', 'p', 
't', 'i', 'o', 'n', 's', '.', 'S', 'e', 't', 't', 'i', 'n', 'g', 's', 'P', 'a', 'r', 'a', 'm', 'e', 't', 'e', 'r', 'R', '\030', 
'c', 'u', 's', 't', 'o', 'm', 'S', 'e', 't', 't', 'i', 'n', 'g', 's', 'P', 'a', 'r', 'a', 'm', 'e', 't', 'e', 'r', 's', '\022', 
'Z', '\n', '\024', 'c', 'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', '_', 'k', 'e', 'e', 'p', 'a', 'l', 'i', 'v', 'e', '\030', '\017', 
' ', '\001', '(', '\013', '2', '\'', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'c', 'o', 'r', 'e', '.', 
'v', '3', '.', 'K', 'e', 'e', 'p', 'a', 'l', 'i', 'v', 'e', 'S', 'e', 't', 't', 'i', 'n', 'g', 's', 'R', '\023', 'c', 'o', 'n', 
'n', 'e', 'c', 't', 'i', 'o', 'n', 'K', 'e', 'e', 'p', 'a', 'l', 'i', 'v', 'e', '\022', 'P', '\n', '\021', 'u', 's', 'e', '_', 'o', 
'g', 'h', 't', 't', 'p', '2', '_', 'c', 'o', 'd', 'e', 'c', '\030', '\020', ' ', '\001', '(', '\013', '2', '\032', '.', 'g', 'o', 'o', 'g', 
'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'B', 'o', 'o', 'l', 'V', 'a', 'l', 'u', 'e', 'B', '\010', '\322', '\306', 
'\244', '\341', '\006', '\002', '\010', '\001', 'R', '\017', 'u', 's', 'e', 'O', 'g', 'h', 't', 't', 'p', '2', 'C', 'o', 'd', 'e', 'c', '\032', '\342', 
'\001', '\n', '\021', 'S', 'e', 't', 't', 'i', 'n', 'g', 's', 'P', 'a', 'r', 'a', 'm', 'e', 't', 'e', 'r', '\022', 'N', '\n', '\n', 'i', 
'd', 'e', 'n', 't', 'i', 'f', 'i', 'e', 'r', '\030', '\001', ' ', '\001', '(', '\013', '2', '\034', '.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 
'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'U', 'I', 'n', 't', '3', '2', 'V', 'a', 'l', 'u', 'e', 'B', '\020', '\372', 'B', '\r', 
'*', '\006', '\030', '\377', '\377', '\003', '(', '\000', '\212', '\001', '\002', '\020', '\001', 'R', '\n', 'i', 'd', 'e', 'n', 't', 'i', 'f', 'i', 'e', 'r', 
'\022', '<', '\n', '\005', 'v', 'a', 'l', 'u', 'e', '\030', '\002', ' ', '\001', '(', '\013', '2', '\034', '.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 
'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'U', 'I', 'n', 't', '3', '2', 'V', 'a', 'l', 'u', 'e', 'B', '\010', '\372', 'B', '\005', 
'\212', '\001', '\002', '\020', '\001', 'R', '\005', 'v', 'a', 'l', 'u', 'e', ':', '?', '\232', '\305', '\210', '\036', ':', '\n', '8', 'e', 'n', 'v', 'o', 
'y', '.', 'a', 'p', 'i', '.', 'v', '2', '.', 'c', 'o', 'r', 'e', '.', 'H', 't', 't', 'p', '2', 'P', 'r', 'o', 't', 'o', 'c', 
'o', 'l', 'O', 'p', 't', 'i', 'o', 'n', 's', '.', 'S', 'e', 't', 't', 'i', 'n', 'g', 's', 'P', 'a', 'r', 'a', 'm', 'e', 't', 
'e', 'r', ':', '-', '\232', '\305', '\210', '\036', '(', '\n', '&', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'p', 'i', '.', 'v', '2', '.', 'c', 
'o', 'r', 'e', '.', 'H', 't', 't', 'p', '2', 'P', 'r', 'o', 't', 'o', 'c', 'o', 'l', 'O', 'p', 't', 'i', 'o', 'n', 's', '\"', 
'\245', '\001', '\n', '\023', 'G', 'r', 'p', 'c', 'P', 'r', 'o', 't', 'o', 'c', 'o', 'l', 'O', 'p', 't', 'i', 'o', 'n', 's', '\022', '`', 
'\n', '\026', 'h', 't', 't', 'p', '2', '_', 'p', 'r', 'o', 't', 'o', 'c', 'o', 'l', '_', 'o', 'p', 't', 'i', 'o', 'n', 's', '\030', 
'\001', ' ', '\001', '(', '\013', '2', '*', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'c', 'o', 'r', 'e', 
'.', 'v', '3', '.', 'H', 't', 't', 'p', '2', 'P', 'r', 'o', 't', 'o', 'c', 'o', 'l', 'O', 'p', 't', 'i', 'o', 'n', 's', 'R', 
'\024', 'h', 't', 't', 'p', '2', 'P', 'r', 'o', 't', 'o', 'c', 'o', 'l', 'O', 'p', 't', 'i', 'o', 'n', 's', ':', ',', '\232', '\305', 
'\210', '\036', '\'', '\n', '%', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'p', 'i', '.', 'v', '2', '.', 'c', 'o', 'r', 'e', '.', 'G', 'r', 
'p', 'c', 'P', 'r', 'o', 't', 'o', 'c', 'o', 'l', 'O', 'p', 't', 'i', 'o', 'n', 's', '\"', '\261', '\002', '\n', '\024', 'H', 't', 't', 
'p', '3', 'P', 'r', 'o', 't', 'o', 'c', 'o', 'l', 'O', 'p', 't', 'i', 'o', 'n', 's', '\022', ']', '\n', '\025', 'q', 'u', 'i', 'c', 
'_', 'p', 'r', 'o', 't', 'o', 'c', 'o', 'l', '_', 'o', 'p', 't', 'i', 'o', 'n', 's', '\030', '\001', ' ', '\001', '(', '\013', '2', ')', 
'.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'c', 'o', 'r', 'e', '.', 'v', '3', '.', 'Q', 'u', 'i', 
'c', 'P', 'r', 'o', 't', 'o', 'c', 'o', 'l', 'O', 'p', 't', 'i', 'o', 'n', 's', 'R', '\023', 'q', 'u', 'i', 'c', 'P', 'r', 'o', 
't', 'o', 'c', 'o', 'l', 'O', 'p', 't', 'i', 'o', 'n', 's', '\022', 'z', '\n', '-', 'o', 'v', 'e', 'r', 'r', 'i', 'd', 'e', '_', 
's', 't', 'r', 'e', 'a', 'm', '_', 'e', 'r', 'r', 'o', 'r', '_', 'o', 'n', '_', 'i', 'n', 'v', 'a', 'l', 'i', 'd', '_', 'h', 
't', 't', 'p', '_', 'm', 'e', 's', 's', 'a', 'g', 'e', '\030', '\002', ' ', '\001', '(', '\013', '2', '\032', '.', 'g', 'o', 'o', 'g', 'l', 
'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'B', 'o', 'o', 'l', 'V', 'a', 'l', 'u', 'e', 'R', '\'', 'o', 'v', 'e', 
'r', 'r', 'i', 'd', 'e', 'S', 't', 'r', 'e', 'a', 'm', 'E', 'r', 'r', 'o', 'r', 'O', 'n', 'I', 'n', 'v', 'a', 'l', 'i', 'd', 
'H', 't', 't', 'p', 'M', 'e', 's', 's', 'a', 'g', 'e', '\022', '>', '\n', '\026', 'a', 'l', 'l', 'o', 'w', '_', 'e', 'x', 't', 'e', 
'n', 'd', 'e', 'd', '_', 'c', 'o', 'n', 'n', 'e', 'c', 't', '\030', '\005', ' ', '\001', '(', '\010', 'B', '\010', '\322', '\306', '\244', '\341', '\006', 
'\002', '\010', '\001', 'R', '\024', 'a', 'l', 'l', 'o', 'w', 'E', 'x', 't', 'e', 'n', 'd', 'e', 'd', 'C', 'o', 'n', 'n', 'e', 'c', 't', 
'\"', 't', '\n', '\032', 'S', 'c', 'h', 'e', 'm', 'e', 'H', 'e', 'a', 'd', 'e', 'r', 'T', 'r', 'a', 'n', 's', 'f', 'o', 'r', 'm', 
'a', 't', 'i', 'o', 'n', '\022', 'D', '\n', '\023', 's', 'c', 'h', 'e', 'm', 'e', '_', 't', 'o', '_', 'o', 'v', 'e', 'r', 'w', 'r', 
'i', 't', 'e', '\030', '\001', ' ', '\001', '(', '\t', 'B', '\022', '\372', 'B', '\017', 'r', '\r', 'R', '\004', 'h', 't', 't', 'p', 'R', '\005', 'h', 
't', 't', 'p', 's', 'H', '\000', 'R', '\021', 's', 'c', 'h', 'e', 'm', 'e', 'T', 'o', 'O', 'v', 'e', 'r', 'w', 'r', 'i', 't', 'e', 
'B', '\020', '\n', '\016', 't', 'r', 'a', 'n', 's', 'f', 'o', 'r', 'm', 'a', 't', 'i', 'o', 'n', 'B', '\201', '\001', '\n', '\"', 'i', 'o', 
'.', 'e', 'n', 'v', 'o', 'y', 'p', 'r', 'o', 'x', 'y', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 
'c', 'o', 'r', 'e', '.', 'v', '3', 'B', '\r', 'P', 'r', 'o', 't', 'o', 'c', 'o', 'l', 'P', 'r', 'o', 't', 'o', 'P', '\001', 'Z', 
'B', 'g', 'i', 't', 'h', 'u', 'b', '.', 'c', 'o', 'm', '/', 'e', 'n', 'v', 'o', 'y', 'p', 'r', 'o', 'x', 'y', '/', 'g', 'o', 
'-', 'c', 'o', 'n', 't', 'r', 'o', 'l', '-', 'p', 'l', 'a', 'n', 'e', '/', 'e', 'n', 'v', 'o', 'y', '/', 'c', 'o', 'n', 'f', 
'i', 'g', '/', 'c', 'o', 'r', 'e', '/', 'v', '3', ';', 'c', 'o', 'r', 'e', 'v', '3', '\272', '\200', '\310', '\321', '\006', '\002', '\020', '\002', 
'b', '\006', 'p', 'r', 'o', 't', 'o', '3', 
};

static _upb_DefPool_Init *deps[10] = {
  &envoy_config_core_v3_extension_proto_upbdefinit,
  &envoy_type_v3_percent_proto_upbdefinit,
  &google_protobuf_duration_proto_upbdefinit,
  &google_protobuf_wrappers_proto_upbdefinit,
  &xds_annotations_v3_status_proto_upbdefinit,
  &envoy_annotations_deprecation_proto_upbdefinit,
  &udpa_annotations_status_proto_upbdefinit,
  &udpa_annotations_versioning_proto_upbdefinit,
  &validate_validate_proto_upbdefinit,
  NULL
};

_upb_DefPool_Init envoy_config_core_v3_protocol_proto_upbdefinit = {
  deps,
  &envoy_config_core_v3_protocol_proto_upb_file_layout,
  "envoy/config/core/v3/protocol.proto",
  UPB_STRINGVIEW_INIT(descriptor, 6708)
};
