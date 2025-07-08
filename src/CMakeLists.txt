file(GLOB SOURCES "./*.c")

add_executable(out ${SOURCES})
target_include_directories(out PUBLIC ${CMAKE_CURRENT_LIST_DIR})