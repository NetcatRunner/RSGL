add_executable(run_tests main.cpp)

target_link_libraries(run_tests PRIVATE RSGL)

add_test(NAME TestBasique_RSGL COMMAND run_tests)
