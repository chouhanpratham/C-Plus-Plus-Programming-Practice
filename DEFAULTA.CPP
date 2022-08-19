#include<conio.h>
#include<iostream.h>
int add(int,int,int=0);
void main()
//Here we are using the default argement
//We are using the default argument to see that whrn onr argument is not given then by default it takes the third argument zero
{
 clrscr();
 int a,b;
 cout<<"Enter two numbers"<<endl;
 cin>>a>>b;
 cout<<"Sum is "<<add(a,b);
 int c;
 cout<<"Enter three numbers"<<endl;
 cin>>a>>b>>c;
 cout<<"Sum is "<< add(a,b,c);
 getch();
}
int add(int x,int y,int z)
{
 return(x+y+z);
}