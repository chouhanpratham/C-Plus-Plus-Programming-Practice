#include<conio.h>
#include<iostream.h>
void main()
//Here we are using the cout and cin object to find the greatest of three numbers 
{
 int a,b,c;
 cout<<"Enter the elements"<<endl;
 cin>>a>>b>>c;
 if(a>b)
 {
  if(a>c)
  {
   cout<<"Greatest number is "<<a;
  }
  else
  {
   cout<<"Greatest number is "<<c;
  }
 }
 else
 {
  if(b>c)
  {
   cout<<"Greatest number is "<<b;
  }
  else
  {
   cout<<"Greatest number is "<<c;
  }
 }
 getch();
}
