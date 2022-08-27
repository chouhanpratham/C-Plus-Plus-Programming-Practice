#include <stdio.h>
//Problem :Chef has NN candies. He has to distribute them to exactly MM of his friends such that each friend gets equal number of candies and each friend gets even number of candies. Determine whether it is possible to do so.
int main(void) {
	// your code goes here
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    int  a,m,res,s;
	    scanf("%d %d",&a,&m);
	    res=a/m;
	    s=a%m;
	    if(res%2==0 &&s==0)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}

