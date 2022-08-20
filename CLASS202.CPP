#include<conio.h>
#include<iostream.h>
//Here we are using the concept of class
//We are making Complex class and using the function set_data and show_data to take input and display output respectively
class Complex
{
 private:
 int a,b;
 public:
 inline void set_data(int,int);
 void show_data()
 {
  cout<<"\na="<<a<<" b="<<b;
 }
};
void Complex:: set_data(int x,int y)
{
 a=x;
 b=y;
}
void main()
{
 clrscr();
 Complex c1;
 c1.set_data(3,4);
 c1.show_data();
 getch();
}