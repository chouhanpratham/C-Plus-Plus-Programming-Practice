#include <stdio.h>
// Problem :Most programmers will tell you that one of the ways to improve your performance in competitive programming is to practice a lot of problems.
//Our Chef took the above advice very seriously and decided to set a target for himself.
//Chef decides to solve at least 1010 problems every week for 44 weeks.
int main(void) {
	// your code goes here
	int a[4],i,b=0;
	for(i=0;i<4;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<4;i++)
	{
	   
	    if(a[i]>=10)
	    b++;
	}
	printf("%d",b);
	
	return 0;
}

