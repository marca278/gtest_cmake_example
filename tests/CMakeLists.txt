include(FetchContent)

include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
FetchContent_MakeAvailable(googletest)



add_executable(unit_test multiply_test.cpp)

target_link_libraries(unit_test PRIVATE
    GTest::gtest_main
    multiply
)

include(GoogleTest)
gtest_discover_tests(unit_test)
