#include "Calculator_header.h"
string calsum(string str1, string str2,bool maxlen)
{
    string otv="";
    if(maxlen==true)//1 строка больше 2
    {
        string fk=str1;
        str1=str2;
        str2=fk;
    }
        unsigned long long mozg=0;
        for(unsigned long long i=0;i<itc_len(str1);i++)
        {
            int ch1 = itc_str_to_int(str1[itc_len(str1)-i-1]);
            int ch2;
            if(i>=itc_len(str2))
            {
                ch2=0;
            }else{ch2 = itc_str_to_int(str2[itc_len(str2)-i-1]);}
            int summ=ch1+ch2+mozg;
            mozg=summ/10;
            otv+=inttosimb(summ%10);
        }
    if(mozg>0)
    {
        otv+=inttosimb(mozg);
    }
    string revotv="";
    for(unsigned long long i=0;i<itc_len(otv);i++)
    {
        revotv+=otv[itc_len(otv)-i-1];
    }
    return revotv;
}
