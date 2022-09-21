#include<conio.h>
#include<iostream.h>
//Here we are using the concept of Type conversion from primitive to class type
//we are making constructor to implement this
class Complex
{
 private:
 int a,b;
 public:
 Complex()                //Dwfault constructor
 {}
 Complex(int k)           //Constructor called when doing Type convesion
 {a=k;  b=0; }
 void setData(int x,int y)
 {
  a=x;
  b=y;
 }
 void showData()
 {
  cout<<"\na="<<a<<" b="<<b;
 }
};
void main()
{
 clrscr();
 Complex c1;
 c1.setData(3,4);
 int x=5;
 c1=x;
 c1.showData();
 getch();
}

