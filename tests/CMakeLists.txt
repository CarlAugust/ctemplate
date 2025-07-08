add_library(unity ${CMAKE_CURRENT_SOURCE_DIR}/Unity/src/unity.c)
target_include_directories(unity PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}Unity/src)

add_executable(tests test_main.c)

target_link_libraries(tests unity)
target_include_directories(tests PRIVATE ../src ../include)
target_include_directories(tests PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/Unity/src)

add_test(NAME test COMMAND tests)