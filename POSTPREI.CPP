#include<conio.h>
#include<iostream.h>
//Here we are using the pre and post incrementer overloading
//We are using the operator overloading to increment the value
class Integer
{
 private:
 int x;
 public:
 void set_data(int a)
 {x=a;}
 void show_data()
 {cout<<"x="<<x;}
 Integer operator++()       //Pre Increment
 {
  Integer i;
  i.x=++x;
  return(i);
 }
 Integer operator++(int)    //Post Increment
 {
 Integer i;
 i.x=x++;
 return(i);
 }
};
void main()
{
 clrscr();
 Integer i1,i2;
 i1.set_data(3);
 i1.show_data();
 i2=i1++;           //i2=i1.operator++();
 i1.show_data();
 i2.show_data();
 getch();
}