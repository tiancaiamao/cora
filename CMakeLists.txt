cmake_minimum_required(VERSION 3.16)

project(cora C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

set(CORA_OUT_ROOT ${CMAKE_SOURCE_DIR})
set(CORA_OUT_SRC ${CMAKE_SOURCE_DIR}/src)
set(CORA_OUT_LIB ${CMAKE_SOURCE_DIR}/lib)

option(ENABLE_ASAN "Build with AddressSanitizer" OFF)
option(ENABLE_TSAN "Build with ThreadSanitizer" OFF)
option(BOOTSTRAP_TEST "Build runtime with _BOOTSTRAP_TEST_ enabled" OFF)

if(ENABLE_ASAN AND ENABLE_TSAN)
  message(FATAL_ERROR "ENABLE_ASAN and ENABLE_TSAN cannot both be ON")
endif()

add_compile_options(-g -Wall)

if(ENABLE_ASAN)
  add_compile_options(-fsanitize=address)
  add_link_options(-fsanitize=address)
endif()

if(ENABLE_TSAN)
  add_compile_options(-fsanitize=thread)
  add_link_options(-fsanitize=thread)
endif()

set(CORA_COMMON_INCLUDES
  ${CMAKE_SOURCE_DIR}
  ${CMAKE_SOURCE_DIR}/src
  ${CMAKE_SOURCE_DIR}/lib
  ${CMAKE_SOURCE_DIR}/lib/md4c
)

set(CORA_RUNTIME_SOURCES
  src/str.c
  src/gc.c
  src/types.c
  src/reader.c
  src/runtime.c
  src/trace.c
  src/export.c
  src/config.c
)

add_library(cora_runtime SHARED ${CORA_RUNTIME_SOURCES})
target_include_directories(cora_runtime PRIVATE ${CORA_COMMON_INCLUDES})
if(BOOTSTRAP_TEST)
  target_compile_definitions(cora_runtime PRIVATE _BOOTSTRAP_TEST_)
endif()
set_source_files_properties(
  src/config.c
  PROPERTIES COMPILE_DEFINITIONS "CORA_SRC_DIR=\"${CMAKE_SOURCE_DIR}/src\""
)
target_link_libraries(cora_runtime PRIVATE ${CMAKE_DL_LIBS} m)
set_target_properties(cora_runtime PROPERTIES
  OUTPUT_NAME cora
  LIBRARY_OUTPUT_DIRECTORY ${CORA_OUT_SRC}
)
if(APPLE)
  set_target_properties(cora_runtime PROPERTIES SUFFIX ".so")
endif()

add_executable(cora_bin main.c)
target_include_directories(cora_bin PRIVATE ${CORA_COMMON_INCLUDES})
target_link_libraries(cora_bin PRIVATE cora_runtime ${CMAKE_DL_LIBS})
set_target_properties(cora_bin PROPERTIES
  OUTPUT_NAME cora
  RUNTIME_OUTPUT_DIRECTORY ${CORA_OUT_ROOT}
)
if(APPLE)
  set_target_properties(cora_bin PROPERTIES BUILD_RPATH "@executable_path/src")
else()
  set_target_properties(cora_bin PROPERTIES BUILD_RPATH "$ORIGIN/src")
endif()

add_library(cora_init MODULE init.c)
target_include_directories(cora_init PRIVATE ${CORA_COMMON_INCLUDES})
target_link_libraries(cora_init PRIVATE cora_runtime ${CMAKE_DL_LIBS} m)
set_target_properties(cora_init PROPERTIES
  PREFIX ""
  OUTPUT_NAME init
  LIBRARY_OUTPUT_DIRECTORY ${CORA_OUT_ROOT}
)

function(add_cora_module target_name output_name source_file output_dir)
  add_library(${target_name} MODULE ${source_file})
  target_include_directories(${target_name} PRIVATE ${CORA_COMMON_INCLUDES})
  target_link_libraries(${target_name} PRIVATE cora_runtime ${CMAKE_DL_LIBS} m)
  set_target_properties(${target_name} PROPERTIES
    PREFIX ""
    OUTPUT_NAME ${output_name}
    LIBRARY_OUTPUT_DIRECTORY ${output_dir}
  )
endfunction()

add_cora_module(cora_toc toc lib/toc.c ${CORA_OUT_LIB})
add_cora_module(cora_string string lib/string.c ${CORA_OUT_LIB})
add_cora_module(cora_os os lib/os.c ${CORA_OUT_LIB})
add_cora_module(cora_io io lib/io.c ${CORA_OUT_LIB})
add_cora_module(cora_hash_h hash-h lib/hash-h.c ${CORA_OUT_LIB})
add_cora_module(cora_rand rand lib/rand.c ${CORA_OUT_LIB})
add_cora_module(cora_trace trace lib/trace.c ${CORA_OUT_LIB})
add_cora_module(cora_toc_internal internal lib/toc/internal.c ${CORA_OUT_LIB}/toc)

add_library(cora_io_core OBJECT
  lib/poller/poller.c
  lib/net/net.c
)
target_include_directories(cora_io_core PRIVATE ${CORA_COMMON_INCLUDES})

add_library(cora_parallel_core SHARED
  lib/parallel/vm.c
  lib/parallel/mailbox.c
  $<TARGET_OBJECTS:cora_io_core>
)
target_include_directories(cora_parallel_core PRIVATE ${CORA_COMMON_INCLUDES})
target_link_libraries(cora_parallel_core PRIVATE cora_runtime ${CMAKE_DL_LIBS} m pthread)
set_target_properties(cora_parallel_core PROPERTIES
  PREFIX ""
  OUTPUT_NAME core
  LIBRARY_OUTPUT_DIRECTORY ${CORA_OUT_LIB}/parallel
)
if(APPLE)
  set_target_properties(cora_parallel_core PROPERTIES
    SUFFIX ".so"
    BUILD_RPATH "@loader_path/../../src"
  )
else()
  set_target_properties(cora_parallel_core PROPERTIES
    BUILD_RPATH "$ORIGIN/../../src"
  )
endif()

add_library(cora_parallel_internal MODULE
  lib/parallel/bindings.c
)
target_include_directories(cora_parallel_internal PRIVATE ${CORA_COMMON_INCLUDES})
target_link_libraries(cora_parallel_internal PRIVATE cora_parallel_core cora_runtime ${CMAKE_DL_LIBS} m pthread)
set_target_properties(cora_parallel_internal PROPERTIES
  PREFIX ""
  OUTPUT_NAME internal
  LIBRARY_OUTPUT_DIRECTORY ${CORA_OUT_LIB}/parallel
)
if(APPLE)
  set_target_properties(cora_parallel_internal PROPERTIES
    BUILD_RPATH "@loader_path;@loader_path/../../src"
  )
else()
  set_target_properties(cora_parallel_internal PROPERTIES
    BUILD_RPATH "$ORIGIN:$ORIGIN/../../src"
  )
endif()

add_library(cora_net_internal MODULE lib/net/internal.c)
target_include_directories(cora_net_internal PRIVATE ${CORA_COMMON_INCLUDES})
target_sources(cora_net_internal PRIVATE $<TARGET_OBJECTS:cora_io_core>)
target_link_libraries(cora_net_internal PRIVATE cora_runtime ${CMAKE_DL_LIBS} m pthread)
set_target_properties(cora_net_internal PROPERTIES
  PREFIX ""
  OUTPUT_NAME internal
  LIBRARY_OUTPUT_DIRECTORY ${CORA_OUT_LIB}/net
)
if(APPLE)
  set_target_properties(cora_net_internal PROPERTIES
    BUILD_RPATH "@loader_path/../../src"
  )
else()
  set_target_properties(cora_net_internal PROPERTIES
    BUILD_RPATH "$ORIGIN/../../src"
  )
endif()

add_library(cora_poller_internal MODULE lib/poller/internal.c)
target_include_directories(cora_poller_internal PRIVATE ${CORA_COMMON_INCLUDES})
target_sources(cora_poller_internal PRIVATE $<TARGET_OBJECTS:cora_io_core>)
target_link_libraries(cora_poller_internal PRIVATE cora_runtime ${CMAKE_DL_LIBS} m pthread)
set_target_properties(cora_poller_internal PROPERTIES
  PREFIX ""
  OUTPUT_NAME internal
  LIBRARY_OUTPUT_DIRECTORY ${CORA_OUT_LIB}/poller
)
if(APPLE)
  set_target_properties(cora_poller_internal PROPERTIES
    BUILD_RPATH "@loader_path/../../src"
  )
else()
  set_target_properties(cora_poller_internal PROPERTIES
    BUILD_RPATH "$ORIGIN/../../src"
  )
endif()

add_custom_target(cora-all
  DEPENDS
    cora_runtime
    cora_bin
    cora_init
    cora_toc
    cora_string
    cora_os
    cora_io
    cora_hash_h
    cora_rand
    cora_trace
    cora_toc_internal
    cora_parallel_core
    cora_parallel_internal
    cora_net_internal
    cora_poller_internal
)

add_custom_target(cora-libs
  DEPENDS
    cora_toc
    cora_string
    cora_os
    cora_io
    cora_hash_h
    cora_rand
    cora_trace
    cora_toc_internal
    cora_parallel_core
    cora_parallel_internal
    cora_net_internal
    cora_poller_internal
)

add_library(cora_compile_db OBJECT
  src/reader_test.c
  src/gc_test.c
  src/eval_test.c
  src/for_test.c
  lib/json.c
  lib/md4c/md4c.c
  lib/md4c/wrap.c
)
target_include_directories(cora_compile_db PRIVATE ${CORA_COMMON_INCLUDES})
set_target_properties(cora_compile_db PROPERTIES EXCLUDE_FROM_ALL TRUE)
