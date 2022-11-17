#include<iostream.h>
#include<conio.h>
#include<string.h>
class String
{
 private:
 char name[50];
 public:
 void getdata()
 {
  cout<<"Enter the String:";
  cin>>name;
 }
 void display()
 {
  cout<<"String is: "<<name<<endl;
 }
  int operator ==(String a)
 {
  if(!strcmp(name,a.name))
  return 1;
  return 0;
 }
 String operator+(String x)
 {
  strcat(name,x.name);
  strcpy(x.name,name);
  return x;
 }
};
void main()
{
 clrscr();
 String a,b,c;
 a.getdata();
 b.getdata();
 if(a==b)
  cout<<"String matched"<<endl;
  else
  cout<<"String not matched"<<endl;
 c=a+b;
 c.display();
 getch();
}