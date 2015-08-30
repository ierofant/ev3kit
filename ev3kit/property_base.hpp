#ifndef PROPERTY_BASE_HPP
#define PROPERTY_BASE_HPP

#include <string>

class property_base
{
public:
    const std::string& get_path() const;

protected:
    property_base(const std::string &);

private:
    const std::string path;
};

#endif //PROPERTY_BASE_HPP
