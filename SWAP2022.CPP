#include<conio.h>
#include<iostream.h>
class Num
{
 int a,b;
 public:
 void swap(int &x,int &y)
 {
  a=x;
  b=y;
  cout<<"\nBefore Swapping Numbers are:\n a= "<<a<<" and b= "<<b;
  int temp;
  temp=a;
  a=b;
  b=temp;
 }
 void show()
 {
  cout<<"\nAfter Swapping Numbers are:\n a= "<<a<<" and b= "<<b<<endl;
 }
 inline void largest(int,int,int);
};
void Num::largest(int x, int y,int z)
{
 if(x>y && x>z)
 cout<<"Grestest Number is "<<x;
 else if(y>z)
 cout<<"Greatest Number is "<<y;
 else
 cout<<"Greatest Number is "<<z;
}
void main()
{
 clrscr();
 Num n1,n2;
 n1.swap(20,30);
 n1.show();
 n2.largest(10,888,89);
 getch();
}