#include<iostream.h>
#include<conio.h>
class A
{
 private:
 int m,n;
 public:
 A()
 {
  m=0;
  n=0;
 }
 A(int a,int b)
 {
  m=a;
  n=b;
 }
 void show()
 {
  cout<<"m="<<m<<"\nn="<<n<<endl;
 }
 operator ++()
 {
  m++;
  n++;
 }

};
void main()
{
  clrscr();
  A num(5,10);
  A a;
  a.show();
  a++;
  cout<<"After Increment:"<<endl;
  a.show();
  ++num;
  cout<<"After Increment:"<<endl;
  num.show();
  getch();
}