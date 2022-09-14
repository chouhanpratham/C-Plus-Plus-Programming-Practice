#include<iostream.h>
#include<fstream.h>
#include<conio.h>
void main()
{
 clrscr();
 ofstream fout;
 fout.open("abc.txt",ios::ate|ios::app);
 cout<<fout.tellp();
 fout<<"ABCDEFG";
 cout<<fout.tellp();
 fout.close();
 getch();
}