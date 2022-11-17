
#include<conio.h>
#include<iostream.h>
class Matrix
{
 private:
 int Mat1[3][3],Mat2[3][3],Sum[3][3];
 public:
 int i,j;
 void getdata()
 {
  cout<<"Enter the elemnts of Matrix1:"<<endl;
  for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
   {
    cin>>Mat1[i][j];
   }
  }
  cout<<"Enter the elemnts of Matrix2:"<<endl;
  for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
   {
    cin>>Mat2[i][j];
   }
  }
 }
 operator +(Matrix a)
 {
  for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
   {
    Sum[i][j]=Mat1[i][j]+Mat2[i][j];
   }
  }
 }
 void displaysum()
 {
  for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
   {
    cout<<Sum[i][j]<<" ";
   }
   cout<<endl;
  }
 }
};
void main()
{
 clrscr();
 Matrix m,n;
 m.getdata();
 m+n;
 m.displaysum();
 getch();
}