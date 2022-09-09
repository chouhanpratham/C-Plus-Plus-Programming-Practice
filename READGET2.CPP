#include<fstream.h>
#include<conio.h>
#include<iostream.h>
void main()
{
 clrscr();
 ifstream fin;
 char ch;
 fin.open("myfile.dat");
 ch=fin.get();
 while(!fin.eof())
 {
  cout<<ch;
  ch=fin.get();
 }
 fin.close();
 getch();
}


