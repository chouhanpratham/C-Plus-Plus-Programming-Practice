#include<conio.h>
#include<iostream.h>
//Here we are using the pre increment operator
//We are using the operator to increment the i1 value and then assign to i2
class Integer
{
 private:
 int x;
 public:
 void set_data(int a)
 {
  x=a;
 }
 void show_data()
 {
  cout<<"x="<<x;
 }
 Integer operator++()  //Pre increment operator function
 {
 Integer i;
 i.x=++x;
 return(i);
 }
};
void main()
{
 clrscr();
 Integer i1,i2;
 i1.set_data(3);
 i1.show_data();
 i2=++i1;             //Calling pre increment operator
 i1.show_data();
 i2.show_data();
 getch();
}