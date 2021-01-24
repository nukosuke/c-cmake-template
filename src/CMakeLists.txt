# Build as static library
add_library(hoge STATIC hoge.c)

# Build as shared library
#add_library(hoge SHARED hoge.c)

target_include_directories(hoge PUBLIC ${PROJECT_SOURCE_DIR}/include)