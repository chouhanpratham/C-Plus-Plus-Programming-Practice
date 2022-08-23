#include<conio.h>
#include<iostream.h>
//Here we are doing operator overloading with the help of friend function
//We are making new definition of + operator with the friend function
class Complex
{
 private:
 int a,b;
 public :
 void set_data(int x, int y)
 { a=x; b=y;}
 void show_data()
 { cout<<"\na="<<a<<" b="<<b;}
 friend Complex operator+(Complex,Complex);
};
Complex operator+(Complex X,Complex Y)
{
 Complex temp;
 temp.a=X.a+Y.a;
 temp.b=X.b+Y.b;
 return(temp);
}
void main()
{
 clrscr();
 Complex c1,c2,c3;
 c1.set_data(3,4);
 c2.set_data(5,6);
 c3=c1+c2;
 c3.show_data();
 getch();
}
