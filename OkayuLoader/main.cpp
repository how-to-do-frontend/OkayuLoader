#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup")
#define DIRECTINPUT_VERSION 0x0800
#include "ui_backend.h"
#include <dwmapi.h>

int main() 
{
	RenderUI();
	return 0;
}
