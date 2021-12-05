#include "Calculator_header.h"
string calcdel(string str1,string str2,bool maxl)
{
    string otv="";
    string ostdel="";
    if(maxl==true)//1 строка больше 2
    {
        string fk=str1;
        str1=str2;
        str2=fk;
    }
    string delim="";
    delim+=str1[0];
    long long i=0;
    int needc=0;
    while(needc==0) //for(long long i=1;i<itc_len(str1);i++)
    {
        if (delim == "0") {
            str1=itc_slice_str(str1,1,itc_len(str1));
            i=0;
            if (itc_len(str1)==0) {
                    needc=1;
            }
            else {
            otv+="0";
            delim = str1[0];
            }
        }else if(maxlen(delim,str2)==false)
        {
            string j="1";
            while(maxlen(calcumnoshen(str2,j,maxlen(str2,j)),delim)==true)
            {
                j=calsum(j,"1",maxlen(j,"1"));
            }
            j=calcrazn(j,"1",maxlen(j,"1"));
            otv+=j;
            ostdel = calcrazn(delim,calcumnoshen(j,str2,maxlen(j,str2)),maxlen(delim,calcumnoshen(j,str2,maxlen(j,str2))));
            if((i+1)>=itc_len(str1)) {
                needc=1;
            }else {
                str1=itc_slice_str(str1,i+1,itc_len(str1));
                if (ostdel[0] == '0') {
                    otv += "0";
                } else {
                    str1 = ostdel + str1;
                }
                delim=str1[0];
                i=0;
            }
        }else {
            i++;
            if (i>=itc_len(str1)) {
                needc=1;
            } else {
            delim+=str1[i];
            }
        }
    }
    return otv;
}
