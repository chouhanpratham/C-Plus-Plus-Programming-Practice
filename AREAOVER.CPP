#include<conio.h>
#include<iostream.h>
#include<math.h>
class triangle
{
 private:
 float a,b,c;
 public:
 void area(float b,float h)   //Area of right triangle
 {
  a=b;b=h;c=1;
  float add=0;
  add=(1/2)*b*h;
  cout<<"Area of Right Triangle is:"<<add<<endl;
 }
 void  area(float s)
 {
  a=s;b=1;c=1;
  int add;
  add=s*s*s;
  cout<<"Area of Equilateral Triangle is:"<<add<<endl;
 }
 void area(float p,float q,float r)
 {
  a=p;b=q;r=c;
  float s,add;
  s=(p+q+r)/2;
  add=(s*(s-p)*(s-q)*(s-r));
  cout<<"Area of Scalene Triangle is:"<<add;
 }
};
void main()
{
 clrscr();
 triangle p,q,r;
 p.area(3,4);
 p.area(4);
 p.area(2,3,4);
 getch();
}