add_executable (PiecesTestRunner "testrunner.c")
target_link_libraries (PiecesTestRunner
  PRIVATE
    MinCTest
    pieces
)

target_include_directories (PiecesTestRunner
  PRIVATE
    "./"
)

add_subdirectory ("./textbuffer")
