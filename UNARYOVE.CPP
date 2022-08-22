#include<conio.h>
#include<iostream.h>
//Here we are using the concept of operator overlaoding of unary operator
//We are using the - operator to negate the value provided
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
 Complex operator-()
 {
  Complex temp;
  temp.a=-a;
  temp.b=-b;
  return(temp);
 }
};
void main()
{
 clrscr();
 Complex c1,c2;
 c1.set_data(3,4);
 c2=-c1;           //c2=c1.operator-();  Both are same
 c2.show_data();
 getch();
}