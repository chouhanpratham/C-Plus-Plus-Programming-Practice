#include<conio.h>
#include<iostream.h>
int sum(int&,int&);
void main()
{
 clrscr();
 int a,b;
 cout<<"Enter two Numbers"<<endl;
 cin>>a>>b;
 int s=sum(a,b);
 cout<<"Sum is"<<s;
 getch();
}
int sum(int&x,int&y)
{
 return(x+y);
}