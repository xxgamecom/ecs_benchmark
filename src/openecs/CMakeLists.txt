# add dependencies FIXME: Failed to unstash changes ... Encountered 2 file(s) that should have been pointers, but weren't:
# img/component_memory_pool.png img/componentmask_version_vector.png CPMAddPackage( NAME OpenECS VERSION 0.1.101 GITHUB_REPOSITORY
# Gronis/OpenEcs # TODO: set current version, use master (no release version) GIT_TAG master DOWNLOAD_ONLY True ) if(OpenECS_ADDED)
# add_library(OpenEcs INTERFACE) target_include_directories(OpenEcs SYSTEM INTERFACE ${OpenECS_SOURCE_DIR}/include) endif() workaround: use
# local files, see libs/

set(INCLUDE_DIR "include") # must be relative paths
# NOTE: rename project in "${CMAKE_PROJECT_NAME}-example-myecs"
add_library(
  ecs-benchmark-example-openecs STATIC
  # NOTE: add source files here
  openecs/systems/DataSystem.h
  openecs/systems/DataSystem.cpp
  openecs/systems/MoreComplexSystem.h
  openecs/systems/MoreComplexSystem.cpp
  openecs/systems/MovementSystem.h
  openecs/systems/MovementSystem.cpp
  openecs/entities/EntityFactory.h
  openecs/entities/EntityFactory.cpp
  openecs/OpenECSApplication.h
  openecs/OpenECSApplication.cpp)
add_library(ecs-benchmark::example::openecs ALIAS ecs-benchmark-example-openecs)

target_include_directories(
  ecs-benchmark-example-openecs
  PUBLIC "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>" "$<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/${INCLUDE_DIR}>"
         "$<BUILD_INTERFACE:${PROJECT_BINARY_DIR}/${INCLUDE_DIR}>" "$<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}/${INCLUDE_DIR}>")
target_link_libraries(ecs-benchmark-example-openecs PRIVATE project_warnings project_options)
target_link_libraries(ecs-benchmark-example-openecs PUBLIC ecs-benchmark-base)

# NOTE: add 3rd-party libs here
target_link_system_libraries(ecs-benchmark-example-openecs PUBLIC OpenEcs)
