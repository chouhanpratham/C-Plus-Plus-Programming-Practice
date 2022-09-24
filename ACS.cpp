#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
           int p;
           scanf("%d",&p);
           if(0<=p && 10>=p) printf("%d\n",p);
           else
           {
              p=(p/100) + (p%100);
              if(p<=10)
              printf("%d\n",p);
              else 
              puts("-1");
                   
           }
        }
	return 0;
}
