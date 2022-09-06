#include<conio.h>
#include<iostream.h>
void main()
{
 clrscr();
 int a,b,c;
 cout<<"Enter the three numbers:"<<endl;
 cin>>a>>b>>c;
 if(a>b && a>c)
 cout<<"Greatest of three is a= "<<a;
 else if(b>c)
 cout<<"Greatest of three is b= "<<b;
 else
 cout<<"Greatest of three is c= "<<c;
 getch();
}

