#include <iostream>
#include <cstdio>
using namespace std;
//Some C++ data types, their format specifiers, and their most common bit widths are as follows:
//Int ("%d"): 32 Bit integer
//Long ("%ld"): 64 bit integer
//Char ("%c"): Character type
//Float ("%f"): 32 bit real value
//Double ("%lf"): 64 bit real value
int main() {
    // Complete the code.
    int a;
    long int b;
    char c;
    float d;
    double e;
    cin>>a>>b>>c>>d>>e;
    cout<<a<<"\n"<<b<<"\n";
    cout<<c<<"\n";
    printf("%0.3f",d);
    printf("\n%0.9lf",e);
    return 0;
}