#include<iostream.h>
#include<fstream.h>
#include<conio.h>
void main()
{
 clrscr();
 ifstream fin;
 fin.open("abc.txt");
 cout<<fin.tellg();
 fin.seekg(6);
 cout<<"\n"<<fin.tellg();
 cout<<"\n"<<(char)fin.get();
 cout<<"\n"<<fin.tellg();
 fin.seekg(2,ios_base::beg);
 cout<<"\n"<<fin.tellg();
 fin.seekg(2,ios_base::cur);
 cout<<"\n"<<fin.tellg();
 fin.seekg(-2,ios_base::end);
 cout<<"\n"<<fin.tellg();
 getch();
}


