#include<iostream.h>
#include<fstream.h>
#include<conio.h>
void main()
{
 clrscr();
 ifstream fin;
 char ch;
 fin.open("abc.txt");
 int pos;
 pos=fin.tellg();
 cout<<pos;
 fin>>ch;
 pos=fin.tellg();
 cout<<pos;
 fin>>ch;
 pos=fin.tellg();
 cout<<pos;
 getch();
}

