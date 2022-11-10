#include<iostream.h>
#include<conio.h>
class Complex
{
 int real,img;
 public:
 Complex()
 {
  real=0;
  img=0;
 }
 Complex(int r,int i)
 {
  real=r,
  img=i;
 }
 void show()
 {
  cout<<real<<"+i"<<img<<endl;
 }
 friend void add(Complex p,Complex q);
 };
 void add(Complex p,Complex q)
 {
  Complex a;
  a.real=p.real+q.real;
  a.img=p.img+q.img;
  cout<<a.real<<"+i"<<a.img<<endl;
 }
void main()
{
 clrscr();
 Complex s(3,4);
 Complex t(4,5);
 s.show();
 t.show();
 cout<<"The addition of Complexs numbers is :"<<endl;
 add(s,t);
 getch();
}