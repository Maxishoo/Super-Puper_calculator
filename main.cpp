#include "Calculator_header.h"
void printerror()
{
    print("Error #19t73f127ls1sadfc# >> Wrong input! Try again or write /man to see examples",10,"R");
    cout<<endl;
    writecom();
}
void printerror2()
{
    print("Error #100t41f1# >> Wrong input! Use only numbers! Try again or write /man to see examples",10,"R");
    cout<<endl;
}
int command(string com, string &mem, string &last)
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
            if(ch1=="mr"){ch1=mem;}
            if(ch2=="mr"){ch2=mem;}
            else if(ischislo(itc_slice_str(ch1,1,itc_len(ch1)))==false || ischislo(itc_slice_str(ch2,1,itc_len(ch1)))==false)
            {printerror2();return 0;}
            print("Znak>>",10,"G");
            SetConsoleTextAttribute(hConsole, 9);
            cin>>znak;
            com=raspredelenie(ch1,ch2,znak,last);
        }else if(com=="/mc"){mem="0";}
        else if(com=="/mem_man"){memoryman();}
        else if(com=="/m"){mem=last;}
        else if(com=="/last"){print("Last result is ",10,"Y");print(last,10,"B");cout<<endl;}
        else if(com=="/show_mem"){print("current memory value is ",10,"Y");print(mem,10,"B");cout<<endl;}
        return exit;
}
int main()
{
    string mem="empty";
    string last="empty";
    Hi();
    printmenu();
    string com;
    //PlaySoundA((LPCSTR) "mus1.wav", NULL, SND_FILENAME | SND_ASYNC);
    PlaySoundA((LPCSTR) "mus1.wav", NULL, SND_LOOP | SND_ASYNC);
    //PlaySound(TEXT("название песни.wav"), NULL, SND_LOOP | SND_ASYNC);
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int exit=0;

    while(exit==0)
    {
        writecom();
        cin>>com;
        exit=command(com,mem,last);
    }
    void exitt();
    return 0;
}
