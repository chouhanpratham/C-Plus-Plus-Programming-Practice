#include<iostream.h>
#include<conio.h>
void main()
//Here we are using the Reference Variable
//We are using the reference variable to make chanes in the assigned variable
{
 int x=5;
 int &y=x;
 y++;
 cout<<"Value of x is "<<x;
 getch();
}


