#include <windows.h>
#include <string.h>
#include <stdio.h>

#define DLL_EXPORT extern "C" __declspec(dllexport)
static char resultBuffer[32];

DLL_EXPORT char* __stdcall function1(char* param1, char* param2) {
    if (param1 == NULL) {
        strcpy(resultBuffer, "0");
        return resultBuffer;
    }
    sprintf(resultBuffer, "%d", (int)strlen(param1));
    return resultBuffer;
}

DLL_EXPORT void __stdcall SmartieInit() {}
DLL_EXPORT void __stdcall SmartieFini() {}
