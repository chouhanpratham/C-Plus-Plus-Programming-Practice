#include<conio.h>
#include<iostream.h>
//Here we are understanding the concept of Type Conversion from class type to primitive class
//We are using the casting operator to do this
class Complex
{
 private:
 int a,b;
 public:
 void setData(int x,int y)
 {
  a=x;
  b=y;
 }
 void showData()
 {
  cout<<"\na="<<a<<" b="<<b;
 }
 operator int()
 {
  return (a);
 }
};
void main()
{
 clrscr();
 Complex c1;
 c1.setData(3,4);
 c1.showData();
 int x;
 x=c1;
 cout<<"\nx="<<x;
 getch();
}