#include "Calculator_header.h"
void printerror()
{
    print("Error #19t73f127ls1sadfc# >> Wrong input! Try again or write /man to see examples",10,"R");
    cout<<endl;
    writecom();
}
int command(string com)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int exit=0;
    if(com=="/exit")
        {
            exitt();
            exit=1;
        }else if(com=="/man")
        {
            calmanual();
            cin>>com;

        }
        else if(com=="/calculate" || com=="/calc" || com=="/please_calculate_to_me" || com=="/cal")
        {
            string ch1,ch2,znak;
            print("First number>>",10,"G");
            SetConsoleTextAttribute(hConsole, 9);
            cin>>ch1;
            print("Second number>>",10,"G");
            SetConsoleTextAttribute(hConsole, 9);
            cin>>ch2;
            if(ischislo(itc_slice_str(ch1,1,itc_len(ch1)))==false || ischislo(itc_slice_str(ch2,1,itc_len(ch1)))==false)
            {printerror();return 0;}
            print("Znak>>",10,"G");
            SetConsoleTextAttribute(hConsole, 9);
            cin>>znak;
            com=raspredelenie(ch1,ch2,znak);
        }
        return exit;
}
int main()
{
    Hi();
    printmenu();
    string com;

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int exit=0;

    while(exit==0)
    {
        writecom();
        cin>>com;
        exit=command(com);
    }
    void exitt();
    return 0;
}
