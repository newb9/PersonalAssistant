//#include <stdio.h>
//#include <time.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    time_t curtime;
    time(&curtime);
    tm *time = localtime(&curtime);
    cout << "current time is : " << ctime(&curtime);

    return (0);
}