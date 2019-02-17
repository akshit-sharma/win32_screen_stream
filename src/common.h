#include <windows.h>
#include <windowsx.h>
#include <d3d11.h>

#pragma comment (lib, "d3d11.lib")

// https://www.braynzarsoft.net/viewtutorial/q16390-directx-11-an-introduction-to-the-win32-api

LPCTSTR WndClassName = "firstwindow";
HWND hwnd = NULL;

const int Width = 800;
const int Height = 600;

bool InitializeWindow(HINSTANCE hInstance,
	int ShowWnd, int width, int height, bool windowed);

int messageloop();

LRESULT CALLBACK WndProc(HWND hWnd, UINT msg,
	WPARAM wParam, LPARAM lParam);

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	LPSTR lpCmdLine, int nShowCmd);
