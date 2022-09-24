#include <iostream>
using namespace std;
//Problem :Chef has infinite coins in denominations of rupees 5 and rupees 10.
//Find the minimum number of coins Chef needs, to pay exactly X rupees. If it is impossible to pay X rupees in denominations of rupees 5 and 10 only, print -1.
int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--)
	{
	    int a;
	    cin>>a;
	    if(a%5==0)
	    {
	        if(a%10==0)
	            cout<<a/10<<endl;
	        else
	            cout<<(a/10)+1<<endl;
	    }
	    else
	    {
	        cout<<"-1\n";
	    }
	}
	return 0;
}

