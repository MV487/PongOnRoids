cmake_minimum_required(VERSION 3.15)
project(PongOnRoids)

# Set the C++ standard to C++20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Define your project sources

set(SOURCES
    src/main.cpp
   src/AIPaddle.cpp  
   src/Ball.cpp  
   src/GameLoop.hpp  
   src/Math.cpp  
    src/window.cpp
    src/Utility.hpp 
    src/gameLoop.cpp  \
    src/paddle.cpp 
    # Add your source files here
)
# Add an executable target for the project
add_executable(PongOnRoids ${SOURCES})

# Find and link the Raylib library using vcpkg
find_package(raylib CONFIG REQUIRED)

# Specify the libraries to link against
target_link_libraries(PongOnRoids PRIVATE raylib)

# Platform-specific settings for Raylib on Windows, Linux, and macOS
if(WIN32)
    # Windows-specific settings
    # You may need to adjust the paths and settings for Windows

    # Compiler flags for debug configuration
    target_compile_options(YourProjectName PRIVATE "$<$<CONFIG:DEBUG>:/MDd>")

    # Compiler flags for release configuration
    target_compile_options(YourProjectName PRIVATE "$<$<CONFIG:RELEASE>:/MD>")

    target_compile_definitions(YourProjectName PRIVATE PLATFORM_DESKTOP)
elseif(APPLE)
    # macOS-specific settings

    # Compiler flags for debug configuration
    target_compile_options(YourProjectName PRIVATE "$<$<CONFIG:DEBUG>:-g>")

    # Compiler flags for release configuration
    target_compile_options(YourProjectName PRIVATE "$<$<CONFIG:RELEASE>:-O3>")

    target_link_libraries(YourProjectName PRIVATE
        "-framework CoreVideo"
        "-framework IOKit"
        "-framework Cocoa"
        "-framework GLUT"
    )
else()
    # Linux-specific settings

    # Compiler flags for debug configuration
    target_compile_options(YourProjectName PRIVATE "$<$<CONFIG:DEBUG>:-g>")

    # Compiler flags for release configuration
    target_compile_options(YourProjectName PRIVATE "$<$<CONFIG:RELEASE>:-O3>")
endif()
# Add an executable target for the project