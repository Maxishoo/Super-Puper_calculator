#ifndef CALCULATOR_HEADER_H_INCLUDED
#define CALCULATOR_HEADER_H_INCLUDED


#include <iostream>
#include "windows.h"
#include <string>
using namespace std;

void print(string str, int time, string color);
void printmenu();
void exitt();
void Hi();



string itc_slice_str(string str,unsigned long long start,unsigned long long endd);
unsigned long long itc_len(string a);
char inttosimb(int a);
int itc_str_to_int(char a);
bool maxlen(string s1,string s2);

string calsum(string str1, string str2,bool maxlen);
void writecom();
string calcrazn(string str1,string str2, bool maxlen);
string calcumnoshen(string str1,string str2,bool maxl);
string calcdel(string str1,string str2,bool maxl);
string reverse_str(string otv);
void calmanual();
void calcmenu(string chislo1,string chislo2,string znak);
bool itc_compare(string S1, string S2);
string raspredelenie(string ch1,string ch2,string znak);
void printerror();
string ubratnuli(string str);
bool ischislo(string str);
#endif // CALCULATOR_HEADER_H_INCLUDED
