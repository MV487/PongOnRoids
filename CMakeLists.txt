cmake_minimum_required(VERSION 3.15)
Set(PROJECT_NAME "PongOnRoids")
project(${PROJECT_NAME})

# Set the C++ standard to C++20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(${CMAKE_CURRENT_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake)
# Define your project sources

set(SOURCES
    src/main.cpp
   src/AIPaddle.cpp  
   src/Ball.cpp  
   src/GameLoop.hpp  
   src/Math.cpp  
    src/window.cpp
    src/Utility.hpp 
    src/gameLoop.cpp  
    src/paddle.cpp 
    # Add your source files here
)
# Add an executable target for the project
add_executable(${PROJECT_NAME} ${SOURCES})

# Find and link the Raylib library using vcpkg
find_package(raylib CONFIG REQUIRED)

# Specify the libraries to link against
target_link_libraries(${PROJECT_NAME} PRIVATE raylib)

# Platform-specific settings for Raylib on Windows, Linux, and macOS
if(WIN32)
    # Windows-specific settings
    # You may need to adjust the paths and settings for Windows

    # Compiler flags for debug configuration
    target_compile_options(${PROJECT_NAME} PRIVATE "$<$<CONFIG:DEBUG>:/MDd>")

    # Compiler flags for release configuration
    target_compile_options(${PROJECT_NAME} PRIVATE "$<$<CONFIG:RELEASE>:/MD>")

    target_compile_definitions(${PROJECT_NAME} PRIVATE PLATFORM_DESKTOP)
elseif(APPLE)
    # macOS-specific settings

    # Compiler flags for debug configuration
    target_compile_options(${PROJECT_NAME} PRIVATE "$<$<CONFIG:DEBUG>:-g>")

    # Compiler flags for release configuration
    target_compile_options(${PROJECT_NAME} PRIVATE "$<$<CONFIG:RELEASE>:-O3>")

    target_link_libraries(${PROJECT_NAME} PRIVATE
        "-framework CoreVideo"
        "-framework IOKit"
        "-framework Cocoa"
        "-framework GLUT"
    )
else()
    # Linux-specific settings

    # Compiler flags for debug configuration
    target_compile_options(${PROJECT_NAME} PRIVATE "$<$<CONFIG:DEBUG>:-g>")

    # Compiler flags for release configuration
    target_compile_options(${PROJECT_NAME} PRIVATE "$<$<CONFIG:RELEASE>:-O3>")
endif()
# Add an executable target for the project