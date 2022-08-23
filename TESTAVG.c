// Problem :Chef has scored A, B,A,B, and CC marks in 33 different subjects respectively.

Chef will fail if the average score of any two subjects is less than 3535. Determine whether Chef will pass or fail.
#include <stdio.h>
float avg(int,int);
int main(void) {
	// your code goes here
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    int a,b,c;
	    float x,y,z;
	    scanf("%d %d %d",&a,&b,&c);
	    x=avg(a,b);
	    y=avg(b,c);
	    z=avg(a,c);
	    if(x>=35 && y>=35 && z>=35)
	    printf("PASS \n");
	    else
	    printf("FAIL \n");
	    
	}
	return 0;
}
float avg(int a,int b)
{
    float res;
    res=(a+b)/2;
    return(res);
}
