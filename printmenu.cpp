#include "Calculator_header.h"
void printmenu()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
print("*****************************************************************************",10,"B");
    cout<<endl;
    print("******  Write   /calculate or /calc or /please_calculate_to_me  *************",10,"G");
    cout<<endl;
    print("******  Write   /comands  to see all available functions        *************",10,"G");
    cout<<endl;
    print("******  Write   /man      to see instruction with axamples      *************",10,"G");
    cout<<endl;
    print("******  Write   /exit     to exit this amazing program  :(      *************",10,"G");
    cout<<endl;
    print("******  Write   /menu     go back to menu                       *************",10,"G");
    cout<<endl;
    print("******  Write   /mem_man      to say How to use memory              *************",10,"G");
    cout<<endl;
    print("*****************************************************************************",10,"B");
    cout<<endl;
    //print("Write command>>>",10,"G");
    //SetConsoleTextAttribute(hConsole, 9);
}
void exitt()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    print("*****************************************************************************",10,"B");
    cout<<endl;
    print("******  Program is exiting. This may take some time. Program is saving data *",50,"G");
    cout<<endl;
    print(".............................................................................",250,"R");
    //print(".............................................................................",250,"R");
}
void Hi()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    print("*****************************************************************************",10,"B");
    cout<<endl;
    print("******  Hi, dear user.                                          *************",50,"G");
    cout<<endl;
    print("******  Welcome to Super-Puper Calculator!                      *************",10,"G");
    cout<<endl;
    print("******  Here you can add subtract divide and multiply numbers   *************",10,"G");
    cout<<endl;

}
void writecom()
{   HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    print("Write command>>>",10,"G");
    SetConsoleTextAttribute(hConsole, 9);
}
void calmanual()
{
    print("This calculator is made by Maxim Shatalov. Calculator",10,"Y");
    cout<<endl;
    print("is an electronic computing device for performing operations on numbers or algebraic formulas.",10,"Y");
    cout<<endl;
    print("This calculator this calculator can only do these actions with unlimited numbers",10,"Y");
    print("  +  -  *  /",10,"B");
    cout<<endl;
    cout<<endl;
    print("My calculator only accepts input format like this",10,"R");
    cout<<endl;
    print("First number>>3423421142  or First number>>-3423421142 ",10,"B");
    print("without spaces",10,"Y");
    cout<<endl;
    print("Second number>>3423421142  or Second number>>-3423421142 ",10,"B");
    print("without spaces",10,"Y");
    cout<<endl;
    print("Znak>>+  or Znak>>/ without spaces",10,"B");
    cout<<endl;
    writecom();
}
void memoryman()
{
    print("*****************************************************************************",10,"B");
    cout<<endl;
    print("******  You can use   /m   to remember the result or the number *************",10,"Y");
    cout<<endl;
    print("******  You can use   /mc   to clear memory                     *************",10,"Y");
    cout<<endl;
    print("******  You can use   /last to see last result                  *************",10,"Y");
    cout<<endl;
    print("******  You can use   /mr   to use memory like number           *************",10,"Y");
    cout<<endl;
    print("******  You can use   /show_mem   to use show memory            *************",10,"Y");
    cout<<endl;
    print("*****************************************************************************",10,"B");
    cout<<endl;
}
