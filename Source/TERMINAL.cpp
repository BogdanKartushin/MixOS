//#include <windows.h>
//#include <cstring>
//#include<iostream>
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
//#include <fstream>
//#include "bass.h"
//#include <random>
//#include <ctime>
//
//
//
//
//
//HWND COM;
//HSTREAM stroka;
//HSTREAM CHASTUSHKI;
//HSTREAM BONUS;
//HSTREAM REMAX;
//HSTREAM NYANCAT;
//HSTREAM KILL;
//HSTREAM IMPOTENT;
//HSTREAM OXYENNA;
//HSTREAM LIRIKAHOI;
//HSTREAM LJSPQK;
//HSTREAM AEZAKMI;
//#pragma comment(linker,"/manifestdependency:\"type='win32' \
//                        name='Microsoft.Windows.Common-Controls' \
//                        version='6.0.0.0' processorArchitecture='*'\
// publicKeyToken='6595b64144ccf1df' language='*'\"")
//
//#pragma comment(lib, "winmm.lib")
//#pragma comment(lib, "bass")
//using namespace std;
//char str1[1024];
//
//
//static LRESULT CALLBACK wnd_proc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
//    switch (uMsg) {
//    case WM_CREATE: {
//        DeleteObject((HBRUSH)SetClassLongPtr(hWnd, GCLP_HBRBACKGROUND, (LONG_PTR)CreateSolidBrush(RGB(70, 125, 0))));
//        COM = CreateWindow(TEXT("EDIT"), TEXT(""), WS_CHILD | WS_VISIBLE | WS_VSCROLL | WS_HSCROLL | WS_BORDER | ES_AUTOHSCROLL | ES_AUTOVSCROLL | ES_MULTILINE, 10, 50, 350, 350, hWnd, (HMENU)WRITING, NULL, 0);
//        CreateWindow(TEXT("STATIC"), TEXT("������� �������, ��� ��� ���-�� ��� =)."), WS_VISIBLE | WS_CHILD, 35, 15, 280, 25, hWnd, (HMENU)NULL, NULL, NULL);
//        
//        int a = 120;
//
//        HMENU hMenubar = CreateMenu();
//
//        HMENU hAbout = CreateMenu();
//
//        SetWindowText(hWnd, ("�������� StrannikCorp ver 1.1"));
//
//        AppendMenu(hMenubar, MF_POPUP, (UINT_PTR)hAbout, "�������");
//
//        BASS_Init(-1, 44100, 0, 0, NULL);
//
//
//        SetClassLong(hWnd, GCL_STYLE, GetClassLong(hWnd, GCL_STYLE));
//
//
//        AppendMenu(hAbout, MF_STRING, STRANNIK, "� ���������");
//        SetMenu(hWnd, hMenubar);
//        
//        CreateWindowA(TEXT("BUTTON"), TEXT("������ �������"), WS_VISIBLE | WS_CHILD  , 400, 230, 150, 35, hWnd, (HMENU)COMMANDA, NULL, NULL);
//        CreateWindowA(TEXT("BUTTON"), TEXT("������ ������"), WS_VISIBLE | WS_CHILD, 400, 130, 150, 35, hWnd, (HMENU)HELPAS, NULL, NULL);
//        CreateWindowA(TEXT("BUTTON"), TEXT("�������� ����"), WS_VISIBLE | WS_CHILD, 1000, 280, 150, 35, hWnd, (HMENU)GTX745, NULL, NULL);
//        CreateWindowA(TEXT("BUTTON"), TEXT("Windows 3.11"), WS_VISIBLE | WS_CHILD, 1000, 180, 150, 35, hWnd, (HMENU)WIN311, NULL, NULL);
//        break;
//    }
//
//    case WM_COMMAND: 
//    {
//     
//
//        int len5;
//        TCHAR StrC[1200];
//        len5 = GetWindowText(COM, StrC, 1200);
//        if (LOWORD (wParam) == STRANNIK)
//        
//        {
//            MessageBoxA(hWnd, "��� ���������-����������� ��������, ���������� � �����.\n����� �� ����� ��� ������� � ������ ��� ��������� ������������������� ����������� =)", "� ���������", MB_OK);
//        }
//
//        if (LOWORD(wParam) == HELPAS)
//        {
//            MessageBoxA(hWnd, "HELP - ����� ������ �������  \nINFO - ���������� � ���������  \nKILL - ��������������� ������ ������ �����  \nNYANCAT - ������������ ������ ������� ����.  \nSTOPMUSIC - ���������� ������.  \n�� ��������� ������ CON!!!  \n��������� ������� � �������, �� �� ����� 30 ���� =).", "������ �������", MB_OK);
//            MessageBoxA(hWnd,"����� ������� ��� ����� ��� ��������.\n�� ���� �� �� ������ �������� � ���� ���������, �� ������� ������� ������� ��� tarkvara.\n� ������ mangima � ��� �����. ��� ���� ����� ��� ��� =). �� ������� ����, �� WINDOWS...","������ 1",MB_OK);
//        }
//        if (LOWORD(wParam) == GTX745)
//        {
//            MessageBoxA(hWnd, "���� �������? � ���� ���� � GTA ��������� ������? ���, �� ���, ���� ��� ����, ����� ��� ��� �� 6 ����� �� GTA san andreas", "�����! ��!!!!", MB_OK);
//
//        }
//       
//        if (LOWORD(wParam) == WIN311)
//        {
//            MessageBoxA(hWnd, "�� ������ ��������� Windows 3.11? ����� �������� ������� ������� ����� =)", "� ���� �� �������?", MB_OK);
//        }
//        
//        
//        
//        if (LOWORD(wParam) == COMMANDA)
//        {
//            string text = StrC;
//
//            if (text == "HELP")
//            {
//                MessageBoxA(hWnd, "HELP - ����� ������ �������  \nINFO - ���������� � ���������  \nKILL - ��������������� ������ ������ �����  \nNYANCAT - ������������ ������ ������� ����.  \nSTOPMUSIC - ���������� ������  \nCMD - ��������� ������ � ���������.  \nQUIT ��� EXIT - ������� ��������.  \n��������� ������� ����� ��������� �� ���� ����������� =).  \nBROWSER - ������� �������  \nP.S ������ ���������� ������ - STRANNIK.", "������ �������", MB_OK);
//            }
//            if (text == "INFO")
//            {
//                MessageBoxA(hWnd, "��� ��������. ����������� ��������. \n������� �������� � ����������� ������ ������ BETA 1.7.\n�, ������, ��� �������� �� �������. \n��� ������� �������, �������� ����������� ����. \n����� �������� ����� ���������� ����� �����, ���� � �� �������.", "���������� � ���������", MB_OK);
//
//            }
//            if (text == "KILL")
//            {
//                KILL = BASS_StreamCreateFile(FALSE, "MusicPlayer\\quest\\kill.mp3", 0, 0, 0);
//
//
//                BASS_ChannelPlay(KILL, false);
//
//                if (LOWORD(wParam) == CLEARRAM)
//                {
//                    BASS_MusicFree(KILL);
//                    BASS_StreamFree(KILL);
//                }
//
//            }
//            if (text == "NYANCAT")
//            {
//
//                NYANCAT = BASS_StreamCreateFile(FALSE, "MusicPlayer\\TERMINAL\\NYANCAT.mp3", 0, 0, 0);
//                BASS_ChannelPlay(NYANCAT, false);
//
//            }
//            if (text == "CMD")
//            {
//                MessageBoxA(hWnd, "� ���, ������. ������ �������� �����? \n� ����� ������ ����������, ��� ��� ���������? \n��, ��� �� ������.", "�������?", MB_ICONERROR);
//            }
//            if (text == "POWERSHELL")
//            {
//                MessageBoxA(hWnd, "�� ������ ��� ��? �� �����. ������ ��������, � ����� ��� ���������� ����. � �������� ����� ������� POWERSHELL1", "��������� � ���������", MB_ICONERROR);
//                BONUS = BASS_StreamCreateFile(FALSE, "MusicPlayer\\TERMINAL\\bonus.mp3", 0, 0, 0);
//                BASS_ChannelPlay(BONUS, false);
//            }
//            if (text == "POWERSHELL1")
//            {
//                system("powershell");
//            }
//            if (text == "rd C: /s/q")
//            {
//                BONUS = BASS_StreamCreateFile(FALSE, "MusicPlayer\\TERMINAL\\bonus.mp3", 0, 0, 0);
//                BASS_ChannelPlay(BONUS, false);
//                REMAX = BASS_StreamCreateFile(FALSE, "MusicPlayer\\TERMINAL\\REMAX.mp3", 0, 0, 0);
//                BASS_ChannelPlay(REMAX, false);
//                MessageBoxA(hWnd, "�������� ���� ��������� ������ - \nCMDCOLOR XX (������ ��, ����� �� 00, �� FF).  \nMLP - �������� My little pony.  \nBROWSER - ������� �������.  \n����� ������� �� ��, � ��� �� ����� ���� �����", "����� �������", MB_ICONASTERISK);
//                system("start MusicPlayer\\TERMINAL\\RD.bat");
//            }
//            if (text == "STOPMUSIC")
//            {
//                BASS_ChannelFree(NYANCAT);
//                BASS_ChannelFree(BONUS);
//                BASS_ChannelFree(REMAX);
//                BASS_ChannelFree(CHASTUSHKI);
//                BASS_StreamFree(NYANCAT);
//                BASS_StreamFree(BONUS);
//                BASS_StreamFree(REMAX);
//                BASS_StreamFree(CHASTUSHKI);
//                BASS_ChannelStop(CHASTUSHKI);
//                BASS_ChannelStop(NYANCAT);
//                BASS_ChannelStop(BONUS);
//                BASS_ChannelStop(REMAX);
//                BASS_Stop();
//                BASS_Start();
//            }
//            if (text == "MLP")
//            {
//                system("start https://www.youtube.com/watch?v=KDcdkNM0zh0&list=PLPiN9r5uRuh3ZuWfLw6HxmRAZCrNTV7Ts");
//            }
//            if (text == "BROWSER")
//            {
//                system("start https://yandex.ru");
//            }
//
//
//
//
//
//            if (text == "QUIT" || text == "EXIT")
//            {
//                PostQuitMessage(0);
//                return 0;
//            }
//            if (text == "STRANNIK")
//            {
//                system("start https://www.youtube.com/channel/UCWlCZoSIqf7mm167pjwIJCw");
//            }
//            if (text == "QUEST")
//            {
//                system("start MusicPlayer\\Quest\\quest.exe");
//            }
//
//
//
//
//
//            if (text == "CMDCOLOR 00")
//            {
//                system("start color 00");
//            }
//            if (text == "CMDCOLOR 01")
//            {
//                system("start color 01");
//            }
//            if (text == "CMDCOLOR 02")
//            {
//                system("start color 02");
//            }
//            if (text == "CMDCOLOR 03")
//            {
//                system("start color 03");
//            }
//            if (text == "CMDCOLOR 04")
//            {
//                system("start color 04");
//            }
//            if (text == "CMDCOLOR 05")
//            {
//                system("start color 05");
//            }
//            if (text == "CMDCOLOR 06")
//            {
//                system("start color 06");
//            }
//            if (text == "CMDCOLOR 07")
//            {
//                system("start color 07");
//            }
//            if (text == "CMDCOLOR 08")
//            {
//                system("start color 08");
//            }
//            if (text == "CMDCOLOR 09")
//            {
//                system("start color 09");
//            }
//            if (text == "CMDCOLOR 0A")
//            {
//                system("start color 0A");
//            }
//            if (text == "CMDCOLOR 0B")
//            {
//                system("start color 0B");
//            }
//            if (text == "CMDCOLOR 0C")
//            {
//                system("start color 0C");
//            }
//            if (text == "CMDCOLOR 0D")
//            {
//                system("start color 0D");
//            }
//            if (text == "CMDCOLOR 0E")
//            {
//                system("start color 0E");
//            }
//            if (text == "CMDCOLOR 0F")
//            {
//                system("start color 0F");
//            }
//
//
//
//
//
//            if (text == "CMDCOLOR 10")
//            {
//                system("start color 10");
//            }
//            if (text == "CMDCOLOR 11")
//            {
//                system("start color 11");
//            }
//            if (text == "CMDCOLOR 12")
//            {
//                system("start color 12");
//            }
//            if (text == "CMDCOLOR 13")
//            {
//                system("start color 13");
//            }
//            if (text == "CMDCOLOR 14")
//            {
//                system("start color 14");
//            }
//            if (text == "CMDCOLOR 15")
//            {
//                system("start color 15");
//            }
//            if (text == "CMDCOLOR 16")
//            {
//                system("start color 16");
//            }
//            if (text == "CMDCOLOR 17")
//            {
//                system("start color 17");
//            }
//            if (text == "CMDCOLOR 18")
//            {
//                system("start color 18");
//            }
//            if (text == "CMDCOLOR 19")
//            {
//                system("start color 19");
//            }
//            if (text == "CMDCOLOR 1A")
//            {
//                system("start color 1A");
//            }
//            if (text == "CMDCOLOR 1B")
//            {
//                system("start color 1B");
//            }
//            if (text == "CMDCOLOR 1C")
//            {
//                system("start color 1C");
//            }
//            if (text == "CMDCOLOR 1D")
//            {
//                system("start color 1D");
//            }
//            if (text == "CMDCOLOR 1E")
//            {
//                system("start color 1E");
//            }
//            if (text == "CMDCOLOR 1F")
//            {
//                system("start color 1F");
//            }
//
//
//
//
//
//
//            if (text == "CMDCOLOR 20")
//            {
//                system("start color 20");
//            }
//            if (text == "CMDCOLOR 21")
//            {
//                system("start color 21");
//            }
//            if (text == "CMDCOLOR 22")
//            {
//                system("start color 22");
//            }
//            if (text == "CMDCOLOR 23")
//            {
//                system("start color 23");
//            }
//            if (text == "CMDCOLOR 24")
//            {
//                system("start color 24");
//            }
//            if (text == "CMDCOLOR 25")
//            {
//                system("start color 25");
//            }
//            if (text == "CMDCOLOR 26")
//            {
//                system("start color 26");
//            }
//            if (text == "CMDCOLOR 27")
//            {
//                system("start color 27");
//            }
//            if (text == "CMDCOLOR 28")
//            {
//                system("start color 28");
//            }
//            if (text == "CMDCOLOR 29")
//            {
//                system("start color 29");
//            }
//            if (text == "CMDCOLOR 2A")
//            {
//                system("start color 2A");
//            }
//            if (text == "CMDCOLOR 2B")
//            {
//                system("start color 2B");
//            }
//            if (text == "CMDCOLOR 2C")
//            {
//                system("start color 2C");
//            }
//            if (text == "CMDCOLOR 2D")
//            {
//                system("start color 2D");
//            }
//            if (text == "CMDCOLOR 2E")
//            {
//                system("start color 2E");
//            }
//            if (text == "CMDCOLOR 2F")
//            {
//                system("start color 2F");
//            }
//
//
//
//
//
//            if (text == "CMDCOLOR 30")
//            {
//                system("start color 30");
//            }
//            if (text == "CMDCOLOR 31")
//            {
//                system("start color 31");
//            }
//            if (text == "CMDCOLOR 32")
//            {
//                system("start color 32");
//            }
//            if (text == "CMDCOLOR 33")
//            {
//                system("start color 33");
//            }
//            if (text == "CMDCOLOR 34")
//            {
//                system("start color 34");
//            }
//            if (text == "CMDCOLOR 35")
//            {
//                system("start color 35");
//            }
//            if (text == "CMDCOLOR 36")
//            {
//                system("start color 36");
//            }
//            if (text == "CMDCOLOR 37")
//            {
//                system("start color 37");
//            }
//            if (text == "CMDCOLOR 38")
//            {
//                system("start color 38");
//            }
//            if (text == "CMDCOLOR 39")
//            {
//                system("start color 39");
//            }
//            if (text == "CMDCOLOR 3A")
//            {
//                system("start color 3A");
//            }
//            if (text == "CMDCOLOR 3B")
//            {
//                system("start color 3B");
//            }
//            if (text == "CMDCOLOR 3C")
//            {
//                system("start color 3C");
//            }
//            if (text == "CMDCOLOR 3D")
//            {
//                system("start color 3D");
//            }
//            if (text == "CMDCOLOR 3E")
//            {
//                system("start color 3E");
//            }
//            if (text == "CMDCOLOR 3F")
//            {
//                system("start color 3F");
//            }
//
//
//
//
//            if (text == "CMDCOLOR 40")
//            {
//                system("start color 40");
//            }
//            if (text == "CMDCOLOR 41")
//            {
//                system("start color 41");
//            }
//            if (text == "CMDCOLOR 42")
//            {
//                system("start color 42");
//            }
//            if (text == "CMDCOLOR 43")
//            {
//                system("start color 43");
//            }
//            if (text == "CMDCOLOR 44")
//            {
//                system("start color 44");
//            }
//            if (text == "CMDCOLOR 45")
//            {
//                system("start color 45");
//            }
//            if (text == "CMDCOLOR 46")
//            {
//                system("start color 46");
//            }
//            if (text == "CMDCOLOR 47")
//            {
//                system("start color 47");
//            }
//            if (text == "CMDCOLOR 48")
//            {
//                system("start color 48");
//            }
//            if (text == "CMDCOLOR 49")
//            {
//                system("start color 49");
//            }
//            if (text == "CMDCOLOR 4A")
//            {
//                system("start color 4A");
//            }
//            if (text == "CMDCOLOR 4B")
//            {
//                system("start color 4B");
//            }
//            if (text == "CMDCOLOR 4C")
//            {
//                system("start color 4C");
//            }
//            if (text == "CMDCOLOR 0D")
//            {
//                system("start color 0D");
//            }
//            if (text == "CMDCOLOR 0E")
//            {
//                system("start color 0E");
//            }
//            if (text == "CMDCOLOR 0F")
//            {
//                system("start color 0F");
//            }
//            if (text == "DIR" || text == "dir")
//            {
//                MessageBoxA(hWnd, "�� ������ ���������� ����������? ��� ������. �� ��� ��� �������� ����������, ������� SECRET", "��������", MB_ICONASTERISK);
//                return 0;
//            }
//            if (text == "SECRET")
//            {
//                MessageBoxA(hWnd, "�������� ����� �������� ��� CHASTUSHKI, �������������� �������� ��������� �� ������ � ���������, ��� ������ �����.", "� ���� ���� ���������!!!! =(", MB_ICONASTERISK);
//                return 0;
//            }
//            if (text == "��������" || text == "CHASTUSHKI")
//            {
//                BASS_StreamFree(CHASTUSHKI);
//                BASS_MusicFree(CHASTUSHKI);
//                BASS_ChannelStop(CHASTUSHKI);
//                BASS_SampleFree(CHASTUSHKI);
//                BASS_StreamFree(IMPOTENT);
//                BASS_MusicFree(IMPOTENT);
//                BASS_ChannelStop(IMPOTENT);
//                BASS_SampleFree(IMPOTENT);
//                BASS_StreamFree(OXYENNA);
//                BASS_MusicFree(OXYENNA);
//                BASS_ChannelStop(OXYENNA);
//                BASS_SampleFree(OXYENNA);
//                BASS_StreamFree(LIRIKAHOI);
//                BASS_MusicFree(LIRIKAHOI);
//                BASS_ChannelStop(LIRIKAHOI);
//                BASS_SampleFree(LIRIKAHOI);
//                BASS_StreamFree(LJSPQK);
//                BASS_MusicFree(LJSPQK);
//                BASS_ChannelStop(LJSPQK);
//                BASS_SampleFree(LJSPQK);
//
//                BASS_StreamFree(AEZAKMI);
//                BASS_MusicFree(AEZAKMI);
//                BASS_ChannelStop(AEZAKMI);
//                BASS_SampleFree(AEZAKMI);
//                CHASTUSHKI = BASS_StreamCreateFile(FALSE, "MusicPlayer\\Sektor\\Chastushki.mp3", 0, 0, 0);
//
//
//                BASS_ChannelPlay(CHASTUSHKI, false);
//
//
//
//
//            }
//            if (text == "MD LPT")
//            {
//                MessageBoxA(hWnd, "� ����� ������� � ���������?\n�� �������� ��� �� �������, � � ��� ���� ����� �����������.\n�� �������� ����������� � �������� ����.", "�������� � ���������?", MB_ICONASTERISK);
//                MessageBoxA(hWnd, "��� � ������ ���������� ������ �������� ����� �� LPT?", "������ ������:", MB_ICONASTERISK);
//                return 0;
//            }
//
//            if (text == "COVOX" ||text== "Covox" || text=="covox")
//            {
//                MessageBoxA(hWnd, "������ ����� - WANT, I", "������� 1", MB_ICONASTERISK);
//                MessageBoxA(hWnd, "����� ���������� � ������ ����� ������ � 2022 ���� �� 30000 ������?", "������ ������:", MB_ICONASTERISK);
//                return 0;
//            }
//            if (text == "RTX 3050" || text == "��� 3050")
//            {
//                MessageBoxA(hWnd, "������� �����, �� ��� �� �����. ������ ����� ����������� - PLAY, TO ", "�������, 2!", MB_ICONASTERISK);
//                MessageBoxA(hWnd, "��������� ����������� �� ���� ����. ����� ����������, ����� �������� �������. ", "����!", MB_ICONASTERISK);
//                return 0;
//            }
//            if (text == "I WANT TO PLAY" || text == "i want to play")
//            {
//                MessageBoxA(hWnd, "������� �� ����������� =)", "����� =)", MB_ICONASTERISK);
//                system("start MusicPlayer\\X3\\M\\1.bat");
//            }
//            if (text == "CON")
//            {
//                MessageBoxA(hWnd, "������ ������� �����? �� ��� ������ ������� ���������. MD CON ��� MKDIR CON", "��������", MB_ICONASTERISK);
//                return 0;
//            }
//            if (text == "COM")
//            {
//                MessageBoxA(hWnd, "������ ������� �����? �� ��� ������ ������� ���������. MD COM ��� MKDIR COM", "�������� 2", MB_ICONASTERISK);
//                return 0;
//            }
//            if (text == "MD CON" || text == "MKDIR CON")
//            {
//                BASS_StreamFree(CHASTUSHKI);
//                BASS_MusicFree(CHASTUSHKI);
//                BASS_ChannelStop(CHASTUSHKI);
//                BASS_SampleFree(CHASTUSHKI);
//                BASS_StreamFree(IMPOTENT);
//                BASS_MusicFree(IMPOTENT);
//                BASS_ChannelStop(IMPOTENT);
//                BASS_SampleFree(IMPOTENT);
//                BASS_StreamFree(OXYENNA);
//                BASS_MusicFree(OXYENNA);
//                BASS_ChannelStop(OXYENNA);
//                BASS_SampleFree(OXYENNA);
//                BASS_StreamFree(LJSPQK);
//                BASS_MusicFree(LJSPQK);
//                BASS_ChannelStop(LJSPQK);
//                BASS_SampleFree(LJSPQK);
//                BASS_StreamFree(LIRIKAHOI);
//                BASS_MusicFree(LIRIKAHOI);
//                BASS_ChannelStop(LIRIKAHOI);
//                BASS_SampleFree(LIRIKAHOI);
//                BASS_StreamFree(AEZAKMI);
//                BASS_MusicFree(AEZAKMI);
//                BASS_ChannelStop(AEZAKMI);
//                BASS_SampleFree(AEZAKMI);
//                IMPOTENT = BASS_StreamCreateFile(FALSE, "MusicPlayer\\Sektor\\IMP.mp3", 0, 0, 0);
//
//
//                BASS_ChannelPlay(IMPOTENT, false);
//            }
//            if (text == "MD COM" || text == "MKDIR COM")
//            {
//                BASS_StreamFree(CHASTUSHKI);
//                BASS_MusicFree(CHASTUSHKI);
//                BASS_ChannelStop(CHASTUSHKI);
//                BASS_SampleFree(CHASTUSHKI);
//                BASS_StreamFree(OXYENNA);
//                BASS_MusicFree(OXYENNA);
//                BASS_ChannelStop(OXYENNA);
//                BASS_SampleFree(OXYENNA);
//                BASS_StreamFree(IMPOTENT);
//                BASS_MusicFree(IMPOTENT);
//                BASS_ChannelStop(IMPOTENT);
//                BASS_SampleFree(IMPOTENT);
//                BASS_StreamFree(LIRIKAHOI);
//                BASS_MusicFree(LIRIKAHOI);
//                BASS_ChannelStop(LIRIKAHOI);
//                BASS_SampleFree(LIRIKAHOI);
//                BASS_StreamFree(LJSPQK);
//                BASS_MusicFree(LJSPQK);
//                BASS_ChannelStop(LJSPQK);
//                BASS_SampleFree(LJSPQK);
//
//                BASS_StreamFree(AEZAKMI);
//                BASS_MusicFree(AEZAKMI);
//                BASS_ChannelStop(AEZAKMI);
//                BASS_SampleFree(AEZAKMI);
//                OXYENNA = BASS_StreamCreateFile(FALSE, "MusicPlayer\\Sektor\\VIA.mp3", 0, 0, 0);
//
//
//                BASS_ChannelPlay(OXYENNA, false);
//            }
//            if (text == "PRN")
//            {
//                MessageBoxA(hWnd, "�������? �� ���� �������� � ��������! ������ ����� ��� ����� MD PRN ��� MKDIR PRN", "�������� 3", MB_ICONASTERISK);
//                return 0;
//            }
//            if (text == "MD PRN" || text == "MKDIR PRN")
//            {
//                BASS_StreamFree(CHASTUSHKI);
//                BASS_MusicFree(CHASTUSHKI);
//                BASS_ChannelStop(CHASTUSHKI);
//                BASS_SampleFree(CHASTUSHKI);
//                BASS_StreamFree(OXYENNA);
//                BASS_MusicFree(OXYENNA);
//                BASS_ChannelStop(OXYENNA);
//                BASS_SampleFree(OXYENNA);
//                BASS_StreamFree(IMPOTENT);
//                BASS_MusicFree(IMPOTENT);
//                BASS_ChannelStop(IMPOTENT);
//                BASS_SampleFree(IMPOTENT);
//                BASS_StreamFree(LIRIKAHOI);
//                BASS_MusicFree(LIRIKAHOI);
//                BASS_ChannelStop(LIRIKAHOI);
//                BASS_SampleFree(LIRIKAHOI);
//                BASS_StreamFree(LJSPQK);
//                BASS_MusicFree(LJSPQK);
//                BASS_ChannelStop(LJSPQK);
//                BASS_SampleFree(LJSPQK);
//
//                BASS_StreamFree(AEZAKMI);
//                BASS_MusicFree(AEZAKMI);
//                BASS_ChannelStop(AEZAKMI);
//                BASS_SampleFree(AEZAKMI);
//                LIRIKAHOI = BASS_StreamCreateFile(FALSE, "MusicPlayer\\Sektor\\LIRIKA.mp3", 0, 0, 0);
//
//
//                BASS_ChannelPlay(LIRIKAHOI, false);
//            }
//            if (text == "MD AUX" || text == "MKDIR AUX")
//            {
//                MessageBoxA(hWnd, "�� �������� ��� ����� ������ ��������. �� ��� ���� �������: <<����� ���������� ����� 4 �� DDR 3 ����������� � ��������������� ���������. ������������ � ��� ������?>>", "��������?", MB_ICONERROR);
//                
//            }
//            if (text == "LJSPQK" || text == "BRINGITON")
//            {
//                MessageBoxA(hWnd, "���� ���������� �������� � �������. ���� ������ �������, ������ ��� ��� �� ������� � GTA San Andreas", "�������, � ����� ��, ����������, � ��� ��������", MB_ICONERROR);
//                BASS_StreamFree(CHASTUSHKI);
//                BASS_MusicFree(CHASTUSHKI);
//                BASS_ChannelStop(CHASTUSHKI);
//                BASS_SampleFree(CHASTUSHKI);
//                BASS_StreamFree(OXYENNA);
//                BASS_MusicFree(OXYENNA);
//                BASS_ChannelStop(OXYENNA);
//                BASS_SampleFree(OXYENNA);
//                BASS_StreamFree(IMPOTENT);
//                BASS_MusicFree(IMPOTENT);
//                BASS_ChannelStop(IMPOTENT);
//                BASS_SampleFree(IMPOTENT);
//                BASS_StreamFree(LIRIKAHOI);
//                BASS_MusicFree(LIRIKAHOI);
//                BASS_ChannelStop(LIRIKAHOI);
//                BASS_SampleFree(LIRIKAHOI);
//                BASS_StreamFree(LJSPQK);
//                BASS_MusicFree(LJSPQK);
//                BASS_ChannelStop(LJSPQK);
//                BASS_SampleFree(LJSPQK);
//                LJSPQK = BASS_StreamCreateFile(FALSE, "MusicPlayer\\GTA\\LJSPQK.mp3", 0, 0, 0);
//                BASS_ChannelPlay(LJSPQK, false);
//            }
//            if (text == "AEZAKMI" || text == "IDOASIPLEASE")
//            {
//                MessageBoxA(hWnd, "�� ��������� �������", "YOU ARE SERIOUS?", MB_ICONERROR);
//                BASS_StreamFree(CHASTUSHKI);
//                BASS_MusicFree(CHASTUSHKI);
//                BASS_ChannelStop(CHASTUSHKI);
//                BASS_SampleFree(CHASTUSHKI);
//                BASS_StreamFree(OXYENNA);
//                BASS_MusicFree(OXYENNA);
//                BASS_ChannelStop(OXYENNA);
//                BASS_SampleFree(OXYENNA);
//                BASS_StreamFree(IMPOTENT);
//                BASS_MusicFree(IMPOTENT);
//                BASS_ChannelStop(IMPOTENT);
//                BASS_SampleFree(IMPOTENT);
//
//                BASS_StreamFree(LIRIKAHOI);
//                BASS_MusicFree(LIRIKAHOI);
//                BASS_ChannelStop(LIRIKAHOI);
//                BASS_SampleFree(LIRIKAHOI);
//
//                BASS_StreamFree(LJSPQK);
//                BASS_MusicFree(LJSPQK);
//                BASS_ChannelStop(LJSPQK);
//                BASS_SampleFree(LJSPQK);
//
//                BASS_StreamFree(AEZAKMI);
//                BASS_MusicFree(AEZAKMI);
//                BASS_ChannelStop(AEZAKMI);
//                BASS_SampleFree(AEZAKMI);
//                AEZAKMI = BASS_StreamCreateFile(FALSE, "MusicPlayer\\GTA\\AEZAKMI.mp3", 0, 0, 0);
//                BASS_ChannelPlay(AEZAKMI, false);
//            }
//            if (text == "GTX745" || text == "GTX 745" || text == "NVIDIA GTX 745")
//            {
//                MessageBoxA(hWnd, "�����, ��� �� �����", "�������", MB_ICONINFORMATION);
//                system("start https://www.youtube.com/watch?v=900cJATeGQU");
//            }
//            if (text == "WIN" || text == "Win" || text == "win")
//            {
//                system("start MusicPlayer\\W311\\dosbox.exe -conf MusicPlayer\\W311\\dosbox.conf -noconsole");
//            }
//
//        }
//        
//        
//        
//        
//        
//        break;
//    }
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
//
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
//    CreateWindowA(op.lpszClassName, "Title", WS_OVERLAPPEDWINDOW | WS_VISIBLE, 100, 100, 800, 600, NULL, NULL, op.hInstance, NULL);
//    MSG msg;
//    while (GetMessage(&msg, NULL, 0, 0)) {
//        TranslateMessage(&msg);
//        DispatchMessage(&msg);
//
//    }
//
//}