#include<conio.h>
#include<iostream.h>
//Here we are making class and them making an add function with return type Complex
//We are using the add function to add two complex numbers
class Complex
{
 private:
 int a,b;
 public:
 void set_data(int x,int y)
 {
  a=x;
  b=y;
 }
 void show_data()
 {
  cout<<"\na="<<a<<" b="<<b;
 }
 Complex add(Complex c)
 {
  Complex temp;
  temp.a=a+c.a;
  temp.b=b+c.b;
  return(temp);
 }
};
void main()
{
 clrscr();
 Complex c1,c2,c3;
 c1.set_data(3,4);
 c2.set_data(5,6);
 c3=c1.add(c2);
 c3.show_data();
 getch();
}