
include_directories(../include)

add_executable(main
        main.cpp
        node.cpp
        linked_list.cpp
        ../include/node.h
        ../include/linked_list.h
        ../include/hash_map.h
        ../include/graph.h
        ../include/stack.h
        ../include/queue.h
        ../exceptions/stack/stack_overflow_exception.h
        ../exceptions/stack/stack_underflow_exception.h
        ../exceptions/queue/queue_overflow_exception.h
        ../exceptions/queue/queue_underflow_exception.h
        ../exceptions/tree/tree_duplicate_data_exception.h
 "hash_map.cpp" "graph.cpp" "stack.cpp" "queue.cpp")