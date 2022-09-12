#include<iostream.h>
#include<fstream.h>
#include<conio.h>
void main()
{
 clrscr();
 ofstream fout;
 char ch;
 fout.open("abc.txt",ios::app);
 int pos;
 pos=fout.tellp();
 fout<<" mysirg";
 pos=fout.tellp();
 cout<<pos;
 fout.close();
 getch();
}