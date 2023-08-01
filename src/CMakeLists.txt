add_library(multiply
    multiply.cpp
)

target_include_directories(multiply PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

add_executable(mainapp
    main.cpp
)

target_link_libraries(mainapp PRIVATE 
    multiply 
)
