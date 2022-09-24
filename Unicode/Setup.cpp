//#include <windows.h>
//#include <cstring>
//#include <cstdlib>
//#include <cstdio>
//#include <tchar.h>
//#include <wchar.h>
//#include "resource.h"
//#include"targetver.h"
//#include "framework.h"
//#include "targetver.h"
//#include <conio.h>
//#include <shlobj.h>
//#include <ks.h>
//#include <string>
//#include<mciapi.h>
//#include<Mmsystem.h>
//#include "Names.h"
//#include "bass.h"
//
//#pragma comment(lib, "winmm.lib")
//#pragma comment(lib, "bass")
//
//#define WIN_X 640
//#define WIN_Y 400
//#define FRAME_Y 24
//#define FRAME_BTN_SIZE 20
//#define FRAME_BTN_MARGIN 2
//
//#define ID_EXIT 1
//
//using namespace std;
//
//wchar_t str1[1024];
//
//LRESULT CALLBACK wnd_proc(HWND hWnd, UINT messg,
//    WPARAM wParam, LPARAM lParam)
//{
//    DRAWITEMSTRUCT* pdis;
//    static HBRUSH Frame_Btn;
//    //÷икл обработки сообщений
//    switch (messg)
//    {
//    case WM_CREATE:
//        //CreateWindow(L"STATIC", L"MixOS_Setup_Titlebar", WS_CHILD | WS_VISIBLE | SS_OWNERDRAW | SS_NOTIFY, 0, 0, WIN_X, FRAME_Y, hWnd, NULL, NULL, NULL);
//        Frame_Btn = CreateSolidBrush(0x4DBD46);
//        CreateWindow(L"BUTTON", NULL, WS_CHILD | WS_VISIBLE | BS_OWNERDRAW, WIN_X - FRAME_BTN_SIZE - FRAME_BTN_MARGIN, FRAME_BTN_MARGIN, FRAME_BTN_SIZE, FRAME_BTN_SIZE, hWnd, (HMENU)ID_EXIT, NULL, NULL);
//        AnimateWindow(hWnd, 200, AW_ACTIVATE | AW_BLEND);
//        break;
//    case WM_COMMAND:
//        switch (LOWORD(wParam))
//        {
//        case ID_EXIT:
//            SendMessage(hWnd, WM_SYSCOMMAND, SC_CLOSE, 0);
//            break;
//        default:
//            return(DefWindowProc(hWnd, messg, wParam, lParam));
//        }
//        break;
//    case WM_DRAWITEM:
//        pdis = (DRAWITEMSTRUCT*)lParam;
//        if (pdis->CtlID == ID_EXIT)
//        {
//            SelectObject(pdis->hDC, (HFONT)GetStockObject(SYSTEM_FIXED_FONT));
//            FillRect(pdis->hDC, &pdis->rcItem, Frame_Btn);
//            SetBkMode(pdis->hDC, TRANSPARENT);
//            DrawText(pdis->hDC, L"x", 1, &pdis->rcItem, DT_CENTER | DT_VCENTER | DT_NOCLIP | DT_SINGLELINE);
//            return TRUE;
//        }
//        break;
//    case WM_LBUTTONDOWN:
//        if (HIWORD(lParam) <= FRAME_Y)
//            SendMessage(hWnd, WM_NCLBUTTONDOWN, HTCAPTION, 0);
//        break;
//    case WM_CLOSE:
//        AnimateWindow(hWnd, 200, AW_HIDE | AW_BLEND);
//        SendMessage(hWnd, WM_DESTROY, 0, 0);
//        break;
//        //сообщение выхода - разрушение окна
//    case WM_DESTROY:
//        PostQuitMessage(0); //ѕосылаем сообщение выхода с кодом 0 - нормальное завершение
//        break;
//
//    default:
//        return(DefWindowProc(hWnd, messg, wParam, lParam)); //освобождаем очередь приложени€ от нераспознаных
//    }
//    return 0;  
//}
//
//          
//
//int WINAPI wmain()  
//{
//    WNDCLASS op;
//    ZeroMemory(&op, sizeof(WNDCLASS));
//    op.lpfnWndProc = wnd_proc;   
//    op.hInstance = GetModuleHandle(NULL);   
//    op.lpszClassName = L"MixOS_Setup";
//    op.hCursor = LoadCursor(NULL, IDC_ARROW);
//    op.hbrBackground = (HBRUSH)(COLOR_BTNFACE+1);
//    op.style = CS_BYTEALIGNWINDOW | CS_BYTEALIGNCLIENT;
//    RegisterClass(&op);
//
//
//    CreateWindowEx(WS_EX_TOPMOST,op.lpszClassName, L"”становщик MixOS", WS_POPUP | WS_VISIBLE, 100, 100, WIN_X, WIN_Y, NULL, NULL, op.hInstance, NULL);
//    MSG msg;
//    while (GetMessage(&msg, NULL, 0, 0)) {
//        TranslateMessage(&msg);
//        DispatchMessage(&msg);
//
//    }
//
//}
