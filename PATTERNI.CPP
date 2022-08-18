#include<conio.h>
#include<iostream.h>
#include<stdio.h>
void main()
{
 int i,j,rows,k;
 clrscr();
 cout<<"Enter the number of rows";
 cin>>rows;
 cout<<"The pattern is"<<endl;
 for(i=rows;i>=1;--i)
 {
  for(k=0;k<rows-i;++k)
  {
   cout<<" ";
  }
  for(j=i;j<= 2*i-1;++j)
  {
   cout<<"*";
  }
  for(j=0;j<i-1;++j)
  {

   cout<<"*";
  }
  cout<<endl;
 }
 getch();
}