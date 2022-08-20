#include<conio.h>
#include<iostream.h>
//Here we are using the keyword public and private
//We are using the private and private access specifier to see how we can use them to give access and deny access
struct book
{
 private:
 int bookid;
 char title[20];
 float price;
 public:
 void input()
 {
  cout<<"Enter the bookid,title and price"<<endl;
  cin>>bookid>>title>>price;
  if(bookid<0)
  {
   bookid=-bookid;
  }
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