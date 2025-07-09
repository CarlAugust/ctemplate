
# Dependencies
set(UNITY_VERSION 2.6.1)
include(FetchContent)
FetchContent_Declare(
    Unity
    URL https://github.com/ThrowTheSwitch/Unity/archive/refs/tags/v${UNITY_VERSION}.tar.gz
    FIND_PACKAGE_ARGS ${UNITY_VERSION}
)
set(BUILD_EXAMPLES OFF CACHE INTERNAL "")
FetchContent_MakeAvailable(unity)

add_executable(tests test_main.c)

target_link_libraries(tests unity)
target_include_directories(tests PRIVATE ../src ../include)

add_test(NAME test COMMAND tests)