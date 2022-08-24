#include<stdio.h>
// Problem :you are using to read input data is sufficiently fast to handle problems branded with the enormous Input/Output warning. You are expected to be able to process at least 2.5MB of input data per second at runtime.
int main()
{
	int n,k,ans=0,i;
	scanf("%d %d",&n,&k);
	
	for(i=0;i<n;i++)
	{
		int t;
		scanf("%d",&t);
		if(t%k==0)
		{
			ans++;
		}
	}
	printf("%d",ans);
	return 0;
}

