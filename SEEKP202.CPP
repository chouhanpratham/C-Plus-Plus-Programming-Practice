#include<iostream.h>
#include<fstream.h>
#include<conio.h>
void main()
{
 clrscr();
 ofstream fout;
 fout.open("abc.txt",ios::ate|ios::app);
 fout<<"ABCDEFG";
 cout<<fout.tellp();
 fout.seekp(2,ios_base::beg);
 cout<<fout,tellp();
 fout.close();
 getch();
}

