project('nanopb', 'c')
cm_protobuf_nanopb_static_dir = include_directories('__CMake_build', '.')
cm_protobuf_nanopb_static_sys = include_directories(is_system : true)
cm_protobuf_nanopb_static_inc = [cm_protobuf_nanopb_static_dir, cm_protobuf_nanopb_static_sys]
cm_protobuf_nanopb_static_src = files(
  'pb_common.c',
  'pb_encode.c',
  'pb_decode.c',
  'pb.h',
  'pb_common.h',
  'pb_encode.h',
  'pb_decode.h'
)
cm_protobuf_nanopb_static = static_library(
  'cm_protobuf_nanopb_static',
  cm_protobuf_nanopb_static_src,
  objects : [],
  link_with : [],
  c_args : ['-DPB_ENABLE_MALLOC'],
  install_dir : 'lib',
  link_args : [],
  override_options : [],
  include_directories : cm_protobuf_nanopb_static_inc,
  pic : true,
  build_by_default : true,
  install : true
)
cm_protobuf_nanopb_static_dep = declare_dependency(
  link_with : cm_protobuf_nanopb_static,
  include_directories : cm_protobuf_nanopb_static_inc,
  compile_args : [],
  link_args : []
)
