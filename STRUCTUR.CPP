#include<conio.h>
#include<iostream.h>
struct Book
{
 int bookid;
 char book_name[50];
 char author_name[50];
 float price;
};
void main()
{
 clrscr();
 Book b1;
 cout<<"Enter the Details of Book: "<<endl;
 cin>>b1.bookid>>b1.book_name>>b1.author_name>>b1.price;
 cout<<"BookID is\n "<< b1.bookid <<"Book Name is\n "<<b1.book_name;
 cout<<"Author Name is\n "<<b1.author_name <<"Price of Book is "<<b1.price;
 getch();
}

