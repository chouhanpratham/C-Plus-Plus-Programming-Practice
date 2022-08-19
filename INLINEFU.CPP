#include<conio.h>
#include<iostream.h>
inline void fun();
void main()
//Here we are using the inlinr function
//We are seeing the usage of inline function
{
 clrscr();
 cout<<"You are in main\n";
 fun();
 getch();
}
void fun()
{
 cout<<"You are in fun";
}