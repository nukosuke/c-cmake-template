find_package (Check REQUIRED)
include_directories (${PROJECT_SOURCE_DIR}/include ${CHECK_INCLUDE_DIRS})
link_libraries (hoge ${CHECK_LIBRARIES} pthread)
link_directories (${CHECK_LIBRARY_DIRS})

add_executable(hoge_test hoge_test.c)

# args:
# - test object
# - link libraries...
target_link_libraries(hoge_test hoge)

add_test(
  NAME hoge_test
  COMMAND hoge_test
)