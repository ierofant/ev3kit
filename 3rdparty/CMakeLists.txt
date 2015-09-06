include(ExternalProject)

include_directories(${ROOT_PREDEPENDENCIES}/include)
link_directories(${ROOT_PREDEPENDENCIES}/lib)

file(WRITE $ENV{HOME}/user-config.jam ${BOOST_USER_CONFIG})
ExternalProject_Add(boost
    URL http://sourceforge.net/projects/boost/files/boost/1.59.0/boost_1_59_0.tar.bz2
    URL_MD5 6aa9a5c6a4ca1016edd0ed1178e3cb87
    CONFIGURE_COMMAND ./bootstrap.sh --with-libraries=filesystem,test
    BUILD_COMMAND ./b2 ${BOOST_TOOLCHAIN_ARGS}
    INSTALL_COMMAND ./b2 install --prefix=${ROOT_PREDEPENDENCIES}
    BUILD_IN_SOURCE 1
)
set(Boost_SYSTEM_LIBRARY ${ROOT_PREDEPENDENCIES}/lib/libboost_system.so 
	CACHE filepath "Boost System Library")
set(Boost_FILESYSTEM_LIBRARY ${ROOT_PREDEPENDENCIES}/lib/libboost_filesystem.so
	CACHE filepath "Boost Filesystem Library")
set(Boost_LIBRARIES ${Boost_SYSTEM_LIBRARY};${Boost_FILESYSTEM_LIBRARY}
	CACHE internal "Boost Libraries")
set(Boost_UNIT_TEST_FRAMEWORK_LIBRARY ${ROOT_PREDEPENDENCIES}/lib/libboost_unit_test_framework.so;${ROOT_PREDEPENDENCIES}/lib/libboost_test_exec_monitor.a
	CACHE filepath "Boost Unit Test Framework Library")
