#include<conio.h>
#include<iostream.h>
void main()
{
 clrscr();
 int i,j,n;
 cout<<"Enter the numbers of rows:"<<endl;
 cin>>n;
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=i;j++)
  {
   cout<<"*";
  }
   cout<<endl;
 }
 getch();
}

