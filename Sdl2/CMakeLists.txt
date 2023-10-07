cmake_minimum_required(VERSION 3.26)
project(Sdl2)

set(CMAKE_CXX_STANDARD 17)

add_executable(Sdl2 main.cpp)

target_link_libraries(
        Sdl2 PRIVATE
        /Library/Frameworks/SDL2.framework/Versions/A/SDL2
        /Library/Frameworks/SDL2_image.framework/Versions/A/SDL2_image
        /Library/Frameworks/SDL2_ttf.framework/Versions/A/SDL2_ttf
)

target_include_directories(
        Sdl2 PRIVATE
        /Library/Frameworks/SDL2.framework/Versions/A/Headers
        /Library/Frameworks/SDL2_image.framework/Versions/A/Headers
        /Library/Frameworks/SDL2_ttf.framework/Versions/A/Headers
)
