#pragma once

#include <string>

#if defined(_WIN64) or defined(_WIN32)

//Windows commands
const std::string clearCommand = "cls";
#elif defined (__linux__)

//Linux commands
const std::string clearCommand = "clear";
#else
//Error

#endif