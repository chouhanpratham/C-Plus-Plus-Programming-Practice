#include<iostream.h>
#include<conio.h>
static int i=0;
static int j=0;
class Complex
{
 int x,y;
 public:
 Complex()  //Constructor
 {
  i++;
 }
 void setdata(int p,int q)
 {
  x=p;
  y=q;
 }
 void show()
 {
  cout<<"The Complex Number is :"<<x<<"+j"<<y<<endl;
 }
 ~Complex()     //Destructor
 {
  j++;
 }
};
void fun()
{
  Complex c;
}
 void check()
 {
  cout<<"The number of object created :"<<i<<endl;
  cout<<"The number of object destroyed:"<<j<<endl;
 }

void main()
{
 clrscr();
 Complex c1,c2;
 c1.setdata(5,10);
 c1.show();
 c2.show();
 fun();
 Complex c3;
 check();
 getch();
}