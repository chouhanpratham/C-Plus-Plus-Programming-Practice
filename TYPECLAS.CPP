#include<conio.h>
#include<iostream.h>
//Here we are understanding the concept of Type conversion from one class type to another class type
//With the help of constructor made in class
class Product
{
 private:
 int m,n;
 public:
 void setdata(int x,int y)
 {
  m=x;
  n=y;
 }
 int getM()
 {
  return m;
 }
 int getN()
 {
  return n;
 }
};
class Item
{
 private:
 int a,b;
 public:
 void showdata()
 {
  cout<<"\na="<<a<<" b="<<b;
 }
 Item()
 {}
 Item(Product p)
 {
  a=p.getM();
  b=p.getN();
 }
};
void main()
{
 clrscr();
 Item i1;
 Product p1;
 p1.setdata(3,4);
 i1=p1;
 i1.showdata();
 getch();
}



