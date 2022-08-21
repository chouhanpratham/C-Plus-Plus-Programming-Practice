#include<conio.h>
#include<iostream.h>
//Here we are using the concept of Static member function
//We are making the static function and making changes in roi(rate of interest)
class Account
{
 private:
 int balance;
 static float roi;
 public:
 void setBalance(int b)
 {balance=b; }
 static void setRoi(float r)
 {roi=r;}
 void showRoi()
 {
  cout<<"Roi is "<<roi;
 }
};
float Account::roi=3.5;
void main()
{
 clrscr();
 Account a1,a2;
 a1.setRoi(4.5);
 a1.showRoi();
 getch();
}