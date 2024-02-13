cmake_minimum_required(VERSION 3.14)
project(libft_42)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Path Tests
file(GLOB TEST_SOURCES "tests/*.cpp")

# Path lib
set(LIB_DIR ${CMAKE_SOURCE_DIR}/src)

enable_testing()

add_executable(
  all_tests
  ${TEST_SOURCES}
)
target_link_libraries(
  all_tests
  GTest::gtest_main
  ${LIB_DIR}/libft.a
)

include(GoogleTest)
gtest_discover_tests(all_tests)
