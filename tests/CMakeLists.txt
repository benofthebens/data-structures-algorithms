set(SRC_FILES
        "../src/node.cpp"
)
set(TEST_SRC_FILES
        "main.cpp"
        "node_tests.cpp"
)  

add_executable(Tests
        ${SRC_FILES}
        ${TEST_SRC_FILES}
)

target_include_directories(Tests PRIVATE "../include")

target_link_libraries(Tests PRIVATE gtest gtest_main GTest::gmock)

include(GoogleTest)
gtest_discover_tests(Tests)
