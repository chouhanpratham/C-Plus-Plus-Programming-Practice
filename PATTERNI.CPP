#include<conio.h>
#include<iostream.h>
#include<stdio.h>
void main()
 //Here we are using the for loop to print the pattern of inverted triangle
 //We are taking the input of number from the user and using it in for loop for rows 
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
