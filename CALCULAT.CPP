#include<conio.h>
#include<iostream.h>
class Rectangle
{
 public:
 float l,b;
 public:
 void input()
 {
  cout<<"Enter the rectangle length and breadth :"<<endl;
  cin>>l>>b;
 }
};
class Area :public Rectangle
{
 protected:
 float a;
 public:
 void area()
 {
  a=l*b;
  cout<<"The area of rectangle is :"<<a<<endl;
 }
};
class Perimeter :public Area
{
 float per;
 public:
 void perimeter()
 {
  per=2*(l+b);
  cout<<"Perimeter of rectangle is :"<<per<<endl;
 }
};

void main()
{
 clrscr();
 Perimeter p;
 p.input();
 p.area();
 p.perimeter();
 getch();
}