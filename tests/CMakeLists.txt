find_package(GTest REQUIRED)

include_directories(
        ${GTEST_INCLUDE_DIRS}
        "../include"
)

add_executable(tests
        main.cpp
        ../include/linked_list.h
        ../include/Node.h
        ../src/linked_list.cpp
        ../src/stack.cpp
        ../src/node.cpp
        node_tests.cpp
        linked_list_tests.cpp
        ../exceptions/stack_overflow_exception.h
        ../exceptions/stack_underflow_exception.h
        stack_tests.cpp
        ../src/queue.cpp
        ../include/queue.h
        ../exceptions/queue_overflow_exception.h
        ../exceptions/queue_underflow_exception.h
        queue_tests.cpp
)

target_link_libraries(tests PRIVATE GTest::GTest GTest::Main)
