#include <bits/stdc++.h>
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <windows.h>
#include <mmsystem.h> // mciSendString()
#include <conio.h>
#include <Mmsystem.h>
using namespace std;
int main()
{
    voce::synthesize("hello world");

    while (voce::getRecognizerQueueSize() > 0)
    {
        std::string s = voce::popRecognizedString();
        std::cout << "You said: " << s << std::endl;
    }
}