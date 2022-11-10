#include<conio.h>
#include<iostream.h>
class B;
class A
{
 private:
 int a;
 public:
 A()
 {
  a=0;
 }
 A(int x)
 {
  a=x;
 }
 friend void swap(A &a,B &b);
 void show()
 {
  cout<<"The value of a is "<<a<<endl;
 }
};
class B
{
 private:
 int b;
 public:
 B()
 {
  b=0;
 }
 B(int x)
 {
  b=x;
 }
 void show()
 {
  cout<<"The value of b is "<<b<<endl;
 }
 friend void swap(A &a,B &b);
};
void swap(A &a,B &b)
{
 int temp;
 temp=a.a;
 a.a=b.b;
 b.b=temp;
 cout<<"VALUE of a and b after swappping"<<endl;
 cout<<"a="<<a.a<<endl;
 cout<<"b="<<b.b<<endl;
}
void main()
{
 clrscr();
 A x(15);
 B y(20);
 x.show();
 y.show();
 swap(x,y);
 getch();
}