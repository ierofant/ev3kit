#ifndef PROPERTY_READABLE_HPP
#define PROPERTY_READABLE_HPP

template<typename T, int num = 1>
class property_readable : public property_base
{
public:
    using value_type = T;
    using data_type = std::array<T, num>;


};

#endif //PROPERTY_READABLE_HPP
