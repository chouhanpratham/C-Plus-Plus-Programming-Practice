#include<fstream.h>
#include<conio.h>
#include<iostream.h>
void main()
{
 clrscr();
 ofstream fout;
 fout.open("myfile.dat");
 fout<<"Hello";
 fout.close();
 getch();
}

