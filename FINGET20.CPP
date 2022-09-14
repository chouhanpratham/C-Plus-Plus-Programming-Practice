#include<iostream.h>
#include<fstream.h>
#include<conio.h>
void main()
{
 clrscr();
 ifstream fin;
 fin.open("abc.txt");
 cout<<fin.tellg();
 cout<<"\n"<<(char)fin.get();
 cout<<(char)fin.get();
 cout<<"\n"<<fin.tellg();
 getch();
}

