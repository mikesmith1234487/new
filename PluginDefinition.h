#pragma once

#ifdef __cplusplus
extern "C" {
#endif

__declspec(dllexport) void pluginInit(HANDLE);
__declspec(dllexport) void commandMenuInit();
__declspec(dllexport) void pluginCleanUp();
__declspec(dllexport) FuncItem* getFuncsArray(int*);
__declspec(dllexport) void beNotified(SCNotification*);
__declspec(dllexport) LRESULT messageProc(UINT, WPARAM, LPARAM);

#ifdef __cplusplus
}
#endif