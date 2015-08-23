set(CMAKE_SYSTEM_NAME Linux)

set(CMAKE_C_COMPILER arm-linux-gnueabi-gcc)
set(CMAKE_CXX_COMPILER arm-linux-gnueabi-g++)

set(CMAKE_FIND_ROOT_PATH /usr/arm-linux-gnueabi)

set(BOOST_USER_CONFIG "using gcc : arm : ${CMAKE_CXX_COMPILER} \;")
set(BOOST_TOOLCHAIN_ARGS toolset=gcc-arm target-os=linux)
