#include<iostream>
using namespace std;
template<class T>
class array
{
 T *a;
 int x;
 public:
 void getdata()
 {
  int i;
  cout<<"Enter no of Elements:";
  cin>>x;
  a=new T[x];
  cout<<"Enter Array Elements";
  for(i=0;i<x;i++)
  {
   
   cin>>a[i];
  }
 }
 void display()
 {
  int i;
  cout<<"\nArray is: "<<endl;
  for(i=0;i<x;i++)
  {
   cout<<a[i]<<endl;
  }
 }
 void sort()
 {
  T k;
  int i,j;
  for(i=0;i<x;i++)
  {
   for(j=0;j<x-1;j++)
   {
    if(a[i]>a[j])
    {
     k=a[i];
     a[i]=a[j];
     a[j]=k;
    }
   }
  }
 }
};
int main()
{
 array<int>x;
 x.getdata();
 x.sort();
 x.display();
 return 0;
}