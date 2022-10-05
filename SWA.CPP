#include<conio.h>
#include<iostream.h>
void fun(int a,int b);
void func(int *a,int *b);
void main()
{
 clrscr();
 int x=5,y=10;
 //Swap by value
 fun(x,y);
 cout<<"x="<<x<<" y="<<y<<endl;
 //Swap by by call by address
 func(&x,&y);
 cout<<"x="<<x<<" y="<<y;
 getch();
}
void fun(int a, int b)
{
 int temp=a;
 a=b;
 b=temp;
}
void func(int *a,int *b)
{
 int temp=*a;
 *a=*b;
 *b=temp;
}