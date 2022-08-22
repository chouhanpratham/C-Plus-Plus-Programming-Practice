#include<conio.h>
#include<iostream.h>
//Here we are using the Destructor function
//We are seeing the working of destructor function just before the object is destroyed
class Complex
{
 private :
 int x;
 public:
 ~Complex()
 {
  cout<<"Hello Destructor"<<endl;
 }
};
void fun()
{
 Complex obj;
}
void main()
{
 clrscr();
 fun();
 getch();
}

