#include<conio.h>
#include<iostream.h>
//Here we are using the constructor in Inheritance
//Wea are using the constructor when we pass two arguments in B class Constructor so we need to make the B class Constructor also
class A
{
 int a;
 public:
 A(int k)
 {a=k;}
};
class B:public A
{
 private:
 int b;
 public:
 B(int x, int y):A(5)
 {b=y;}
};
void main()
{
 clrscr();
 B obj(2,3);
 getch();
}

