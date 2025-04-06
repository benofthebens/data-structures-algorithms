include(FetchContent)

FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/5376968f6948923e2411081fd9372e71a59d8e77.zip
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(googletest)

set(SRC_FILES
        ../src/node.cpp
        ../src/linked_list.cpp
        ../src/queue.cpp
        ../src/graph.cpp
        ../src/tree.cpp
        ../src/stack.cpp
)

set(EXCEPTION_HEADERS
        ../exceptions/stack/stack_overflow_exception.h
        ../exceptions/stack/stack_underflow_exception.h
        ../exceptions/queue/queue_overflow_exception.h
        ../exceptions/queue/queue_underflow_exception.h
        ../exceptions/tree/tree_duplicate_data_exception.h
)

set(TESTS_SRC
        main.cpp
        node_tests.cpp
        linked_list_tests.cpp
        queue_tests.cpp
        stack_tests.cpp
        graph_tests.cpp
)  

add_executable(tests
        ${SRC_FILES}
        ${EXCEPTION_HEADERS}
        ${TEST_SRC}
)

target_include_directories(tests PRIVATE
        ../include
        ../exceptions/stack
        ../exceptions/queue
        ../exceptions/tree
)

target_link_libraries(tests PRIVATE gtest gtest_main)
