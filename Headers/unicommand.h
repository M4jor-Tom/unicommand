#pragma once

#include <string>

#if defined(_WIN64) or defined(_WIN32)

//Windows commands
const std::string clearCommand = "cls";
const std::string batteryPercentage = "powershell -command \"(Get-WmiObject Win32_Battery).EstimatedChargeRemaining\"";
#elif defined (__linux__)

//Linux commands
const std::string clearCommand = "clear";
const std::string batteryPercentage = "echo \"batteryPercentage undefined for linux systems.\"";
#else
//Error

#endif
