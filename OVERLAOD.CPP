#include<conio.h>
#include<iostream.h>
//Here w eare using the default ,parameterised constructor
//We are using the three constructors and doing constructor overloading
class Complex
{
 private:
 int a,b;
 public:
 Complex(int x, int y)  //Parameterised Constructor
 {
  a=x;
  b=y;
 }
 Complex(int k)       //Parameterised Constructor
 {
  a=k;
 }
 Complex()           //Default Constructor
 {
  a=0;
  b=0;
 }
 void display()
 {
  cout<<"a="<<a<<" b="<<b<<endl;
 }
};
void main()
{
 clrscr();
 Complex c1(3,4),c2(5),c3;
 c1.display();
 c2.display();
 c3.display();
 getch();
}