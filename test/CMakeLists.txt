

add_executable(hoge_test hoge_test.c)

# args:
# - test object
# - link libraries...
target_link_libraries(hoge_test hoge check)

add_test(
  NAME hoge_test
  COMMAND hoge_test
)