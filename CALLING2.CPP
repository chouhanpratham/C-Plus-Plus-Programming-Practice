#include<conio.h>
#include<iostream.h>
//Here we are undestanding the object pointer usage
//We are using the pointer to call the member function
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
 Box *p,smallBox;
 p->setDimension(12,10,5);  //Pointer calling the member function
 p->showDimension();        //Arrow operator
 getch();
}