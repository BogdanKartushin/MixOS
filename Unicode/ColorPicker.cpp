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
//
//
//
//#pragma comment(lib, "winmm.lib")
//#pragma comment(lib, "bass")
//
//#define ID_PICKFROMFORM 1
//#define ID_PICKFROMSCREEN 2
//#define ID_ENGLISH 3
//#define ID_RUSSIAN 4
//#define ID_COPYRIGHT 5
//
//using namespace std;
//wchar_t str1[1024];
//LRESULT CALLBACK wnd_proc(HWND hWnd, UINT messg,
//    WPARAM wParam, LPARAM lParam)
//{
//    static HWND hEdit;
//    //Цикл обработки сообщений
//    switch (messg)
//    {
//    case WM_CREATE:
//        CreateWindow(L"STATIC", L"Author: Z_Kraf1er_Z, © StrannikCorp 2022", WS_CHILD | WS_VISIBLE | SS_CENTER, 10, 10, 265, 30, hWnd, (HMENU)ID_COPYRIGHT, NULL, NULL);
//        CreateWindow(L"BUTTON", L"Pick from choose color form", WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON, 10, 55, 265, 25, hWnd, (HMENU)ID_PICKFROMFORM, NULL, NULL);
//        hEdit = CreateWindow(L"EDIT", NULL, WS_CHILD | WS_VISIBLE | WS_BORDER | ES_READONLY, 10, 85, 265, 20, hWnd, NULL, NULL, NULL);
//        CreateWindow(L"BUTTON", L"English", WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON | WS_DISABLED, 10, 130, 100, 25, hWnd, (HMENU)ID_ENGLISH, NULL, NULL);
//        CreateWindow(L"BUTTON", L"Русский", WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON, 175, 130, 100, 25, hWnd, (HMENU)ID_RUSSIAN, NULL, NULL);
//        break;
//    case WM_COMMAND:
//        switch (LOWORD(wParam))
//        {
//        case ID_ENGLISH:
//            SetWindowText(GetDlgItem(hWnd, ID_PICKFROMFORM), L"Pick from choose color form");
//            SetWindowText(hWnd, L"MixOS Color Picker");
//            SetDlgItemText(hWnd, ID_COPYRIGHT, L"Author: Z_Kraf1er_Z, © StrannikCorp 2022");
//            EnableWindow(GetDlgItem(hWnd, ID_RUSSIAN), TRUE);
//            EnableWindow(GetDlgItem(hWnd, ID_ENGLISH), FALSE);
//            break;
//        case ID_RUSSIAN:
//            SetWindowText(GetDlgItem(hWnd, ID_PICKFROMFORM), L"Выбрать из формы выбора цвета");
//            SetWindowText(hWnd, L"Колор пикер из MixOS");
//            SetDlgItemText(hWnd, ID_COPYRIGHT, L"Автор: Z_Kraf1er_Z, © StrannikCorp 2022");
//            EnableWindow(GetDlgItem(hWnd, ID_ENGLISH), TRUE);
//            EnableWindow(GetDlgItem(hWnd, ID_RUSSIAN), FALSE);
//            break;
//        case ID_PICKFROMFORM:
//        {
//            CHOOSECOLOR cc;
//            static COLORREF acrCustClr[16];
//            static DWORD rgbCurrent;
//
//            ZeroMemory(&cc, sizeof(cc));
//            cc.lStructSize = sizeof(cc);
//            cc.hwndOwner = hWnd;
//            cc.lpCustColors = (LPDWORD)acrCustClr;
//            cc.rgbResult = rgbCurrent;
//            cc.Flags = CC_FULLOPEN | CC_RGBINIT | CC_SOLIDCOLOR;
//
//            if (ChooseColor(&cc) == TRUE)
//            {
//                _swprintf(str1, L"0x%X", cc.rgbResult);
//                SetWindowText(hEdit, str1);
//                rgbCurrent = cc.rgbResult;
//            }
//        }
//        break;
//        default:
//            return(DefWindowProc(hWnd, messg, wParam, lParam));
//        }
//        break;
//        //сообщение выхода - разрушение окна
//    case WM_DESTROY:
//        PostQuitMessage(0); //Посылаем сообщение выхода с кодом 0 - нормальное завершение
//        break;
//
//    default:
//        return(DefWindowProc(hWnd, messg, wParam, lParam)); //освобождаем очередь приложения от нераспознаных
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
//    op.lpszClassName = L"test32cls";
//    op.hCursor = LoadCursor(NULL, IDC_ARROW);
//    op.hbrBackground = (HBRUSH)(COLOR_BTNFACE + 1);
//    op.style = CS_BYTEALIGNWINDOW | CS_BYTEALIGNCLIENT;
//    RegisterClass(&op);
//
//
//    CreateWindowEx(WS_EX_TOPMOST, op.lpszClassName, L"MixOS Color Picker", WS_CAPTION | WS_SYSMENU | WS_MINIMIZEBOX | WS_VISIBLE, (GetSystemMetrics(SM_CXSCREEN) - 300) / 2, (GetSystemMetrics(SM_CYSCREEN) - 200) / 2, 300, 200, NULL, NULL, op.hInstance, NULL);
//    MSG msg;
//    while (GetMessage(&msg, NULL, 0, 0)) {
//        TranslateMessage(&msg);
//        DispatchMessage(&msg);
//
//    }
//
//}
