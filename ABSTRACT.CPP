#include<conio.h>
#include<iostream.h>
//Here we are using the concept of Abstract class in C++
//We are making a pure virtual function fun so that the parent class becomes Abstract class
class Person            //Parent Class
{
 public:
 virtual void fun()=0; //Pure Virtual Function
 void f1()
 {}
};
class Student:public Person    //Child Class
{
 public:
 void fun()          //Version of fun functio in child class
 {}
};
void main()
{
 clrscr();
 Student s1;
 s1.fun();     //B class fun will run due to pure virtual function
 getch();
}

