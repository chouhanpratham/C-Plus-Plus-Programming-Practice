#include<conio.h>
#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
class Bank
{
 char name[50];
 int account_no;
 float wamount;
 float bamount;
 public :
 void setdata()
 {
  cout<<"Enter the Following Details :"<<endl;
  cout<<"Name of Account Holder: ";
  gets(name);
  cout<<"Enter the Account Number: ";
  cin>>account_no;
  cout<<"Enter the Initial Amount:";
  cin>>bamount;
  cout<<endl;
 }
 void deposit()
 {
  int deposit;
  cout<<"\nEnter the Amount to Deposit: ";
  cin>>deposit;
  cout<<endl;
  bamount=bamount+deposit;
 }
 void withdraw()
 {
  cout<<"\nEnter the Amount to Withdraw: " ;
  cin>>wamount;
  if(wamount<bamount)
  {
   cout<<"Transaction Successful "<<endl;
   bamount=bamount-wamount;
  }
  else
  cout<<"Transaction Failed \nInsufficient Balance"<<endl;
 }
 void display()
 {
  cout<<"\nThe Bank Account details are:"<<endl;
  cout<<"\nAccount Holder Name is "<<name;
  cout<<"\nAccount Number is "<<account_no;
  cout<<"\nTotal Balance in Account: "<<bamount<<endl;
 }
};
void main()
{
 clrscr();
 Bank b1;
 b1.setdata();
 int i;
 while(i!=0)
 {
 cout<<"\nPlease Press 1 for Depositing Amount in Account";
 cout<<"\nPlease Press 2 for Withdrawing Amount from Account";
 cout<<"\nPlease Press 3 for Bank Account Details";
 cout<<"\nPlease Press 4  to Exit"<<endl;
 cin>>i;
 switch(i)
 {
  case 1:
  {
   b1.deposit();
   break;
  }
  case 2:
  {
   b1.withdraw();
   break;
  }
  case 3:
  {
   b1.display();
   break;
  }
  case 4:
  {
   exit(0);
   break;
  }
  default:
  {
   cout<<"Invalid Choice Selected";
   break;
  }
 }
}
 getch();
}