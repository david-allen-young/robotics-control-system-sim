#include "HalFactory.h"
#include <iostream>

void* createHardwareInterface()
{
    std::cout << "[HalFactory] creating hardware interface" << std::endl;
    return nullptr;
}
