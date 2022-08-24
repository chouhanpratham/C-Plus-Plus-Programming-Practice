#include<conio.h>
#include<iostream.h>
//Here we are suing the concept of friend function
//We are doing the overloading of insertion and extraction operator
class Complex
{
 private:
 int a,b;
 public:
 void set_data(int x,int y)
 {a=x;b=y;}
 void show_data()
 {
  cout<<"\na="<<a<<" b="<<b;
 }
 friend ostream& operator<<(ostream&,Complex);
 friend istream& operator>>(istream&,Complex&);
};
ostream& operator<<(ostream &dout,Complex c)
{
 cout<<"\na="<<c.a<<" b="<<c.b;
 return(dout);
}
istream& operator>>(istream &din,Complex &c)
{
 cin>>c.a>>c.b;
 return(din);
}
void main()
{
 clrscr();
 Complex c1;
 cout<<"Enter a complex number";
 cin>>c1;
 cout<<"You Entered:";
 cout<<c1;         //operator<<(cout,c1);
 getch();
}

