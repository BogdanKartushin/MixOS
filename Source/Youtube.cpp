//#include <windows.h>
//#include <cstring>
//#include <cstdlib>                   //�� ��������� ��������
//// ������ � ���� emulate.cpp ���     //� ���� � ��� ������ ������, �� �� �������?
//// ������� 3 ��� � ������
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
//#include <fstream>
//
//
//
//HWND MENUMENUMENU;
//HWND MENUMENUMENU1;
//HWND MENUMENUMENU2;
//HWND MENUMENUMENU3;
//HSTREAM YOUTUBER;
//
//#pragma comment(linker,"/manifestdependency:\"type='win32' \
//                        name='Microsoft.Windows.Common-Controls' \
//                        version='6.0.0.0' processorArchitecture='*'\
// publicKeyToken='6595b64144ccf1df' language='*'\"")
//#pragma comment(lib, "winmm.lib")
//#pragma comment(lib, "bass")
//using namespace std;
//char str1[1024];
//
//HDC hdc;
//PAINTSTRUCT ps;
//HBRUSH hBrush = CreateSolidBrush(RGB(76,0 ,153));
//HWND hTrack;
////������ ��� ����� =)
//
//
//static LRESULT CALLBACK wnd_proc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
//    switch (uMsg) {
//
//    case WM_CREATE: {
//
//
//        int a = 140;
//
//        HMENU hMenubar = CreateMenu();
//
//        HMENU hAbout = CreateMenu();
//        HMENU hColorYT = CreateMenu();
//
//        
//
//        AppendMenu(hMenubar, MF_POPUP, (UINT_PTR)hAbout, "�������");
//        AppendMenu(hMenubar, MF_POPUP, (UINT_PTR)hColorYT, "������� ����");
//
//
//
//        CreateWindow(TEXT("BUTTON"), TEXT("������� ����� � Youtube"), WS_VISIBLE | WS_CHILD, 45 + a, 130, 240, 25, hWnd, (HMENU)MENUMAKER, NULL, NULL);
//
//
//        BASS_Init(-1, 44100, 0, 0, NULL);
//
//
//        SetClassLong(hWnd, GCL_STYLE, GetClassLong(hWnd, GCL_STYLE));
//
//
//        AppendMenu(hAbout, MF_STRING, STRANNIK, "� ���������");
//        AppendMenu(hColorYT, MF_STRING, COLORYT, "��� ����");
//
//
//
//
//
//        SetMenu(hWnd, hMenubar);
//
//
//        BASS_Start();     //��� ����� ������� � �������� ���. �� ���� ������ ������ ������ ������ ����� ������� �� ������ ������. ��� ���� ����� ����� �������� ��������
//        // ����� ��� ��� �����    //��, �� �� �������, ������ �������� � ������ ������ ���� ���? �������� ������, ��� ��� ������ � ������ ������ �� ������. �� ����� ������ � ������ ���������� ���� ���? ���� ��� emulate.cpp ����������.
//        // ������ ��� � �� ����� ������� ����
//        // � ��������� � ��������� �� �������� ����� ��� ������ 
//        YOUTUBER = BASS_StreamCreateFile(FALSE, "MusicPlayer\\Your\\Youtube.mp3", 0, 0, 0);
//        BASS_ChannelPlay(YOUTUBER, false);// ��� ������ ��� �������� ��������. � ��� ���� ��?
//        // ��������������� ���� � ������     ��� �� ���.... �������. �� ������ ��� ��������� ��������.
//        // � ����� ����� �����???  ��� � ������ ��� �������� ���� ���� ���������� �� ������� �� ������ ������. �� ��� ��� ��������� ����� ��������� ����� �������. ���
//
//        break;
//    }
//    case WM_COMMAND:
//            //������ ����� ����� �� ��������, � ���� �����������....
//    {
//
//        int len90;                                                                                                              
//        TCHAR video[1200];
//        len90 = GetWindowText(MENUMENUMENU, video, 1200);
//        if (LOWORD(wParam) == MENUMAKER)
//        {
//            int a = 140;   //���, ������ ������ ����� ��� ���. ������ ������. ���� �������� ������ ��������� �� ��� ������������, ��� ������������ ����. =) ��� Youtube.cpp Emulate.cpp, quest.cpp.  �� ����� ����� ���� ��� ����� ����������. ����� �������, �� �����, ��� ��� ����� ��� ��� ������ ���������.
//            // � ���� � ������ ��������???    //� � ������, ��� �������, ���� ��� ��� ���������, ��� �� ����� ��� ���� ������ ����� ����, �� ���� �� �������� ��������� �������������, �����-������, �� ������ ����� ������ ������������� ���� ��������� =).
//            //��
//            MENUMENUMENU = CreateWindow(TEXT("EDIT"), TEXT("������ �� ����� �� Youtube"), WS_CHILD | WS_VISIBLE | WS_BORDER | ES_AUTOHSCROLL | ES_AUTOVSCROLL | ES_MULTILINE, 10, 500, 605, 70, hWnd, (HMENU)WRITING, NULL, 0);
//            CreateWindow(TEXT("BUTTON"), TEXT("�������"), WS_VISIBLE | WS_CHILD, 120 + a, 360, 100, 25, hWnd, (HMENU)MAKEMAKE, NULL, NULL);
//            ShowWindow(GetDlgItem(hWnd, MENUMAKER), SW_HIDE);
//            CreateWindow(TEXT("STATIC"), TEXT("                ����� ������� ����� ����:\n\n1) �������� ������ �� ����� � ���� ��� �����.\n2) ������ ������ <<�������>>.\n\nP.S ����������, ��� �� �� �������� =)\n\nP.S.S ������ ���� ������ ����� =)"), WS_VISIBLE | WS_CHILD, 150, 90, 325, 140, hWnd, (HMENU)NULL, NULL, NULL);
//
//            hTrack = CreateWindow(TRACKBAR_CLASS, "SOUND", WS_CHILD | TBS_AUTOTICKS | TBSTYLE_TOOLTIPS | LVS_EX_TRANSPARENTBKGND | WS_VISIBLE, 150, 250, 320, 30, hWnd, (HMENU)LENMUSIC, NULL, NULL);
//            CreateWindow(TEXT("STATIC"), TEXT("���������"), WS_VISIBLE | WS_CHILD, 130 + a, 290, 70, 18, hWnd, (HMENU)MAKEMAKE, NULL, NULL);
//                                            //PERFECT
//                                            // PROFIT     ������ ����� �� ������ � Emulate.cpp ������ ���� ��������� �������� ������� ��������� ������ �� 20
//        
//        }                              //��������� �����, ��� ������ ���� ������ ��������� =)
//        // ��� ����������� :)   �� ������ �������  �� ���� ����� ����� ��� � � Createwindowstext(static)
//
//
//        if (LOWORD(wParam) == STRANNIK)
//        {
//            MessageBoxA(hWnd, "��� ��������� ��� ���������� ������� � Youtube.\n������� Daniel Myslivets �� ��������������� ���������� ����������, ��� ������� � ������ ������ ���� GUI", "�������", MB_ICONASTERISK);
//
//        }
//        if (LOWORD(wParam) == MAKEMAKE)
//        {
//            
//            ofstream Proga;
//            string videos = video;
//            Proga.open("MusicPlayer\\Youtube\\bat.bat");
//            Proga << "MusicPlayer\\Youtube\\yt-dlp.exe �format mp4 " << videos << endl;
//            Proga << "echo Your video has been downloaded, and stay in MusicPlayer's directory" << endl;
//            Proga.close();
//            system("MusicPlayer\\Youtube\\bat.bat");
//            system("del MusicPlayer\\Youtube\\bat.bat");
//            MessageBoxA(hWnd, "���� ����� ���� �������!\n������ ��� ����� � ����� � �������", "�����!", MB_ICONASTERISK);
//        }
//        if (LOWORD(wParam) == COLORYT)
//        {
//            
//            CHOOSECOLOR cc;
//            static COLORREF acrCustClr[16]; // ������ ���. ������
//            static DWORD rgbCurrent;        // ��������� ��������� ����
//
//            ZeroMemory(&cc, sizeof(CHOOSECOLOR));
//            cc.lStructSize = sizeof(CHOOSECOLOR);
//            cc.hwndOwner = hWnd;
//            cc.lpCustColors = (LPDWORD)acrCustClr;
//            cc.rgbResult = rgbCurrent;
//            cc.Flags = CC_FULLOPEN | CC_RGBINIT;
//
//            if (ChooseColor(&cc) == TRUE) 
//            {
//                hBrush = CreateSolidBrush(cc.rgbResult);
//                rgbCurrent = cc.rgbResult;
//                InvalidateRect(hWnd, NULL, FALSE);
//            }                   //������, ����� ����� ������� ������������� ����������? � ������ ������ ������ ���� ���.���,� ������ ��������� �����������.....
//            
//             //������-�� ������� ����������� �����, ��� ������ � ������� ����....     //������ ���� ��������, �� ���� ��� ���� �����������.
//        }
//        break;
//
//        case WM_HSCROLL: {
//            if (hTrack == (HWND)lParam)
//            {
//                BASS_ChannelSetAttribute(YOUTUBER, BASS_ATTRIB_VOL, SendMessage(hTrack, TBM_GETPOS, 80, 100));
//            }
//        } break;
//
//        case WM_PAINT: {
//            hdc = BeginPaint(hWnd, &ps);
//            FillRect(hdc, &ps.rcPaint, hBrush);
//            EndPaint(hWnd, &ps);
//        } break;
//
//    case WM_DESTROY: {
//        PostQuitMessage(0);
//        return 0;
//
//        break;
//
//    }
//
//
//    default:
//        return DefWindowProc(hWnd, uMsg, wParam, lParam);
//    }
//    return 0;
//    }
//}
//int WINAPI main()
//{
//    WNDCLASS op;
//    ZeroMemory(&op, sizeof(WNDCLASS));
//    op.lpfnWndProc = wnd_proc;
//    op.hInstance = GetModuleHandle(NULL);
//    op.lpszClassName = "test32cls";
//    op.hCursor = LoadCursor(NULL, IDC_ARROW);
//    //op.hbrBackground = CreateSolidBrush(RGB(76,0 ,153));
//    RegisterClass(&op);
//
//
//    CreateWindowA(op.lpszClassName, "��������� ����� � ����� ver 1.1", WS_CAPTION | WS_SYSMENU | WS_MINIMIZEBOX| WS_VISIBLE, 100, 100, 640, 640, NULL, NULL, op.hInstance, NULL);
//    MSG msg;
//    while (GetMessage(&msg, NULL, 0, 0)) {
//        TranslateMessage(&msg);
//        DispatchMessage(&msg);
//
//    }
//
//}