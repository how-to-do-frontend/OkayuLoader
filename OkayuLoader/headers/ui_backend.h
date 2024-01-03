#pragma once
#include "imgui.h"
#include "imgui_impl_dx9.h"
#include "imgui_impl_win32.h"
#include <d3d9.h>
#include <dinput.h>
#include <tchar.h>
#include <chrono>
#include <thread>
#include <windows.h>
#include <string> 
#include <stdio.h>
#include <dwmapi.h>

extern LPCWSTR AppClass;
extern LPCWSTR AppName;
extern LPDIRECT3D9;
extern LPDIRECT3DDEVICE9;
extern D3DPRESENT_PARAMETERS;
extern ImFont* DefaultFont;

int RenderUI();

HRESULT CreateDeviceD3D(HWND hWnd);
void CleanupDeviceD3D();
void ResetDevice();
extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
LRESULT WINAPI WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
void RenderBlur(HWND hwnd);
