cmake_minimum_required(VERSION 3.0.0)
project(Cmakeowytest VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(Cmakeowytest main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

find_package(PythonLibs REQUIRED)
include_directories(${PYTHON_INCLUDE_DIRS})
target_link_libraries(Cmakeowytest ${PYTHON_LIBRARIES})
