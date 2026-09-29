cmake_minimum_required(VERSION 3.12)
project(ipb_arithmetic LANGUAGES CXX)

# Force C++17 standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Configure output directories to match your project layout
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/results/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/results/lib) # For static libraries (.a)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/results/lib) # For shared libraries (.so)

# 1. Create the static library target
add_library(ipb_arithmetic STATIC
	src/sum.cpp
	src/subtract.cpp
)

#2. Tell the library where its include directories are
target_include_directories(ipb_arithmetic PUBLIC
	${CMAKE_SOURCE_DIR}/include
)

#3. Create the executable target
add_executable(main
	src/main.cpp
)

#4. Link the library against your executable
target_link_libraries(main ipb_arithmetic)

#5. Install the library
install(TARGETS ipb_arithmetic
    ARCHIVE DESTINATION lib
)

install(DIRECTORY "${CMAKE_SOURCE_DIR}/include/"
    DESTINATION include
)


