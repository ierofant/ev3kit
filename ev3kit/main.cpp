#include <iostream>
#include <ev3dev.h>

int main()
{
    ev3dev::lcd lcd;
    std::cout << "Resolution: " << lcd.resolution_x() << 'x' << lcd.resolution_y() << std::endl;


    return 0;
}