#include<conio.h>
#include<iostream.h>
int area(int,int);
float area(int);
void main()
//Here we are using the concept of function overloading
//We are using two function with same name to calculate the area of circle and rectangle
{
 clrscr();
 int r;
 cout<<"Enter the radius of the circle"<<endl;
 cin>>r;
 float A=area(r);
 cout<<"Area of circle is "<<A<<endl;
 int l,b,a;
 cout<<"Enter the length and breadth of recatangle\n";
 cin>>l>>b;
 a=area(l,b);
 cout<<"Area of rectangle is "<<a;
 getch();
}
int area(int L,int B)
{
 return(L*B);
}
float area(int R)
{
 return(3.14*R*R);
}