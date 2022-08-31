#include<conio.h>
#include<iostream.h>
//Here we are using the concept of Virtual Function
//We have made two functions of same name but different definition
class A
{
 public:
 virtual void f1()      //Virtual function
 {}
};
class B:public A
{
 public:
 void f1()          //This will also be cosidered virtual
 {
  cout<<"Virual B class";
 }
 void f2()
 {}
};
void main()
{
 clrscr();
 A *p,o1;
 B o2;
 p=&o2;
 p->f1();
 getch();
}