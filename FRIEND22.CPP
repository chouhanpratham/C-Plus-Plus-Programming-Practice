#include<conio.h>
#include<iostream.h>
//Here we are using the friend function
//We are using friend function to add member variable of two class this is the benefit of using the frienf function
class B;            //Formal Declaration of class B
class A
{
 private:
 int a;
 public:
 void set_data(int x)
 {a=x;}
 friend void fun(A,B);
};
class B
{
 private:
 int b;
 public:
 void set_data(int y)
 {b=y;}
 friend void fun(A,B);
};
void fun(A o1,B o2)   //Definition of Friend Function
{
 cout<<"Sum is "<<o1.a+o2.b;
}
void main()
{
 clrscr();
 A obj1;
 B obj2;
 obj1.set_data(2);
 obj2.set_data(3);
 fun(obj1,obj2);      //Calling Friend Function
 getch();
}