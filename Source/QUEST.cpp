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
//#define STRANNI 90
//
//#pragma comment(lib, "winmm.lib")
//#pragma comment(lib, "bass")
//#pragma comment(linker,"/manifestdependency:\"type='win32' \
//                        name='Microsoft.Windows.Common-Controls' \
//                        version='6.0.0.0' processorArchitecture='*'\
// publicKeyToken='6595b64144ccf1df' language='*'\"")
//
//using namespace std;
//char str1[1024];
//HSTREAM QUEST_THEME;
//HSTREAM KILL;
//HSTREAM LADAV;
//HSTREAM SVOBODA;
//HSTREAM SCREAM;
//HSTREAM REMIX;
//
//
//
//
//static LRESULT CALLBACK wnd_proc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
//    switch (uMsg) {
//
//    case WM_CREATE: {
//        
//        HMENU hMenubar = CreateMenu();
//        HMENU hAbout = CreateMenu();
//        AppendMenu(hMenubar, MF_POPUP, (UINT_PTR)hAbout, "�������");
//        SetClassLong(hWnd, GCL_STYLE, GetClassLong(hWnd, GCL_STYLE));
//        AppendMenu(hAbout, MF_STRING, STRANNIK, "� ���������");
//        AppendMenu(hAbout, MF_STRING, STRANNI, "��������");
//        SetMenu(hWnd, hMenubar);
//        BASS_Init(-1, 44100, 0, 0, NULL);
//        SetWindowText(hWnd, ("�������� �����"));
//        CreateWindow(TEXT("BUTTON"), TEXT("������ ����"), WS_VISIBLE | WS_CHILD, 200, 100, 250, 150, hWnd, (HMENU)ID_BUTTON, NULL, NULL);
//        break;
//    }
//    case WM_COMMAND: {
//        if (LOWORD(wParam) == STRANNIK)
//        {
//            MessageBoxA(hWnd, "���� ����� �������� ����� ���� ������� ��������� ������. �� ������������� �������. � ��� �� ������� �����?", "� ���������", MB_OK);
//        }
//        if (LOWORD(wParam) == STRANNI)
//        {
//            HSTREAM SCREAM = BASS_StreamCreateFile(FALSE, "MusicPlayer\\quest\\skrimer.mp3", 0, 0, 0);
//            BASS_ChannelPlay(SCREAM, false);
//            HSTREAM REMIX = BASS_StreamCreateFile(FALSE, "MusicPlayer\\quest\\REMIX.mp3", 0, 0, 0);
//            BASS_ChannelPlay(REMIX, false);
//            MessageBoxA(hWnd, "��������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������", "��������", MB_ICONERROR);
//            MessageBoxA(hWnd, "��������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������", "��������", MB_ICONERROR);
//            MessageBoxA(hWnd, "��������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������", "��������", MB_ICONERROR);
//            MessageBoxA(hWnd, "��������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������", "��������", MB_ICONERROR);
//            MessageBoxA(hWnd, "��������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������", "��������", MB_ICONERROR);
//            MessageBoxA(hWnd, "��������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������", "��������", MB_ICONERROR);
//            MessageBoxA(hWnd, "��������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������", "��������", MB_ICONERROR);
//            MessageBoxA(hWnd, "��������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������", "��������", MB_ICONERROR);
//            MessageBoxA(hWnd, "��������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������", "��������", MB_ICONERROR);
//            MessageBoxA(hWnd, "��������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������", "��������", MB_ICONERROR);
//            MessageBoxA(hWnd, "��������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������", "��������", MB_ICONERROR);
//            MessageBoxA(hWnd, "��������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������", "��������", MB_ICONERROR);
//            MessageBoxA(hWnd, "��������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������", "��������", MB_ICONERROR);
//            BASS_Stop();
//            BASS_Start();
//        }
//        if (LOWORD(wParam) == ID_BUTTON)
//        {
//            
//            SetClassLong(hWnd, GCL_STYLE, GetClassLong(hWnd, GCL_STYLE));
//            QUEST_THEME = BASS_StreamCreateFile(FALSE, "MusicPlayer\\quest\\quest.mp3", 0, 0, 0);
//            BASS_Stop();
//            BASS_Start();
//            BASS_ChannelPlay(QUEST_THEME, false);
//            ShowWindow(GetDlgItem(hWnd, ID_BUTTON), SW_HIDE);
//            CreateWindow(TEXT("STATIC"), TEXT(""), WS_VISIBLE | WS_CHILD, 225, 10, 450, 12, hWnd, (HMENU)NULL, NULL, NULL);
//            CreateWindow(TEXT("STATIC"), TEXT("�� ���������� � ������ ��������, ������� �� ��� ������ ����,����� ����, ������ �� ��� ��������, ������� ������.                                                     ���� ������?      "), WS_VISIBLE | WS_CHILD, 100, 10, 450, 50, hWnd, (HMENU)NULL, NULL, NULL);
//            CreateWindow(TEXT("BUTTON"), TEXT("������ "), WS_VISIBLE | WS_CHILD, 230, 75, 165, 35, hWnd, (HMENU)FIRST, NULL, NULL);
//            CreateWindow(TEXT("BUTTON"), TEXT("����� "), WS_VISIBLE | WS_CHILD, 230, 115, 165, 35, hWnd, (HMENU)SECOND, NULL, NULL);
//            CreateWindow(TEXT("BUTTON"), TEXT("��������� �� �������� "), WS_VISIBLE | WS_CHILD, 230, 155, 165, 35, hWnd, (HMENU)THIRD, NULL, NULL);
//        }
//        if (LOWORD(wParam) == FIRST)
//        {
//            SetClassLong(hWnd, GCL_STYLE, GetClassLong(hWnd, GCL_STYLE));
//
//            ShowWindow(GetDlgItem(hWnd, ID_BUTTON), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, FIRST), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, SECOND), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, THIRD), SW_HIDE);
//
//            CreateWindow(TEXT("STATIC"), TEXT(""), WS_VISIBLE | WS_CHILD, 225, 10, 450, 12, hWnd, (HMENU)NULL, NULL, NULL);
//            CreateWindow(TEXT("STATIC"), TEXT("������ 32 ���� �� ������ � �������, ��� ����� ��� ������: BMW X5, LADA VESTA, Toyota Camri. � ��� ��� �������, ������� �� ����!    "), WS_VISIBLE | WS_CHILD, 100, 10, 450, 80, hWnd, (HMENU)NULL, NULL, NULL);
//
//
//            CreateWindow(TEXT("BUTTON"), TEXT("����� � Toyota"), WS_VISIBLE | WS_CHILD, 230, 75, 165, 35, hWnd, (HMENU)FIRST2, NULL, NULL);
//            CreateWindow(TEXT("BUTTON"), TEXT("����� � BMW"), WS_VISIBLE | WS_CHILD, 230, 115, 165, 35, hWnd, (HMENU)SECOND2, NULL, NULL);
//            CreateWindow(TEXT("BUTTON"), TEXT("����� � LADA "), WS_VISIBLE | WS_CHILD, 230, 155, 165, 35, hWnd, (HMENU)THIRD2, NULL, NULL);
//
//
//        }
//        if (LOWORD(wParam) == SECOND)
//        {
//            SetClassLong(hWnd, GCL_STYLE, GetClassLong(hWnd, GCL_STYLE));
//
//            ShowWindow(GetDlgItem(hWnd, ID_BUTTON), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, FIRST), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, SECOND), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, THIRD), SW_HIDE);
//            CreateWindow(TEXT("STATIC"), TEXT(""), WS_VISIBLE | WS_CHILD, 225, 10, 450, 12, hWnd, (HMENU)NULL, NULL, NULL);
//            CreateWindow(TEXT("STATIC"), TEXT("� ��������� �� ����� � ��������, � ������ � ��� ��� ��������... ���� �������� =( ������: ������� �� ������ �����. ���� �� ����� ���������� ������ ������. � ��������� ���, ��� �������� =)"), WS_VISIBLE | WS_CHILD, 100, 10, 450, 80, hWnd, (HMENU)NULL, NULL, NULL);
//            BASS_ChannelStop(QUEST_THEME);
//            BASS_ChannelStop(LADAV);
//            HSTREAM KILL = BASS_StreamCreateFile(FALSE, "MusicPlayer\\quest\\kill.mp3", 0, 0, 0);
//            BASS_ChannelPlay(KILL, false);
//
//        }
//        if (LOWORD(wParam) == THIRD)
//        {
//            SetClassLong(hWnd, GCL_STYLE, GetClassLong(hWnd, GCL_STYLE));
//
//            ShowWindow(GetDlgItem(hWnd, ID_BUTTON), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, FIRST), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, SECOND), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, THIRD), SW_HIDE);
//
//            ShowWindow(GetDlgItem(hWnd, VELOSIPED1), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, VELOSIPED2), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, VELOSIPED), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, HELICOPTER), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, MASHINA), SW_HIDE);
//
//            CreateWindow(TEXT("STATIC"), TEXT(""), WS_VISIBLE | WS_CHILD, 225, 10, 450, 12, hWnd, (HMENU)NULL, NULL, NULL);
//            CreateWindow(TEXT("STATIC"), TEXT("���������� �� �������� �� ��������� �� ����� ������. �� ������� ����� ��������, ������ � ���������. ���� �����?"), WS_VISIBLE | WS_CHILD, 100, 10, 450, 80, hWnd, (HMENU)NULL, NULL, NULL);
//
//
//            CreateWindow(TEXT("BUTTON"), TEXT("����� � ���������"), WS_VISIBLE | WS_CHILD, 230, 75, 165, 35, hWnd, (HMENU)VELOSIPED, NULL, NULL);
//            CreateWindow(TEXT("BUTTON"), TEXT("����� � ������"), WS_VISIBLE | WS_CHILD, 230, 115, 165, 35, hWnd, (HMENU)MASHINA, NULL, NULL);
//            CreateWindow(TEXT("BUTTON"), TEXT("����� � �������� "), WS_VISIBLE | WS_CHILD, 230, 155, 165, 35, hWnd, (HMENU)HELICOPTER, NULL, NULL);
//        }
//
//        if (LOWORD(wParam) == VELOSIPED)
//        {
//            ShowWindow(GetDlgItem(hWnd, VELOSIPED1), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, VELOSIPED2), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, ID_BUTTON), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, FIRST), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, SECOND), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, THIRD), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, VELOSIPED), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, HELICOPTER), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, MASHINA), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, THIRD), SW_HIDE);
//            CreateWindow(TEXT("STATIC"), TEXT("                ��� �� ��������� �� ������� ��������"), WS_VISIBLE | WS_CHILD, 100, 10, 450, 80, hWnd, (HMENU)NULL, NULL, NULL);
//            CreateWindow(TEXT("BUTTON"), TEXT("������� �� ����������"), WS_VISIBLE | WS_CHILD, 220, 75, 185, 35, hWnd, (HMENU)VELOSIPED1, NULL, NULL);
//            CreateWindow(TEXT("BUTTON"), TEXT("������ � ����������"), WS_VISIBLE | WS_CHILD, 220, 115, 185, 35, hWnd, (HMENU)VELOSIPED2, NULL, NULL);
//        }
//
//        if (LOWORD(wParam) == VELOSIPED1)
//        {
//            ShowWindow(GetDlgItem(hWnd, VELOSIPED1), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, VELOSIPED2), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, ID_BUTTON), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, FIRST), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, SECOND), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, THIRD), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, VELOSIPED), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, HELICOPTER), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, MASHINA), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, THIRD), SW_HIDE);
//            CreateWindow(TEXT("STATIC"), TEXT("�� ���? ������ ��������? ������� ������. �� ������������ ������������ ������. �� �������� ������, ��� ������� �� ������ � �������� � ����� �� ��������? ���.... ������: <<����� �����, ����� � ����� �� �������� � �������� ��������, ���� ����� ��� ��� �� ����!>>"), WS_VISIBLE | WS_CHILD, 100, 10, 450, 80, hWnd, (HMENU)NULL, NULL, NULL);
//            BASS_ChannelStop(QUEST_THEME);
//            BASS_ChannelStop(LADAV);
//            HSTREAM KILL = BASS_StreamCreateFile(FALSE, "MusicPlayer\\quest\\kill.mp3", 0, 0, 0);
//            BASS_ChannelPlay(KILL, false);
//
//        }
//        if (LOWORD(wParam) == VELOSIPED2)
//        {
//
//            ShowWindow(GetDlgItem(hWnd, VELOSIPED1), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, VELOSIPED2), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, ID_BUTTON), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, FIRST), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, SECOND), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, THIRD), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, VELOSIPED), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, HELICOPTER), SW_SHOW);
//            ShowWindow(GetDlgItem(hWnd, MASHINA), SW_SHOW);
//            CreateWindow(TEXT("STATIC"), TEXT(""), WS_VISIBLE | WS_CHILD, 225, 10, 450, 12, hWnd, (HMENU)NULL, NULL, NULL);
//            CreateWindow(TEXT("STATIC"), TEXT("�� ��� �� ������ ������ � ���������� � ����� � ������ ���������"), WS_VISIBLE | WS_CHILD, 100, 10, 450, 80, hWnd, (HMENU)NULL, NULL, NULL);
//            CreateWindow(TEXT("BUTTON"), TEXT("����� � ���������"), WS_VISIBLE | WS_CHILD, 230, 75, 165, 35, hWnd, (HMENU)VELOSIPED3, NULL, NULL);
//
//
// 
//
//        }
//
//        if (LOWORD(wParam) == VELOSIPED3)
//        {
//            ShowWindow(GetDlgItem(hWnd, VELOSIPED), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, VELOSIPED1), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, VELOSIPED2), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, VELOSIPED3), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, ID_BUTTON), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, FIRST), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, SECOND), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, THIRD), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, VELOSIPED3), SW_HIDE);
//            CreateWindow(TEXT("STATIC"), TEXT(""), WS_VISIBLE | WS_CHILD, 225, 10, 450, 12, hWnd, (HMENU)NULL, NULL, NULL);
//            CreateWindow(TEXT("STATIC"), TEXT("����� ���������� �������� � ����, �� ���� ������ ������������, ��� �� ��������, ������� �� ������ ���������, ����� �� �� ������ ����� ��������"), WS_VISIBLE | WS_CHILD, 100, 10, 450, 80, hWnd, (HMENU)NULL, NULL, NULL);
//
//        }
//        if (LOWORD(wParam) == MASHINA)
//        {
//            ShowWindow(GetDlgItem(hWnd, VELOSIPED3), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, VELOSIPED1), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, VELOSIPED2), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, ID_BUTTON), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, FIRST), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, SECOND), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, THIRD), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, VELOSIPED), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, HELICOPTER), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, MASHINA), SW_HIDE);
//            CreateWindow(TEXT("STATIC"), TEXT("��� ��������� ������ �������. � ��� ���� �������� � �����������. � ����� ��������� ���������� =). � �����, � ����� ����� �������?"), WS_VISIBLE | WS_CHILD, 100, 10, 450, 80, hWnd, (HMENU)NULL, NULL, NULL);
//            CreateWindow(TEXT("BUTTON"), TEXT("� ������� �������"), WS_VISIBLE | WS_CHILD, 230, 75, 165, 35, hWnd, (HMENU)FUTURE, NULL, NULL);
//            CreateWindow(TEXT("BUTTON"), TEXT("� ������� �������"), WS_VISIBLE | WS_CHILD, 230, 115, 165, 35, hWnd, (HMENU)BACK, NULL, NULL);
//            CreateWindow(TEXT("BUTTON"), TEXT("���������� ������"), WS_VISIBLE | WS_CHILD, 230, 155, 165, 35, hWnd, (HMENU)SUDBA, NULL, NULL);
//            CreateWindow(TEXT("BUTTON"), TEXT("�������� �� ������� ����"), WS_VISIBLE | WS_CHILD, 220, 195, 185, 35, hWnd, (HMENU)FLY, NULL, NULL);
//        }
//
//        if (LOWORD(wParam) == FUTURE)
//        {
//            ShowWindow(GetDlgItem(hWnd, VELOSIPED3), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, VELOSIPED1), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, VELOSIPED2), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, ID_BUTTON), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, FIRST), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, SECOND), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, THIRD), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, VELOSIPED), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, HELICOPTER), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, MASHINA), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, HELICOPTER), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, MASHINA), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, FUTURE), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, BACK), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, SUDBA), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, FLY), SW_HIDE);
//            CreateWindow(TEXT("STATIC"), TEXT("�� ������ � ������� �������, ��� ����� ���� ������, ��� ������� �� ��������. � ��� ���� ������. ������:<<������� �� ��������, �� ������ ��������>> "), WS_VISIBLE | WS_CHILD, 100, 10, 450, 80, hWnd, (HMENU)NULL, NULL, NULL);
//            BASS_ChannelStop(QUEST_THEME);
//            HSTREAM MODEL = BASS_StreamCreateFile(FALSE, "MusicPlayer\\quest\\Model.mp3", 0, 0, 0);
//            BASS_ChannelPlay(MODEL, false);
//
//        }
//        if (LOWORD(wParam) == BACK)
//        {
//            ShowWindow(GetDlgItem(hWnd, VELOSIPED1), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, VELOSIPED2), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, ID_BUTTON), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, FIRST), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, SECOND), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, THIRD), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, VELOSIPED), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, HELICOPTER), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, MASHINA), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, HELICOPTER), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, MASHINA), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, FUTURE), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, VELOSIPED3), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, BACK), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, SUDBA), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, FLY), SW_HIDE);
//            CreateWindow(TEXT("STATIC"), TEXT("�� ������ � ������� ������� � ������ � ���. � ������� ����� 10 ����� ��� ���� ��������. ���� ��������. ������: <<�� ������ ���� � ��� ����. ��� ����� � ��������������>>. "), WS_VISIBLE | WS_CHILD, 100, 10, 450, 80, hWnd, (HMENU)NULL, NULL, NULL);
//            BASS_ChannelStop(QUEST_THEME);
//            BASS_ChannelStop(LADAV);
//            HSTREAM KILL = BASS_StreamCreateFile(FALSE, "MusicPlayer\\quest\\kill.mp3", 0, 0, 0);
//            BASS_ChannelPlay(KILL, false);
//
//        }
//        if (LOWORD(wParam) == SUDBA)
//        {
//            ShowWindow(GetDlgItem(hWnd, VELOSIPED1), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, VELOSIPED2), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, ID_BUTTON), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, FIRST), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, SECOND), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, THIRD), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, VELOSIPED), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, HELICOPTER), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, MASHINA), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, VELOSIPED3), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, HELICOPTER), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, MASHINA), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, FUTURE), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, BACK), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, SUDBA), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, FLY), SW_HIDE);
//            CreateWindow(TEXT("STATIC"), TEXT("������� ���� ������ �� �������� ������ �� ������ ����������� ������, ������� ������ ������������ ����������. � ����� 5 ������ �� ����������. ������: <<�� ������� ���� ���������� ��� ��������. ������� ������������>>."), WS_VISIBLE | WS_CHILD, 100, 10, 450, 80, hWnd, (HMENU)NULL, NULL, NULL);
//            BASS_ChannelStop(QUEST_THEME);
//            BASS_ChannelStop(LADAV);
//            HSTREAM KILL = BASS_StreamCreateFile(FALSE, "MusicPlayer\\quest\\kill.mp3", 0, 0, 0);
//            BASS_ChannelPlay(KILL, false);
//        }
//        if (LOWORD(wParam) == FLY)
//        {
//            ShowWindow(GetDlgItem(hWnd, VELOSIPED3), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, VELOSIPED1), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, VELOSIPED2), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, ID_BUTTON), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, FIRST), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, SECOND), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, THIRD), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, VELOSIPED), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, HELICOPTER), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, MASHINA), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, HELICOPTER), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, MASHINA), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, FUTURE), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, BACK), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, SUDBA), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, FLY), SW_HIDE);
//            CreateWindow(TEXT("STATIC"), TEXT("�� �������� ���� Kavinsky - Testarossa Autodrive � �������� ������ =). ������..  � ����� ��� ����� ���� ������? �� ������� �������!"), WS_VISIBLE | WS_CHILD, 100, 10, 450, 80, hWnd, (HMENU)NULL, NULL, NULL);
//            BASS_ChannelStop(QUEST_THEME);
//            HSTREAM KAVUL = BASS_StreamCreateFile(FALSE, "MusicPlayer\\quest\\Testarossa Autodrive.mp3", 0, 0, 0);
//            BASS_ChannelPlay(KAVUL, false);
//
//        }
//        if (LOWORD(wParam) == HELICOPTER)
//        {
//            ShowWindow(GetDlgItem(hWnd, VELOSIPED3), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, VELOSIPED1), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, VELOSIPED2), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, ID_BUTTON), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, FIRST), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, SECOND), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, THIRD), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, VELOSIPED), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, HELICOPTER), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, MASHINA), SW_HIDE);
//            CreateWindow(TEXT("STATIC"), TEXT("�� ��� ����� �� ������ �� ��������� ����� 1 ���, � ��, ��� ���� � ���� GTA VICE CITY. �� ������, �� �������� �� ������ �������. ���� �������?"), WS_VISIBLE | WS_CHILD, 100, 10, 450, 80, hWnd, (HMENU)NULL, NULL, NULL);
//            CreateWindow(TEXT("BUTTON"), TEXT("� ��������� �� ����"), WS_VISIBLE | WS_CHILD, 230, 75, 165, 35, hWnd, (HMENU)PARENTS, NULL, NULL);
//            CreateWindow(TEXT("BUTTON"), TEXT("��������� � ������"), WS_VISIBLE | WS_CHILD, 230, 115, 165, 35, hWnd, (HMENU)CREMLIN, NULL, NULL);
//            CreateWindow(TEXT("BUTTON"), TEXT("� ���"), WS_VISIBLE | WS_CHILD, 230, 155, 165, 35, hWnd, (HMENU)USA, NULL, NULL);
//
//        }
//        if (LOWORD(wParam) == PARENTS)
//        {
//            ShowWindow(GetDlgItem(hWnd, USA), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, PARENTS), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, CREMLIN), SW_HIDE);
//
//            CreateWindow(TEXT("STATIC"), TEXT("������� ���"), WS_VISIBLE | WS_CHILD, 100, 10, 450, 80, hWnd, (HMENU)NULL, NULL, NULL);
//            CreateWindow(TEXT("BUTTON"), TEXT("�������"), WS_VISIBLE | WS_CHILD, 230, 75, 165, 35, hWnd, (HMENU)BOY, NULL, NULL);
//            CreateWindow(TEXT("BUTTON"), TEXT("�������"), WS_VISIBLE | WS_CHILD, 230, 115, 165, 35, hWnd, (HMENU)GIRLOCHKA, NULL, NULL);
//
//
//        }
//        if (LOWORD(wParam) == USA)
//        {
//            ShowWindow(GetDlgItem(hWnd, USA), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, PARENTS), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, CREMLIN), SW_HIDE);
//            BASS_ChannelStop(QUEST_THEME);
//            CreateWindow(TEXT("STATIC"), TEXT("�� ���������� ��������� � ���. � �� �����-�� ������� ��� �� ���������� �� �������, �����������, ���� ���, ����� 5 ����� �� ���� �������� ������� ���. � ������� ��������� �������� � ��� ��������. �� ��������. ������: <<�� ����������� ���� �������, � �� ����� ��������>> "), WS_VISIBLE | WS_CHILD, 100, 10, 450, 80, hWnd, (HMENU)NULL, NULL, NULL);
//            HSTREAM JACKSON = BASS_StreamCreateFile(FALSE, "MusicPlayer\\quest\\Stranger in Moscow.mp3", 0, 0, 0);
//            BASS_ChannelPlay(JACKSON, false);
//        }
//        if (LOWORD(wParam) == CREMLIN)
//        {
//            ShowWindow(GetDlgItem(hWnd, USA), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, PARENTS), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, CREMLIN), SW_HIDE);
//            BASS_ChannelStop(QUEST_THEME);
//            CreateWindow(TEXT("STATIC"), TEXT("�������� � ������, �� ��������� �������� ������, ������� ��� ������ ����� ��������, ��� ��� ����� ����� ����� �� �������, ����� ��� �������� =). ������: <<���� �� ������, ���� �� ��������� ����� � �����, � �� �������� �������� � ����>> "), WS_VISIBLE | WS_CHILD, 100, 10, 450, 80, hWnd, (HMENU)NULL, NULL, NULL);
//            HSTREAM PUTIN = BASS_StreamCreateFile(FALSE, "MusicPlayer\\quest\\WIDE.mp3", 0, 0, 0);
//            BASS_ChannelPlay(PUTIN, false);
//        }
//
//        if (LOWORD(wParam) == GIRLOCHKA)
//        {
//            ShowWindow(GetDlgItem(hWnd, USA), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, PARENTS), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, CREMLIN), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, BOY), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, GIRLOCHKA), SW_HIDE);
//
//            CreateWindow(TEXT("STATIC"), TEXT("�� �������� �� ���� � ���������. ��� ������ ������?"), WS_VISIBLE | WS_CHILD, 100, 10, 450, 80, hWnd, (HMENU)NULL, NULL, NULL);
//            CreateWindow(TEXT("BUTTON"), TEXT("�������� ���������"), WS_VISIBLE | WS_CHILD, 230, 75, 165, 35, hWnd, (HMENU)HELP1, NULL, NULL);
//            CreateWindow(TEXT("BUTTON"), TEXT("����� � ���"), WS_VISIBLE | WS_CHILD, 230, 115, 165, 35, hWnd, (HMENU)SHOWER, NULL, NULL);
//            CreateWindow(TEXT("BUTTON"), TEXT("����� � �����"), WS_VISIBLE | WS_CHILD, 230, 155, 165, 35, hWnd, (HMENU)BOYFRIEND1, NULL, NULL);
//
//
//        }
//        if (LOWORD(wParam) == BOY)
//        {
//            ShowWindow(GetDlgItem(hWnd, USA), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, PARENTS), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, CREMLIN), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, BOY), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, GIRLOCHKA), SW_HIDE);
//
//            CreateWindow(TEXT("STATIC"), TEXT("�� �������� �� ���� � ���������. ��� ������ ������?"), WS_VISIBLE | WS_CHILD, 100, 10, 450, 80, hWnd, (HMENU)NULL, NULL, NULL);
//            CreateWindow(TEXT("BUTTON"), TEXT("�������� ���������"), WS_VISIBLE | WS_CHILD, 230, 75, 165, 35, hWnd, (HMENU)HELP1, NULL, NULL);
//            CreateWindow(TEXT("BUTTON"), TEXT("����� � ���"), WS_VISIBLE | WS_CHILD, 230, 115, 165, 35, hWnd, (HMENU)SHOWER, NULL, NULL);
//            CreateWindow(TEXT("BUTTON"), TEXT("����� � �������"), WS_VISIBLE | WS_CHILD, 230, 155, 165, 35, hWnd, (HMENU)DEVA1, NULL, NULL);
//
//        }
//        if (LOWORD(wParam) == BOYFRIEND1)
//        {
//            ShowWindow(GetDlgItem(hWnd, BOYFRIEND1), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, BOY), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, GIRLOCHKA), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, HELP1), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, SHOWER), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, DEVA1), SW_HIDE);
//            CreateWindow(TEXT("STATIC"), TEXT("�� �� ��� �� ����� �� ������� ����������! ������ ������! ���� ��������! �� ����� � ��������! ������: <<������� �� ��������, �� ������ ���������!>>"), WS_VISIBLE | WS_CHILD, 100, 10, 450, 80, hWnd, (HMENU)NULL, NULL, NULL);
//        }
//        if (LOWORD(wParam) == DEVA1)
//
//        {
//            ShowWindow(GetDlgItem(hWnd, BOY), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, GIRLOCHKA), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, HELP1), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, SHOWER), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, DEVA1), SW_HIDE);
//            CreateWindow(TEXT("STATIC"), TEXT("�� �� ��� �� ����� �� ������� ����������! ������� ������� � ������!! ���� ��������! �� ����� � ��������! ������: <<������� �� ��������, �� ������ ���������!>>"), WS_VISIBLE | WS_CHILD, 100, 10, 450, 80, hWnd, (HMENU)NULL, NULL, NULL);
//        }
//        if (LOWORD(wParam) == HELP1)
//        {
//            ShowWindow(GetDlgItem(hWnd, SHOWER), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, DEVA1), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, BOYFRIEND1), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, HELP1), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, LOVING), SW_HIDE);
//            CreateWindow(TEXT("STATIC"), TEXT("��������� �� ����������, ��������� ���������. �� � ����� ������� ����� ����������? ���� ��, �� �������. ���������� ��� ������! � ���� � ������: <<��������� �������>>"), WS_VISIBLE | WS_CHILD, 100, 10, 450, 80, hWnd, (HMENU)NULL, NULL, NULL);
//        }
//        if (LOWORD(wParam) == SHOWER)
//        {
//            ShowWindow(GetDlgItem(hWnd, SHOWER), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, DEVA1), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, BOYFRIEND1), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, HELP1), SW_SHOW);
//            CreateWindow(TEXT("BUTTON"), TEXT("����� ��������� �����"), WS_VISIBLE | WS_CHILD, 230, 115, 165, 35, hWnd, (HMENU)LOVING, NULL, NULL);
//            
//
//        }
//        if (LOWORD(wParam) == LOVING)
//        {
//            ShowWindow(GetDlgItem(hWnd, HELP1), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, LOVING), SW_HIDE);
//            CreateWindow(TEXT("STATIC"), TEXT("����� ���� ������ �� ����� ���� ����� � ���������. ������:<<��� � ����� ������ ������ �������� � �������>>."), WS_VISIBLE | WS_CHILD, 100, 10, 450, 80, hWnd, (HMENU)NULL, NULL, NULL);
//        }
//
//
//        if (LOWORD(wParam) == FIRST2)
//        {
//            SetClassLong(hWnd, GCL_STYLE, GetClassLong(hWnd, GCL_STYLE));
//            UpdateWindow(hWnd);
//            ShowWindow(GetDlgItem(hWnd, ID_BUTTON), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, FIRST), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, SECOND), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, THIRD), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, FIRST2), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, SECOND2), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, THIRD2), SW_HIDE);                                                                                                           
//            CreateWindow(TEXT("STATIC"), TEXT("��� � toyota �� ����������� � ������� ������, ����� ������ ������� � ����� �� ��� �����, ���� �� ��������� ������� �� ��������� ��� � ��������: <<�� �� ������ �������� ��� ��?>>. ���� ��������.������: �� �������� ���� � ������ ��� ����, ��� ����� � ����� ������. �� ����������� ����� ���� � ����������.     "), WS_VISIBLE | WS_CHILD, 100, 10, 450, 480, hWnd, (HMENU)NULL, NULL, NULL);
//            BASS_ChannelStop(QUEST_THEME);
//            BASS_ChannelStop(LADAV);
//            BASS_Stop();
//            BASS_Start();
//
//            HSTREAM ROSB = BASS_StreamCreateFile(FALSE, "MusicPlayer\\quest\\RASB.mp3", 0, 0, 0);
//            BASS_ChannelPlay(ROSB, false);
//
//
//        }
//
//        if (LOWORD(wParam) == SECOND2)
//        {
//            SetClassLong(hWnd, GCL_STYLE, GetClassLong(hWnd, GCL_STYLE));
//
//            ShowWindow(GetDlgItem(hWnd, ID_BUTTON), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, FIRST2), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, SECOND2), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, THIRD2), SW_HIDE);
//            BASS_ChannelStop(QUEST_THEME);
//            HSTREAM KAVINSKY = BASS_StreamCreateFile(FALSE, "MusicPlayer\\quest\\kav.mp3", 0, 0, 0);
//            BASS_ChannelPlay(KAVINSKY, false);
//            CreateWindow(TEXT("STATIC"), TEXT("��� � BMW, �� �������� ���� Kavinsky-Nightcall � �������� �� ������!!!    "), WS_VISIBLE | WS_CHILD, 100, 10, 450, 80, hWnd, (HMENU)NULL, NULL, NULL);
//        }
//        if (LOWORD(wParam) == THIRD2)
//        {
//            SetClassLong(hWnd, GCL_STYLE, GetClassLong(hWnd, GCL_STYLE));
//
//            ShowWindow(GetDlgItem(hWnd, ID_BUTTON), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, FIRST2), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, SECOND2), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, THIRD2), SW_HIDE);
//            BASS_ChannelPause(QUEST_THEME);
//            HSTREAM LADAV = BASS_StreamCreateFile(FALSE, "MusicPlayer\\quest\\trombone.mp3", 0, 0, 0);
//            
//            BASS_ChannelPlay(LADAV, false);
//            BASS_ChannelPlay(QUEST_THEME, false);
//            CreateWindow(TEXT("STATIC"), TEXT("����������� ������� ������, ������ 50 �����, �� ���� ������ ������� �� ������� ����� ��� �� ��������, �� ������ 100 ������ ������ �������� � ��������� ������. �� ������ ���������, � ������ 5 ������ ����� �������, �� ������� 1% �������, ��� ��� ��������� ����� ������ 1 ���. ���� ��������?    "), WS_VISIBLE | WS_CHILD, 100, 10, 450, 80, hWnd, (HMENU)NULL, NULL, NULL);
//            CreateWindow(TEXT("BUTTON"), TEXT("��������� ����"), WS_VISIBLE | WS_CHILD, 220,115, 185, 35, hWnd, (HMENU)FIRST3, NULL, NULL);
//            CreateWindow(TEXT("BUTTON"), TEXT("��������� ������������"), WS_VISIBLE | WS_CHILD, 220, 155, 185, 35, hWnd, (HMENU)SECOND3, NULL, NULL);
//            CreateWindow(TEXT("BUTTON"), TEXT("�������� � Geometry Dash"), WS_VISIBLE | WS_CHILD, 220, 195, 185, 35, hWnd, (HMENU)THIRD3, NULL, NULL);
//        }
//        if (LOWORD(wParam) == FIRST3)
//        {
//            CreateWindow(TEXT("STATIC"), TEXT("������ ��� �������, ��� �� ���? ������ �� �������? � ������� �� ���� ���� ������ �������, ��� � ����� � ���� ���� ������ ����. ���� ��� ������, �� � ����� ��� ����������, � ������ � ������� ���� �����. ��� �� ���?"), WS_VISIBLE | WS_CHILD, 100, 10, 450, 80, hWnd, (HMENU)NULL, NULL, NULL);
//            ShowWindow(GetDlgItem(hWnd, ID_BUTTON), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, FIRST3), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, SECOND3), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, THIRD3), SW_HIDE);
//            CreateWindow(TEXT("BUTTON"), TEXT("����, � ��� � �����-�� ��������..."), WS_VISIBLE | WS_CHILD, 150, 155, 300, 35, hWnd, (HMENU)MOTHER, NULL, NULL);
//            CreateWindow(TEXT("BUTTON"), TEXT("����, � ��� ������!!!"), WS_VISIBLE | WS_CHILD, 150, 200, 300, 35, hWnd, (HMENU)EDU, NULL, NULL);
//        }
//        if (LOWORD(wParam) == EDU)
//        {
//            CreateWindow(TEXT("STATIC"), TEXT("�� ������ ������� ���� ��� �����, ����� ������� ����������. �� ������� ������ �������� �� ��������, ��������� �� ��� � ������� ���������, ������ � ��������. ���� �����? "), WS_VISIBLE | WS_CHILD, 100, 10, 450, 80, hWnd, (HMENU)NULL, NULL, NULL);
//            ShowWindow(GetDlgItem(hWnd, MOTHER), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, EDU), SW_HIDE);
//
//
//
//
//                ShowWindow(GetDlgItem(hWnd, ID_BUTTON), SW_HIDE);
//                ShowWindow(GetDlgItem(hWnd, FIRST), SW_HIDE);
//                ShowWindow(GetDlgItem(hWnd, SECOND), SW_HIDE);
//                ShowWindow(GetDlgItem(hWnd, THIRD), SW_HIDE);
//
//                ShowWindow(GetDlgItem(hWnd, VELOSIPED1), SW_HIDE);
//                ShowWindow(GetDlgItem(hWnd, VELOSIPED2), SW_HIDE);
//                ShowWindow(GetDlgItem(hWnd, VELOSIPED), SW_HIDE);
//                ShowWindow(GetDlgItem(hWnd, HELICOPTER), SW_HIDE);
//                ShowWindow(GetDlgItem(hWnd, MASHINA), SW_HIDE);
//
// 
//
//
//                CreateWindow(TEXT("BUTTON"), TEXT("����� � ���������"), WS_VISIBLE | WS_CHILD, 230, 75, 165, 35, hWnd, (HMENU)VELOSIPED, NULL, NULL);
//                CreateWindow(TEXT("BUTTON"), TEXT("����� � ������"), WS_VISIBLE | WS_CHILD, 230, 115, 165, 35, hWnd, (HMENU)MASHINA, NULL, NULL);
//                CreateWindow(TEXT("BUTTON"), TEXT("����� � �������� "), WS_VISIBLE | WS_CHILD, 230, 155, 165, 35, hWnd, (HMENU)HELICOPTER, NULL, NULL);
//            
//
//
//
//        }
//        if (LOWORD(wParam) == SECOND3)
//        {
//            ShowWindow(GetDlgItem(hWnd, ID_BUTTON), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, FIRST3), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, SECOND3), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, THIRD3), SW_HIDE);
//            CreateWindow(TEXT("STATIC"), TEXT("������� ������������ ������ ��� ��������. �� ��� �� ������, ������ ��� � ��� �� ������� �����. � ����������� ������� ��� ������� ������������� �����."), WS_VISIBLE | WS_CHILD, 100, 10, 450, 80, hWnd, (HMENU)NULL, NULL, NULL);
//            BASS_ChannelStop(QUEST_THEME);
//            BASS_ChannelStop(LADAV);
//            HSTREAM KILL = BASS_StreamCreateFile(FALSE, "MusicPlayer\\quest\\kill.mp3", 0, 0, 0);
//            BASS_ChannelPlay(KILL, false);
//
//        }
//        if (LOWORD(wParam) == MOTHER)
//        {
//            ShowWindow(GetDlgItem(hWnd, ID_BUTTON), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, FIRST3), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, SECOND3), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, THIRD3), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, MOTHER), SW_HIDE);
//
//            CreateWindow(TEXT("STATIC"), TEXT("<<����� �� �� ��������� �������� � �������! ���� � ���� ��������� ����! ��� ��� ������ ����, ����� ����� �� ���� ������. ��, ������ ���� ���������! ������ ��� � ������? ���� � ���� ��� ����� ������!>> - ��� ��� ������ ������� ����. ����� ������� ����������. ������ ������: �� ����� � ������ �������� ����� �����, ����� �� ��������� ������� �� �������� =( "), WS_VISIBLE | WS_CHILD, 100, 10, 450, 480, hWnd, (HMENU)NULL, NULL, NULL);
//            BASS_ChannelStop(QUEST_THEME);
//            BASS_ChannelStop(LADAV);
//            HSTREAM KILL = BASS_StreamCreateFile(FALSE, "MusicPlayer\\quest\\kill.mp3", 0, 0, 0);
//            BASS_ChannelPlay(KILL, false);
//        }
//        if (LOWORD(wParam) == THIRD3)
//        {
//            ShowWindow(GetDlgItem(hWnd, ID_BUTTON), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, FIRST3), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, SECOND3), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, THIRD3), SW_HIDE);
//            ShowWindow(GetDlgItem(hWnd, MOTHER), SW_HIDE);
//            CreateWindow(TEXT("STATIC"), TEXT("������� �����-�� 5 ����� � �� ������ ���� ���� ������� � ����, �� ������� �������. ����� ���� =). ������: �� ������� ���� ����� �������. ����������� ��� ������, �� � ����. ����� �����, ��� � ������."), WS_VISIBLE | WS_CHILD, 100, 10, 450, 480, hWnd, (HMENU)NULL, NULL, NULL);
//            BASS_ChannelStop(QUEST_THEME);
//            BASS_ChannelStop(LADAV);
//            HSTREAM KILL = BASS_StreamCreateFile(FALSE, "MusicPlayer\\quest\\kill.mp3", 0, 0, 0);
//            BASS_ChannelPlay(KILL, false);
//        }
//        break;
//
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
//                   return 0;
//    }
//}
//
//int WINAPI main()
//{
//    WNDCLASS op;
//    ZeroMemory(&op, sizeof(WNDCLASS));
//    op.lpfnWndProc = wnd_proc;
//    op.hInstance = GetModuleHandle(NULL);
//    op.lpszClassName = "test32cls";
//    op.hCursor = LoadCursor(NULL, IDC_ARROW);
//    op.hbrBackground = (HBRUSH)(COLOR_BTNFACE + 1);
//    RegisterClass(&op);
//
//
//    CreateWindowA(op.lpszClassName, "Title", WS_OVERLAPPEDWINDOW | WS_VISIBLE, 100, 100, 640, 360, NULL, NULL, op.hInstance, NULL);
//    MSG msg;
//    while (GetMessage(&msg, NULL, 0, 0)) {
//        TranslateMessage(&msg);
//        DispatchMessage(&msg);
//
//    }
//
//}