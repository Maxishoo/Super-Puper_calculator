#include "Calculator_header.h"
string ubratznaki(string str)
{
    string newotv="";
    int k=1;
    long long i=0;
while(str[i]!='-' && str[i]!='+' && i<itc_len(str)-1)
{
    i++;
}
    if(i==0){return str;}
    newotv=itc_slice_str(str,i,itc_len(str));
    if(itc_len(newotv)==0)
    {
        return "0";
    }
return newotv;
}
string ubratnuli(string str)
{
    string newotv="";
    int k=1;
    long long i=0;
while(str[i]=='0' && i<itc_len(str)-1)
{
    i++;
}
    if(i==0){return str;}
    newotv=itc_slice_str(str,i,itc_len(str));
    if(itc_len(newotv)==0)
    {
        return "0";
    }
    newotv=ubratznaki(newotv);
return newotv;
}
bool ischislo(string str)
{
    string newotv="";
    long long i=0;
while(i<itc_len(str))
{
    if(str[i]>='0' && str[i]<='9')
    {
        newotv+=str[i];
    }else{/*printerror();*/return false;}
    i++;
}
    if(itc_len(newotv)==0)
    {
        return "0";
    }
return true;
}
string calcrazn(string str1,string str2, bool maxlen)
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
            int razn=ch1-ch2;
            if(razn>=0) {otv+=inttosimb(razn);}
            else if(razn<0){
                //mozg=10;
                unsigned long long m=i;
                while((itc_str_to_int(str1[itc_len(str1)-m-1-1])-1)<0)
                {

                    if(str1[itc_len(str1)-m-1-1]=='0'){str1[itc_len(str1)-m-1-1]='9';}
                    m++;
                }
                str1[itc_len(str1)-m-1-1]=inttosimb(itc_str_to_int(str1[itc_len(str1)-m-1-1])-1);
                razn=(10+ch1)-ch2;
                otv+=inttosimb(razn);
            }
        }
    string revotv="";
    for(unsigned long long i=0;i<itc_len(otv);i++)
    {
        revotv+=otv[itc_len(otv)-i-1];
    }
    if(revotv[0]=='0'){revotv=itc_slice_str(revotv,1,itc_len(revotv));}
    revotv=ubratnuli(revotv);
    return revotv;
}
