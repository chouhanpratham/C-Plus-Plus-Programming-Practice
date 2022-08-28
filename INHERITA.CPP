#include<conio.h>
#include<iostream.h>
//Here we are using the constructor in Inheritance
//Wea are using the constructor when we do not pass any argumentin B class Constructor
class A
{
 int a;
 public:
 A(int k)
 {a=k;}
};
class B:public A
{
 public:
 B():A(5)
 {}
};
void main()
{
 clrscr();
 B obj;
 getch();
}

