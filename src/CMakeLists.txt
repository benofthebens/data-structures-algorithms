
include_directories(../include)

add_executable(main
        main.cpp
        Node.cpp
        ../include/linked_list.h
        linked_list.cpp
        stack.cpp
        ../include/stack.h
        queue.cpp
        ../include/queue.h
        ../include/Node.h
        ../exceptions/stack_overflow_exception.h
        ../exceptions/stack_underflow_exception.h
        ../exceptions/queue_overflow_exception.h
        ../exceptions/queue_underflow_exception.h
        ../include/graph.h
        graph.cpp
)