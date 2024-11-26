#include "const.h"
HMODULE hModule = GetModuleHandle(nullptr);
uintptr_t exeBaseAddress = (uintptr_t)GetDriverModuleHandle(nullptr);