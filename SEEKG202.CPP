#include<iostream.h>
#include<fstream.h>
#include<conio.h>
void main()
//Here We are using the seekg function
{
 clrscr();
 ifstream fin;
 fin.open("abc.txt");
 cout<<fin.tellg();
 cout<<"\n"<<(char)fin.get();
 cout<<(char)fin.get();
 cout<<"\n"<<fin.tellg();
 fin.seekg(0);
 cout<<"\n"<<fin.tellg();
 cout<<"\n"<<(char)fin.get();
 getch();
}
