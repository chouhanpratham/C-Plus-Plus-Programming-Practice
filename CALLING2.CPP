#include<conio.h>
#include<iostream.h>
//Here we are undestanding the  function call
class Box
{
 private:
 int l,b,h;
 public:
 void setDimension(int x,int y,int z)
 {
  l=x;b=y;h=z;
 }
 void showDimension()
 {
  cout<<"\nl="<<l<<" b="<<b<<" h="<<h;
 }
};
void main()
{
 clrscr();
 Box smallBox;
 smallBox.setDimension(12,10,5);
 smallBox.showDimension();
 getch();
}