#include<conio.h>
#include<iostream.h>
//Here we are usinf the friend function to make new definition of -operator can be called operator overloading
//We are doing this by making the frienf function in a way to negate the variables of argument passed
class Complex
{
 private:
 int a,b;
 public:
 void set_data(int x,int y)
 {a=x; b=y;}
 void show_data()
 {
  cout<<"\na="<<a<<" b="<<b;
 }
 friend Complex operator-(Complex);
};
Complex operator-(Complex c)
{
 Complex temp;
 temp.a=-c.a;
 temp.b=-c.b;
 return (temp);
}
void main()
{
  clrscr();
  Complex c1,c2;
  c1.set_data(3,4);
  c2=-c1;            //c2=operator-(c1);  Both are Same
  c1.show_data();
  c2.show_data();
  getch();
}
