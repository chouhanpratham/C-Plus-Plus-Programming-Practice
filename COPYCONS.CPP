#include<conio.h>
#include<iostream.h>
//Here we are making the copy constructuor along with other constructor
//We are making copy constructor to copy the values in variables of other object of same class
class Complex
{
 private:
 int a,b;
 public:
 Complex(int x, int y) //Parameterised constructor
 {
  a=x; b=y;
 }
 Complex(int k)        //Paramterised constructor
 {
  a=k;
 }                     //Default constructor
 Complex()
 {}
 Complex(Complex &c)   //Copy Constructor
 {
  a=c.a;
  b=c.b;
 }
 void display()
 {
  cout<<"a="<<a<<" b="<<b<<endl;
 }
};
void main()
{
 clrscr();
 Complex c1(3,4),c2,c3(5);
 Complex c4(c1);                      //Callinf copy constructor
 c1.display();
 c2.display();
 c3.display();
 c4.display();
 getch();
}