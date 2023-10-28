include(FetchContent)

include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG v1.14.0
)
FetchContent_MakeAvailable(googletest)



add_executable(unit_test multiply_test.cpp)

target_link_libraries(unit_test PRIVATE
    GTest::gtest_main
    multiply
)

include(GoogleTest)
gtest_discover_tests(unit_test)
