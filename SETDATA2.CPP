#include<conio.h>
#include<iostream.h>
//Here we are using the concept of function and structure
//We are using the function in structure to set and show data
struct Complex
{
 private:
 int a,b;
 public:
 void set_data(int x , int y)
 {
  a=x;b=y;
 }
 void show_data()
 {
  cout<<"\na="<<a<<" b="<<b;
 }
};
void main()
{
 clrscr();
 Complex c1;
 c1.set_data(3,4);
 c1.show_data();
 getch();
}