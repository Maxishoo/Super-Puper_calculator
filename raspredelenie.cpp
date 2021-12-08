#include "Calculator_header.h"
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
void raspredplus(string ch1,string ch2,string znak,string &last)
{
    print("Answer>> "+ch1+znak+ch2+"==",10,"G");
    SetConsoleTextAttribute(hConsole, 9);
    if(ch1[0]=='-' && ch2[0]=='-')
    {
        last="-"+calsum(itc_slice_str(ch1,1,itc_len(ch1)),itc_slice_str(ch2,1,itc_len(ch1)), maxlen(itc_slice_str(ch1,1,itc_len(ch1)),itc_slice_str(ch2,1,itc_len(ch1))));
        cout<<last;
        cout<<endl;
        //writecom();
    }else if(ch1[0]=='-' && ch2[0]!='-')
    {
        //cout<<"-"+calsum(ch1,ch2, maxlen(ch1,ch2));
        last=calcrazn(ch2,itc_slice_str(ch1,1,itc_len(ch1)), false);
        cout<<last;
        cout<<endl;
        //writecom();
    }else if(ch1[0]!='-' && ch2[0]=='-')
    {
        cout<<"-"+calsum(ch1,ch2, maxlen(ch1,ch2));
        last=calcrazn(ch1,itc_slice_str(ch2,1,itc_len(ch1)), false);
        cout<<last;
        cout<<endl;
        //writecom();
    }else{
    last=calsum(ch1,ch2, maxlen(ch1,ch2));
    cout<<last;
    cout<<endl;
    //writecom();
    }
}
void raspredrazn(string ch1,string ch2,string znak,string &last)
{
    print("Answer>> "+ch1+znak+ch2+"==",10,"G");
    SetConsoleTextAttribute(hConsole, 9);
    if(ch1[0]=='-' && ch2[0]=='-')
    {
        if(calcrazn(itc_slice_str(ch2,1,itc_len(ch1)),itc_slice_str(ch1,1,itc_len(ch1)), maxlen(itc_slice_str(ch2,1,itc_len(ch1)),itc_slice_str(ch1,1,itc_len(ch1))))=="0"){last="0";cout<<"0";}else{
        cout<<"-"+calcrazn(itc_slice_str(ch2,1,itc_len(ch1)),itc_slice_str(ch1,1,itc_len(ch1)), maxlen(itc_slice_str(ch2,1,itc_len(ch1)),itc_slice_str(ch1,1,itc_len(ch1))));last="-"+calcrazn(itc_slice_str(ch2,1,itc_len(ch1)),itc_slice_str(ch1,1,itc_len(ch1)), maxlen(itc_slice_str(ch2,1,itc_len(ch1)),itc_slice_str(ch1,1,itc_len(ch1))));}
        cout<<endl;
        //writecom();
    }else if(ch1[0]!='-' && ch2[0]=='-')
    {
        last=calsum(ch1,itc_slice_str(ch2,1,itc_len(ch1)), maxlen(ch1,itc_slice_str(ch2,1,itc_len(ch1))));
        cout<<last;
        cout<<endl;
        //writecom();
    }else if(ch1[0]=='-' && ch2[0]!='-')
    {
        //cout<<"-"+calsum(ch1,ch2, maxlen(ch1,ch2));
        last=calsum(ch2,itc_slice_str(ch1,1,itc_len(ch1)), maxlen(ch2,itc_slice_str(ch1,1,itc_len(ch1))));
        cout<<last;
        cout<<endl;
        //writecom();
    }else{
    last=calcrazn(ch1,ch2, maxlen(ch1,ch2));
    cout<<last;
    cout<<endl;
    //writecom();
    }

}
void raspredymnosh(string ch1,string ch2,string znak,string &last)
{
    if(ch1=="0" || ch2=="0")
    {
        print("Answer>> "+ch1+znak+ch2+"==",10,"G");
        SetConsoleTextAttribute(hConsole, 9);
        last="0";
        cout<<"0";
        cout<<endl;
        //writecom();
        return;
    }
    if(ch1[0]=='-' && ch2[0]=='-')
    {
        print("Answer>> "+ch1+znak+ch2+"==",10,"G");
        SetConsoleTextAttribute(hConsole, 9);
        last=calcumnoshen( itc_slice_str (ch1,1,itc_len(ch1)),itc_slice_str(ch2,1,itc_len(ch1)), maxlen(ch1,ch2));
        cout<<last;
        cout<<endl;
        //writecom();
    }else if(ch1[0]!='-' && ch2[0]=='-')
    {
        print("Answer>> "+ch1+znak+ch2+"==",10,"G");
        SetConsoleTextAttribute(hConsole, 9);
        last="-"+calcumnoshen(ch1,itc_slice_str(ch2,1,itc_len(ch1)), maxlen(ch1,itc_slice_str(ch2,1,itc_len(ch1))));
        cout<<last;
        cout<<endl;
        //writecom();
    }else if(ch1[0]=='-' && ch2[0]!='-')
    {
        print("Answer>> "+ch1+znak+ch2+"==",10,"G");
        SetConsoleTextAttribute(hConsole, 9);
        last="-"+calcumnoshen(itc_slice_str(ch1,1,itc_len(ch1)),ch2, maxlen(itc_slice_str(ch1,1,itc_len(ch1)),ch2));
        cout<<last;
        cout<<endl;
        //writecom();
    }else
    {
        print("Answer>> "+ch1+znak+ch2+"==",10,"G");
        SetConsoleTextAttribute(hConsole, 9);
        last=calcumnoshen(ch1,ch2,maxlen(ch1,ch2));
        cout<<last;
        cout<<endl;
        //writecom();
    }
}
void raspreddel(string ch1,string ch2,string znak,string &last)
{
    if(ch2=="0")
    {
        printerror3();
        last="empty";

        return;
    }
    if(ch1=="0"){last="0";cout<<"0";return;}
        if(ch1[0]=='-' && ch2[0]=='-')
    {
        print("Answer>> "+ch1+znak+ch2+"==",10,"G");
        SetConsoleTextAttribute(hConsole, 9);
        last=calcdel( itc_slice_str (ch1,1,itc_len(ch1)),itc_slice_str(ch2,1,itc_len(ch1)), maxlen(ch1,ch2));
        cout<<last;
        cout<<endl;
        //writecom();
    }else if(ch1[0]!='-' && ch2[0]=='-')
    {
        print("Answer>> "+ch1+znak+ch2+"==",10,"G");
        SetConsoleTextAttribute(hConsole, 9);
        last="-"+calcdel(ch1,itc_slice_str(ch2,1,itc_len(ch1)), maxlen(ch1,itc_slice_str(ch2,1,itc_len(ch1))));
        cout<<last;
        cout<<endl;
        //writecom();
    }else if(ch1[0]=='-' && ch2[0]!='-')
    {
        print("Answer>> "+ch1+znak+ch2+"==",10,"G");
        SetConsoleTextAttribute(hConsole, 9);
        last="-"+calcdel(itc_slice_str(ch1,1,itc_len(ch1)),ch2, maxlen(itc_slice_str(ch1,1,itc_len(ch1)),ch2));
        cout<<last;
        cout<<endl;
        //writecom();
    }else
    {
        print("Answer>> "+ch1+znak+ch2+"==",10,"G");
        SetConsoleTextAttribute(hConsole, 9);
        last=calcdel(ch1,ch2,maxlen(ch1,ch2));
        cout<<last;
        cout<<endl;
        //writecom();
    }
}
string raspredelenie(string ch1,string ch2,string znak, string &last)
{
    ch1=ubratnuli(ch1);
    ch2=ubratnuli(ch2);
    string com="";
    while(znak != "+" && znak!="-" && znak!="*" && znak!="/")
            {
                print("Error #!178375nkp43b21ivs# >> Wrong sign! Try again or write /man to see examples",10,"R");
                cout<<endl;
                print("Znak>>>",10,"G");
                SetConsoleTextAttribute(hConsole, 9);
                cin>>znak;
            }
            if(znak=="+")
            {
                raspredplus(ch1,ch2,znak,last);
                //cin>>com;
            }else if(znak=="-")
            {
                raspredrazn(ch1,ch2,znak,last);
                //cin>>com;
            }else if(znak=="*")
            {
                raspredymnosh(ch1,ch2,znak,last);
                //cin>>com;
            }
            else if(znak=="/")
            {
                raspreddel(ch1,ch2,znak,last);
                //cin>>com;
            }
            //cin>>com;
    return com;
}
