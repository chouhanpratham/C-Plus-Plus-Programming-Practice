#include<conio.h>
#include<iostream.h>
//here we are using the concept of copy using the copy assignment operator
class Dummy
{
 private :
 int a,b;
 int *p;
 public:
 Dummy()
 {}
 void setdata(int x,int y,int z)
 {
  a=x; b=y; *p=z;
 }
 void showdata()
 {
  cout<<"\na="<<a<<" b="<<b;
 }
 Dummy(Dummy &d)
 {
  a=d.a; b=d.b;
  p=new int;
  *p=*(d.p);
 }
 ~Dummy()
 {
  delete p;
 }
};
void main()
{
 clrscr();
 Dummy d1;
 d1.setdata(3,4,5);
 Dummy d2=d1;
 d2.showdata();
 getch();
}