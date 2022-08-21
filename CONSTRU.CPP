#include<conio.h>
#include<iostream.h>
//Here we are using the two constructor function
//We are using the constructor versions when we have two and one argument repectively
class Complex
{
 private:
 int a,b;
 public:
 Complex(int x,int y)
 {a=x; b=y; }
 Complex(int k)
 {a=k; }
 void display()
 {
  cout<<"a="<<a<<" b="<<b<<endl;
 }
};
void main()
{
 clrscr();
 Complex c1(3,4),c2(5);
 c1.display();
 c2.display();
 getch();
}
