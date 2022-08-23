#include<conio.h>
#include<iostream.h>
//Here we are using the friend function
//We are using the friend function to add two member variables of class
class Complex
{
 private:
 int a,b;
 public:
 void set_data(int x,int y)
 {a=x; b=y;}
 void show_data()
 {
  cout<<"\na="<<a<<" b="<<b;
 }
 friend void fun(Complex);     //Declaration of Friend Function
};
void fun(Complex c)            //Definition of Friend Function
{
 cout<<"\nSum is "<<c.a+c.b;
}
void main()
{
 clrscr();
 Complex c1;
 c1.set_data(3,4);
 fun(c1);          //Calling Friend Function
 getch();
}



