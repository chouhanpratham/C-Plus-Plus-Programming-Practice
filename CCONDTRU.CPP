#include<conio.h>
#include<iostream.h>
//Here we are using the concept of copy constructor
class Dummy
{
 private :
 int a,b;
 public:
 void setdata(int x,int y)
 {
  a=x; b=y;
 }
 void showdata()
 {
  cout<<"\na="<<a<<" b="<<b;
 }
 Dummy(Dummy &d)
 {
  a=d.a; b=d.b;
 }
 Dummy()
 {}
};
void main()
{
 clrscr();
 Dummy d1;
 d1.setdata(3,4);
 Dummy d2=d1;
 d2.showdata();
 getch();
}