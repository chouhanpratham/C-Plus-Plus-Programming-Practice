#include<conio.h>
#include<iostream.h>
void main()
 //Here we are using th efor loop to print the pattern
{
 int i,j;
 clrscr();
 cout<<"The Pattern is"<<endl;
 for(i=1;i<=5;i++)
 {
  for(j=1;j<=i;j++)
 {
  cout<<"*";
 }
 cout<<endl;
 }
 getch();
}
