find_package(GTest REQUIRED)

include_directories(
        ${GTEST_INCLUDE_DIRS}
        "../include"
)

add_executable(tests
        main.cpp
        ../include/Node.h
        ../src/node.cpp
        node_tests.cpp
        ../exceptions/stack_overflow_exception.h
        ../exceptions/stack_underflow_exception.h
        ../exceptions/queue_overflow_exception.h
        ../exceptions/queue_underflow_exception.h
        linked_list_tests.cpp
        ../src/linked_list.cpp
        ../include/linked_list.h
        ../include/queue.h
        ../src/queue.cpp
        ../include/stack.h
        ../src/stack.cpp
        queue_tests.cpp
        stack_tests.cpp
        ../include/graph.h
        ../src/graph.cpp
        graph_tests.cpp
)

target_link_libraries(tests PRIVATE GTest::GTest GTest::Main)
