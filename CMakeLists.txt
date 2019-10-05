cmake_minimum_required(VERSION 3.1)
set(CMAKE_CXX_STANDARD 17)

project(playground)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

if(MSVC)
  add_compile_options(/W4 /WX)
else()
  add_compile_options(-Wall
                      -Wextra
                      -pedantic
                      -Werror)
endif()

add_executable(playground src/main.cpp)
target_link_libraries(playground ${CONAN_LIBS})

if(MSVC)
  target_link_libraries(playground Shlwapi)
endif()
