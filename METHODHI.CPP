#include<conio.h>
#include<iostream.h>
//Here we are using the concept of method overriding and method hiding
class Car
{
 public:
 void shiftGear()
 {}
 void f2()
 {}
};
class SportsCar:public Car
{
 public:
 void shiftGear()        //Method Overriding
 {}
 void f2(int x)          //Method Hiding
 {}
};
void main()
{
 clrscr();
 SportsCar obj;
 obj.shiftGear();
 obj.f2(4);
 getch();
}