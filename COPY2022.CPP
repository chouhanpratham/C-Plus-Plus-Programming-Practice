#include<conio.h>
#include<iostream.h>
//here we are understanding the concept of copr in C++
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

