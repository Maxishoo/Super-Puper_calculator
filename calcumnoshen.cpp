#include "Calculator_header.h"
string calcumnoshen(string str1,string str2,bool maxl)
{
    string otv="";
    if(maxl==true)//1 строка больше 2
    {
        string fk=str1;
        str1=str2;
        str2=fk;
    }
        string zdvig="";
        for(unsigned long long i=0;i<itc_len(str2);i++)
        {

            int ch2 = itc_str_to_int(str2[itc_len(str2)-i-1]);
            unsigned long long mozg=0;
            string ot="";
            for(unsigned long long j=0;j<itc_len(str1);j++)
            {
                int ch1 = itc_str_to_int(str1[itc_len(str1)-j-1]);
                int umn=ch1*ch2+mozg;
                mozg=umn/10;
                ot+=inttosimb(umn%10);
            }
            if(mozg>0)
            {
                ot+=inttosimb(mozg);
            }
            ot=reverse_str(ot);
            ot+=zdvig;
            zdvig+='0';
            otv=calsum(otv,ot,maxlen(otv,ot));
        }
    return otv;
}

