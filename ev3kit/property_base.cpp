#include <ev3kit/property_base.hpp>

const std::string& property_base::get_path() const
{
    return path;
}

property_base::property_base(const std::string &path)
    : path(path)
{

}
