#include<conio.h>
#include<iostream.h>
//Here we are using the concept of structure and function
//We are using function input to take input and print on the screen using display
struct book
{
 int bookid;
 char title[20];
 float price;
};
void display(book);
book input();
void main()
{
 clrscr();
 book b1;
 b1=input();
 display(b1);
 getch();
}
void display(book b)
{
 cout<<"\n"<<b.bookid<<" "<<b.title<<" "<<b.price;
}
book input()
{
 book b;
 cout<<"Enter the bookid,title and price"<<endl;
 cin>>b.bookid>>b.title>>b.price;
 return(b);
}

