#include <iostream>
#include <string>
using namespace std;
//C++ provides a nice alternative data type to manipulate strings, and the data type is conveniently called string. Some of its widely used features are the following:
int main() {
	// Complete the program
   string a ,b;
   cin>>a>>b;
   cout<<a.size()<<" "<<b.size()<<endl;
   cout<<a+b<<endl;
   char t1=a[0];
   char t2=b[0];
   a[0]=t2;
   b[0]=t1;
   cout<<a<<" "<<b;
    return 0;
}
