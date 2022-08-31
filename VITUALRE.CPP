#include<conio.h>
#include<iostream.h>
//Here we are seeing the way virtual function works in real scenario
class A
{
 public:
 void f1()
 {}
 virtual void f2()
 {}
 virtual void f3()
 {}
 virtual void f4()
 {}
};
class B:public A
{
 public:
 void f1()       //Method overloading
 {}
 void f2()       //virtual Function
 {}
 void f4(int x)  //Method Hiding
 {}
};
void main()
{
 clrscr();
 A *p,o1;
 B o2;
 p=&o1;
 p->f1();
 p->f2();
 p->f3();
 p->f4();
 getch();
}