#include<conio.h>
#include<iostream.h>
int sum(int*,int*);
void main()
//Here we are using the concept of call by address
//We have made a function sum to add two numbers
{
 clrscr();
 int a,b;
 cout<<"Enter two numbers"<<endl;
 cin>>a>>b;
 int s=sum(&a,&b);
 cout<<"Sum is"<<s;
 getch();
}
int sum(int*p,int*q)
{
 return(*p+*q);
}