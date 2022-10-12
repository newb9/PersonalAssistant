// C++ program to open a URL in browser.
// This program is written on for Microsoft
// Windows OS
#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

int main()
{
    char url[100] = "https://www.geeksforgeeks.org/";
    ShellExecute(NULL, "open", url, NULL, NULL, SW_SHOWNORMAL);
    //HWND,LPCSTR,LPCSTR,LPCSTR,LPCSTR,INT//
    return 0;
}
