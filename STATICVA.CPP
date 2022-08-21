#include<conio.h>
#include<iostream.h>
void main()
//Here we are using the concept of static local variable
//We are printinf the static variable x value as we know that its value will be zero by default
{
 clrscr();
 static int x;   //Static local variable
 int y=1;
 cout<<"x="<<x<<endl;
 cout<<"y="<<y;
 getch();
}

