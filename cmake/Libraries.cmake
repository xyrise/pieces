cmake_minimum_required (VERSION 3.11)

include (FetchContent)

FetchContent_Declare (
  MinCTest
  GIT_REPOSITORY https://github.com/xyrise/MinCTest.git
  GIT_TAG 57a27607c0090085ba1bf432ca5df8f303a2655b
)

FetchContent_Populate (MinCTest)
add_subdirectory (${minctest_SOURCE_DIR})
