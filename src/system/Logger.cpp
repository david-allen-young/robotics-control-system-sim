#include "Logger.h"
#include <iostream>

void logInfo(const std::string& msg)
{
    std::cout << "[INFO] " << msg << std::endl;
}

void logWarn(const std::string& msg) 
{
    std::cout << "[WARN] " << msg << std::endl;
}

void logError(const std::string& msg)
{
    std::cout << "[ERROR] " << msg << std::endl;
}
