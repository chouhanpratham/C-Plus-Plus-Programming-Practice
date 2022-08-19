#include<iostream.h>
#include<conio.h>
int sum(int,int);
void main()
//Here we using the concept of call by value
//We have made a function sum to add two numbers
{
 clrscr();
 int a=5,b=6;
 int s=sum(a,b);
 cout<<"sum is "<<s;
 getch();
}
int sum(int x,int y)
{
 return(x+y);
}


