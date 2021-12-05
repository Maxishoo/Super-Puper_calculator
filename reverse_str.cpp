#include "Calculator_header.h"
string reverse_str(string otv)
{
    string revotv="";
    for(unsigned long long i=0;i<itc_len(otv);i++)
    {
        revotv+=otv[itc_len(otv)-i-1];
    }
    return revotv;
}
