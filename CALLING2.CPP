#include<conio.h>
#include<iostream.h>
//Here we are undestanding the object pointer and this pointer usage
//We are using the pointer to call the member function
//We are using this pointer to solve the name conflict that arise whrn we use the same local variable and instance member variable
class Box
{
 private:
 int l,b,h;
 public:
 void setDimension(int l,int b,int h)
 {
  this->l=l;this->b=b;this->h=h;
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