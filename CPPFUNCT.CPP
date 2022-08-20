#include<conio.h>
#include<iostream.h>
//Here we are using the function defined in structure new concept in C++
//We are defining two functiuons input and display and using them in the main function
struct book
{
 int bookid;
 char title[20];
 float price;
 void input()
 {
  cout<<"Enter bookid,title and price\n";
  cin>>bookid>>title>>price;
 }
 void display()
 {
  cout<<"\n"<<bookid<<" "<<title<<" "<<price;
 }
};
void main()
{
 clrscr();
 book b1;
 b1.input();
 b1.display();
 getch();
}