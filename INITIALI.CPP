#include<conio.h>
#include<iostream.h>
//Here we are using the concept of Initializer list
//We are using the initialzer list to initialize refernce and const variables
class Dummy
{
 private:
 int &y;
 const int x;
 public:
 Dummy(int &n):x(5),y(n)
 {
  cout<<"Refernce Passes is "<<y;
 }
};
void main()
{
 clrscr();
 int m=6;
 Dummy d1(m);
 getch();
}

