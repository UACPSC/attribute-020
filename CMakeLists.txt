# @file CMakeLists.txt
# 
# CMake files for VectorAngle

cmake_minimum_required(VERSION 3.29)

# Project info
project(Attribute)

# attribure application
add_executable(attribute attribute.cpp)
target_compile_features(attribute PRIVATE cxx_std_17)
target_compile_options(attribute PRIVATE
    $<$<CXX_COMPILER_ID:MSVC>:/W4;/WX>
    $<$<NOT:$<CXX_COMPILER_ID:MSVC>>:-Wall;-Wextra;-pedantic;-Werror>
)

# Run application
add_custom_target(run COMMENT "Run example"
                      COMMAND $<TARGET_FILE:attribute>  "C++"
                      DEPENDS attribute)

# Run application with empty attribute
add_custom_target(run-empty COMMENT "Run empty"
                      COMMAND $<TARGET_FILE:attribute>  ''
                      DEPENDS attribute)

# Test run
add_custom_target(test-run COMMENT "Test run"
                      COMMAND ${CMAKE_SOURCE_DIR}/testRun.sh
                      DEPENDS attribute)

# Test run empty
add_custom_target(test-run-empty COMMENT "Test run empty"
                      COMMAND ${CMAKE_SOURCE_DIR}/testRunEmpty.sh
                      DEPENDS attribute)
