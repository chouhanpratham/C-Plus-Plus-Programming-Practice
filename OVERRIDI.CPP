#include<conio.h>
#include<iostream.h>
//Here we are using the concept of method overriding and method hiding
//We have made two functions same in class A and B they are f1 anf f2
class A
{
 void f1()
 {}
 void f2()
 {}
};
class B:public A
{
 public:
 void f1()        //Method Overriding
 {}
 void f2(int x)   //Method Hiding
 {}
};
void main()
{
 clrscr();
 B obj;
 obj.f1();
 obj.f2(4);
 getch();
}

