#include <windows.h>
#include "PluginDefinition.h"

FuncItem funcItem[1];
HANDLE hModule;

void show3DView() {
    MessageBox(NULL, L"3D View Placeholder - GCode Render Here", L"GCodeViewer", MB_OK);
}

extern "C" {

__declspec(dllexport) void pluginInit(HANDLE h) {
    hModule = h;
}

__declspec(dllexport) void pluginCleanUp() {}

__declspec(dllexport) void commandMenuInit() {
    funcItem[0]._pFunc = show3DView;
    wcscpy_s(funcItem[0]._itemName, TEXT("Show G-Code View"));
    funcItem[0]._init2Check = false;
    funcItem[0]._pShKey = NULL;
}

__declspec(dllexport) FuncItem* getFuncsArray(int* nbF) {
    *nbF = 1;
    return funcItem;
}

__declspec(dllexport) void beNotified(SCNotification* notifyCode) {}
__declspec(dllexport) LRESULT messageProc(UINT, WPARAM, LPARAM) { return TRUE; }

}