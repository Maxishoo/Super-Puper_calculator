#include "Calculator_header.h"
void print(string str, int time, string color)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='*')
        {
            SetConsoleTextAttribute(hConsole, 11);
            cout<<str[i];
           //Sleep(time/9);
        }else{
            if(color=="R")
            {
                SetConsoleTextAttribute(hConsole, 12);
            }else if(color=="G")
            {
                SetConsoleTextAttribute(hConsole, 10);

            }
            cout<<str[i];
        //Sleep(time/9);
        }
    }
}
