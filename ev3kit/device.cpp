#include <ev3kit/device.hpp>

namespace ev3kit
{

device::device(const path &folder)
    : folder(folder)
{

}

bool device::check_folder() const
{
    return exists(folder);
}

}