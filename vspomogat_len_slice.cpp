#include "Calculator_header.h"
unsigned long long itc_len(string a)
{

    unsigned long long k=0;
    unsigned long long i=0;
    while(a[i]!='\0')
    {
        k=k+1;
        i=i+1;
    }
    return k;
}
string itc_slice_str(string str,unsigned long long start,unsigned long long endd)
{
    unsigned long long l;
    l=itc_len(str);
    string n="";
    if(start>endd)
    {
        return "";
    }
    if(endd>l-1)
    {
        endd=l-1;
    }
    for(unsigned long long i=start;i<endd+1;i++)
    {
        n+=str[i];
    }
    return n;
}
bool maxlen(string s1,string s2)
{
    if(itc_len(s2)>itc_len(s1))//если первая строка больше второй то 0
    {
        return true;
    }else if(itc_len(s2)<itc_len(s1))//если первая строка больше второй то 1
    {
        return false;
    }
    else
    {
        for(long long i=0;i<itc_len(s1);i++)
        {
            if(s1[i]!=s2[i])
            {
                if(itc_str_to_int(s2[i])>=itc_str_to_int(s1[i]))
                {
                    return true;
                }else return false;
            }
        }
    }
}
bool itc_compare(string S1, string S2)
{
  bool otv=false;
  if(itc_len(S1)==itc_len(S2))
  {
      long long k=0;
      for(long long i=0;i<itc_len(S1);i++)
      {
          if(S1[i]==S2[i])
          {
              k+=1;
          }else
          {
              return otv=false;
          }
      }
      if(k==itc_len(S1))
      {
          otv=true;
      }
  }
  return otv;
}
