#include <stdio.h>
//Problem :Chef wants to become fit for which he decided to walk to the office and return home by walking. It is known that Chef's office is XX km away from his home.
//If his office is open on 55 days in a week, find the number of kilometers Chef travels through office trips in a week.
int main(void) {
	// your code goes here
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    int x,ans;
	    scanf("%d",&x);
	    ans=x*2*5;
	    printf("%d \n",ans);
	}
	return 0;
}

