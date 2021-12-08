#include "Calculator_header.h"
char inttosimb(int a)
{
    char ot=' ';
    if(a==0){ot='0';}else if(a==1){ot='1';}else if(a==2){ot='2';}else if(a==3){ot='3';}else if(a==4){ot='4';}else if(a==5){ot='5';}else if(a==6)
    {
        ot='6';
    }else if(a==7){ot='7';
    }else if(a==8)
    {
        ot='8';
    }else if(a==9)
    {
        ot='9';
    }else if(a==10)
    {
        ot='A';
    }else
    {
        return ' ';
    }
    return ot;
}
int itc_str_to_int(char a)
{
    int ot=-1;
    if(a=='0')
    {
        ot=0;
    }else if(a=='1')
    {
        ot=1;
    }else if(a=='2')
    {
        ot=2;
    }else if(a=='3')
    {
        ot=3;
    }else if(a=='4')
    {
        ot=4;
    }else if(a=='5')
    {
        ot=5;
    }else if(a=='6')
    {
        ot=6;
    }else if(a=='7')
    {
        ot=7;
    }else if(a=='8')
    {
        ot=8;
    }else if(a=='9')
    {
        ot=9;
    }else
    {
        return 0;
    }
    return ot;
}
void printerror3()
{
    print("Error #1gb62bnuw75bnt# >> Wrong input! learn algebra ****. you cannot  divided by 0",10,"R");
    cout<<endl;
}
