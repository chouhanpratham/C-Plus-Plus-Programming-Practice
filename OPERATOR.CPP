#include<conio.h>
#include<iostream.h>
//Here we are using the operator overloading
//We are using the operator+ to add two complex class object we have made a new function for that
class Complex
{
 private:
 int a,b;
 public:
 void set_data(int x,int y)
 {
  a=x; b=y;
 }
 void show_data()
 {
  cout<<"\na="<<a<<" b="<<b;
 }
 Complex operator+(Complex c)
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
 c3=c1+c2;          //c3=c1.operator+(c2);  Both are same
 c3.show_data();
 getch();
}
