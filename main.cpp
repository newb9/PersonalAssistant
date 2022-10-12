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
#pragma comment(lib, "winmm.lib")

using namespace std;

// function to greet the user according to time
void greetings()
{
    // current date  and time based on your system timezone
    time_t now = time(0);
    tm *time = localtime(&now);

    if (time->tm_hour < 12)
    {
        cout << "Good Morning Ayush" << endl;
        string phrase = "Good Morning Ayush";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }

    else if (time->tm_hour >= 12 && time->tm_hour <= 16)
    {
        cout << "Good Afternoon Ayush" << endl;
        string phrase = "Good Afternoon Ayush";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }

    else if (time->tm_hour > 16 && time->tm_hour < 24)
    {
        cout << "Good Evening Ayush" << endl;
        string phrase = "Good Evening Ayush";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
}

void datetime()
{
    time_t now = time(0);
    char *dt = ctime(&now);
    cout << "The date and time is " << endl
         << dt << endl;
}

void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}

int main()
{
    system("cls");

    cout << "\t<###################################  PERSONAL ASSISSTANT ########################################" << endl
         << endl;

    string password; // to take password
    string command;  // to take command from the user

    do
    {
        cout << "******************************************************" << endl;
        cout << "| ENTER THE PASSWORD TO CONFIRM YOU ARE Ayush|" << endl;
        cout << "******************************************************" << endl
             << endl;
        string phrase = "ENTER THE PASSWORD TO CONFIRM YOU ARE Ayush";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);

        getline(cin, password);

        STARTUPINFO startInfo = {0};
        PROCESS_INFORMATION processInfo = {0};

        if (password == "raisahab")
        {
            cout << "\n<**************************************************************************************************>\n\n";
            greetings();
            do
            {
                int i;
                for (i = 0; i < 10; i++)
                {
                    // delay of one second
                    delay(3);
                    cout << "\n<**********************************************************************************************>\n\n";
                    cout << endl
                         << "How can i help you Ayush...." << endl
                         << endl;

                    string phrase = "How can i help you Ayush";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    break;
                }

                cout << "Enter your question ===> ";
                getline(cin, command);
                cout << endl;
                cout << "Answer to your question is ===> ";

                if (command == "hello" || command == "hi")
                {
                    cout << "Hello Ayush....." << endl;
                    string phrase = "Hello Ayush";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

                else if (command == "what is the time" || command == "time" || command == "tell time")
                {

                    datetime();
                }

                else if (command == "who are you" || command == "who is speaking")
                {
                    cout << "I'm a personal assistant created by Ayush " << endl;
                    string phrase = "I'm a personal assistant created by Ayush ";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

                else if (command == "open notepad")
                {
                    cout << "openining notepad" << endl;
                    string phrase = "opening notepad";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Windows\\notepad.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }

                else if (command == "open wordpad")
                {
                    cout << "opening writepad" << endl;
                    string phrase = "opening writepad";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Windows\\write.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }

                else if (command == "open Microsoft Word")
                {
                    cout << "opening Microsoft Word" << endl;
                    string phrase = "opening Microsoft Word";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Program Files\\WindowsApps\\Microsoft.Office.Desktop.Word_16051.14326.20238.0_x86__8wekyb3d8bbwe\\Office16\\WINWORD.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }

                else if (command == "open Microsoft Paint")
                {
                    cout << "opening Microsoft Paint" << endl;
                    string phrase = "opening Microsoft Paint";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Windows\\System32\\mspaint.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }

                else if (command == "play music")
                {
                    cout << "playing music now" << endl;
                    string phrase = "playing music now";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    ShellExecute(NULL, "open", "D:\\Users\\91962\\Documents\\code\\personal assistant\\despacito_justin_bieber.mp3", NULL, NULL, SW_SHOWNORMAL);
                }

                else if (command == "open google")
                {
                    cout << "openining google" << endl;
                    string phrase = "opening google";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.google.com");
                }

                else if (command == "open youtube")
                {
                    cout << "openining YouTube" << endl;
                    string phrase = "opening youtube";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.youtube.com");
                }
                else if (command == "open gfg" || command == "gfg")
                {
                    cout << "opening geeks for geeks" << endl;
                    string phrase = "opening geeks for geeks";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    char url[100] = "https://www.geeksforgeeks.org/data-structures/";
                    ShellExecute(NULL, "open", url, NULL, NULL, SW_SHOWNORMAL);
                }

                else if (command == "close brave browser")
                {
                    cout << "closing chrome browser" << endl;
                    string phrase = "closing chrome browser";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("Taskkill /F /IM Brave.exe");
                }
                else if (command == "close vs code")
                {
                    cout << "closing visual studio code" << endl;
                    string phrase = "closing visual studio code";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("Taskkill /F /IM visualstudio.exe");
                }
                else if (command == "open telegram")
                {
                    cout << "opening telegram" << endl;
                    string phrase = "opening telegram";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    // CreateProcess(("C:\\Program Files\\WindowsApps\\Telegram.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }

                else if (command == "close telegram")
                {
                    cout << "closing telegram" << endl;
                    string phrase = "closing telegram";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("Taskkill /F /IM telegram.exe");
                }
                else if (command == "open whatsapp" || command == "whatsapp")
                {
                    cout << "opening whatsapp" << endl;
                    string phrase = "opening whatsapp";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    char url[100] = "https://web.whatsapp.com/";
                    ShellExecute(NULL, "open", url, NULL, NULL, SW_SHOWNORMAL);
                }
                else if (command == "open photo")
                {
                    cout << "opening photo" << endl;
                    string phrase = "opening photo";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    ShellExecute(NULL, "open", "avengers.png", NULL, NULL, SW_NORMAL);
                }

                else if (command == "open syllabus")
                {
                    cout << "opening syllabus " << endl;
                    string phrase = "opening syllabusaditya ";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    ShellExecute(NULL, "open", "E:/books/syllabus.pdf", NULL, NULL, SW_NORMAL);
                }

                else if (command == "open video")
                {
                    cout << "opening video" << endl;
                    string phrase = "opening video";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    ShellExecute(NULL, "open", "E:\\movies\\Interstellar (2014) (2014) [1080p]\\Interstellar.2014.2014.1080p.BluRay.x264.YIFY.mp4", NULL, NULL, SW_NORMAL);
                }
                else if (command == "open dsa")
                {
                    cout << "opening data structure and algorithm lectures" << endl;
                    string phrase = "opening data structure and algorithm lectures";
                    string command = "espeak \" " + phrase + "\"";
                    const char *rai = command.c_str();
                    system(rai);
                    system("start https://practice.geeksforgeeks.org/batch/dsa-4");
                }

                else if (command == "bye" || command == "exit")
                {
                    cout << "Good Bye Ayush, see you soon!" << endl;
                    string phrase = "Good Bye Ayush, see you soon!";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    exit(0);
                }

                else
                {
                    cout << "Sorry could not understand your command please try again !!!" << endl;
                    string phrase = "Sorry could not understand your command please try again";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

            } while (1);
        }
        else
        {
            system("cls");

            cout << "\t<###################################  PERSONAL ASSISSTANT ########################################" << endl
                 << endl;
            cout << "**********************" << endl;
            cout << "X Incorrect Password X" << endl;
            cout << "**********************" << endl
                 << endl;

            string phrase = "Incorrect Password, please enter correct password";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
        }
    } while (1);

    return 0;
}
