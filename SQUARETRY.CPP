#include<iostream>
#include<math.h>
using namespace std;
class Num
{int a;
 public:
 Num()
 {cout<<"Enter the number to find the Square root of:";
  cin>>a;
  }
 void my_sqrt()
 {try{
   if(a<0){
    throw a;
   }
   else{
    cout<<sqrt(a)<<endl;
   }
  }
  catch(int x){
   cout<<"Number must not be negative"<<endl;
  }
 }
};
int main(){
    Num a;
    a.my_sqrt();
    return 0;
}