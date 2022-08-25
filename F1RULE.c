#include <stdio.h>
//Problem :hef has finally got the chance of his lifetime to drive in the F1F1 tournament. But, there is one problem. Chef did not know about the 107% rule and now he is worried whether he will be allowed to race in the main event or not.
//Given the fastest finish time as XX seconds and Chef's finish time as YY seconds, determine whether Chef will be allowed to race in the main event or not.
//Note that, Chef will only be allowed to race if his finish time is within 107% of the fastest finish time.
int main(void) {
	// your code goes here
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    float x,y;
	    scanf("%f %f",&x,&y);
	    if(y<=x*1.07)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}

