#define BOOST_TEST_MODULE ev3kit_device
#include <boost/test/unit_test.hpp>
#include <ev3kit/device.hpp>

using namespace ev3kit;

BOOST_AUTO_TEST_CASE(ctor)
{
    device device1;
    BOOST_CHECK(!device1.check_folder());
}