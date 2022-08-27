#include <stdio.h>
//Problem :You are given 33 numbers A, B,A,B, and CC.
//Determine whether the average of AA and BB is strictly greater than CC or not?
int main(void) {
	// your code goes here
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    float a,b,c;
	    scanf("%f %f %f",&a,&b,&c);
	    if((a+b)/2>c)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}

