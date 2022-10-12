/*#include <windows.h>
MCIERROR mciSendString(LPCTSTR lpszCommand, LPTSTR lpszReturnString, UINT cchReturn, HANDLE hwndCallback);
void OpenCD()
{
    mciSendString((LPCTSTR)"set cdaudio door open",(LPTSTR)NULL, (UINT)0, (HANDLE)NULL);
}
void CloseCD()
{
    mciSendString((LPCTSTR)"set cdaudio door closed",(LPTSTR)NULL, (UINT)0, (HANDLE)NULL);
*\}    
/*
#include "Windows.h"
#include "mmsystem.h"
//MCIERROR mciSendString(LPCTSTR lpszCommand, LPTSTR lpszReturnString, UINT cchReturn, HANDLE hwndCallback);
...
void MainWindow::on_pushButton_clicked() {
   mciSendString((LPCTSTR)"set cdaudio door open",(LPTSTR)NULL, (UINT)0, (HWND__*)0);
}*/