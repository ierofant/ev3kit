#ifndef EV3KIT_DEVICE_HPP
#define EV3KIT_DEVICE_HPP

#include <boost/filesystem.hpp>

namespace ev3kit
{

using namespace boost::filesystem;

class device
{
public:
    device(const path &folder = path());
    
    bool check_folder() const;

private:
    path folder;
};

}

#endif //EV3KIT_DEVICE_HPP
