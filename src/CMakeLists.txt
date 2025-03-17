
include_directories(../include)

add_executable(main
        main.cpp
        linked_list.cpp
        Node.cpp
        ../include/Node.h
        ../include/linked_list.h
        ../include/stack.h
        stack.cpp
        ../exceptions/stack_overflow_exception.h
        ../exceptions/stack_underflow_exception.h
        queue.cpp
        ../include/queue.h
        ../exceptions/queue_overflow_exception.h
        ../exceptions/queue_underflow_exception.h
)