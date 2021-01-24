cmake_minimum_required(VERSION 3.18)

# library will be auto-prefixed by "lib"
project(hoge)

# enable to run unit test as bellow
# ctest .
enable_testing()

# load subdir's CMakeLists.txt
add_subdirectory(src)
add_subdirectory(test)