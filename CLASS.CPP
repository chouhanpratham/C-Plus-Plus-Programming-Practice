#include<conio.h>
#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
class Bank
{
 char name[50];
 float wamount;
 float bamount;
 public :
  int account_no;
 void setdata(int a)
 {
  cout<<"Enter the Following Details for:"<<a+1<<" Customer"<<endl;
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
  cout<<"\nThe Bank Account details for customer are:"<<endl;
  cout<<"\nAccount Holder Name is "<<name;
  cout<<"\nAccount Number is "<<account_no;
  cout<<"\nTotal Balance in Account: "<<bamount<<endl;
 }
 void show(int b)
 {
  cout<<"\nThe Bank Account details for "<<b+1<<" customer are:"<<endl;
  cout<<"\nAccount Holder Name is "<<name;
  cout<<"\nAccount Number is "<<account_no;
  cout<<"\nTotal Balance in Account: "<<bamount<<endl;
 }
 int getaccount()
 {
  return account_no;
 }
};
void main()
{
 clrscr();
 Bank b1[10];
 int i,j,k,l,n,flag;
 cout<<"Enter Bank Account Number:";
 cin>>n;
 for(i=0;i<n;i++)
 {
  b1[i].setdata(i);
 }
 while(j!=0)
 {
  cout<<"Enter the Customer number :";
  cin>>l;
  cout<<"\nPlease Press 1 for Depositing Amount in Account";
  cout<<"\nPlease Press 2 for Withdrawing Amount from Account";
  cout<<"\nPlease Press 3 for Bank Account Details";
  cout<<"\nPlease Press 4  to Exit"<<endl;
  cin>>j;
  switch(j)
  {
   case 1:
   for(i=0;i<n;i++)
   {
    if(b1[i].getaccount()==l)
    {
     flag=1;
     break;
    }
    else
    {
     flag=0;
    }
   }
    if(flag==0)
    {
     cout<<"Account Not Found"<<endl;
    }
    else
    {
     b1[i].deposit();
    }
    break;
   case 2:
   for(i=0;i<n;i++)
   {
    if(b1[i].getaccount()==l)
    {
     flag=1;
     break;
    }
    else
    {
     flag=0;
    }
   }
    if(flag==0)
    {
     cout<<"Account Not Found"<<endl;
    }
    else
    {
     b1[i].withdraw();
    }
    break;
   case 3:
   for(i=0;i<n;i++)
   {
    if(b1[i].getaccount()==l)
    {
     flag=1;
     break;
    }
    else
    {
     flag=0;
    }
   }
    if(flag==0)
    {
     cout<<"Account Not Found"<<endl;
    }
    else
    {
     b1[i].display();
    }
    break;
   case 4:
   {
    j=0;
    break;
   }
   default:
   {
    cout<<"Invalid Choice Selected";
    break;
   }
  }
}
 for(k=0;k<n;k++)
 {
  b1[k].show(k);
 }
 getch();
}