#include<conio.h>
#include<iostream.h>
//Here we are using the constructor function
//We are using the constructr to see whether it run when we make an object
class Complex
{
 private:
 int a,b;
 public:
 Complex()
 {
  cout<<"Hello Constructor\n";
 }
};
void main()
{
 clrscr();
 Complex c1,c2,c3;
 getch();
}