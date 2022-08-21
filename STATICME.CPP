#include<conio.h>
#include<iostream.h>
//Here we are using the concept of static menber variable and and instance menber variable
//We are using the functions made in class to show the balance
class Account
{
 private:
 int balance;
 static float roi;
 public:
 void setBalance(int b)
 {balance=b;}
 void showBalance()
 {cout<<"Balance is "<<balance;}
};
float Account:: roi=3.5;
void main()
{
 clrscr();
 Account a1;
 a1.setBalance(1000);
 a1.showBalance();
 getch();
}