cmake_minimum_required (VERSION 3.13)

project (pieces
  VERSION 0.0.1
  DESCRIPTION "Piece table backed text buffer library."
  HOMEPAGE_URL "https://github.com/xyrise/pieces"
  LANGUAGES C
)

include (CTest)
include (cmake/Libraries.cmake)

set (CMAKE_C_STANDARD 90)
set (CMAKE_C_STANDARD_REQUIRED 90)

if (MSVC)
  add_compile_options (
    /Wall
    /WX
    /wd4710
    /wd4711
    /wd5045
    /wd4820
    /wd4706
    /wd4255
    /Qspectre
  )
  add_definitions (-D_CRT_SECURE_NO_WARNINGS)
else ()
  add_compile_options (-Wall -Wextra -pedantic -Werror)
endif ()

add_library (pieces STATIC "")

target_include_directories (pieces
  PRIVATE
    "./include/pieces"
  INTERFACE
    "./include"
)

add_subdirectory ("./src")
add_subdirectory ("./test")

install (
  TARGETS
    pieces
  DESTINATION
    lib
)
