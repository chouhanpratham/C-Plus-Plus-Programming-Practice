#include <stdio.h>
//Problem :Chef wants to appear in a competitive exam. To take the exam, there are following requirements:
//Minimum age limit is XX (i.e. Age should be greater than or equal to XX).
//Age should be strictly less than YY.
//Chef's current Age is AA. Find whether he is currently eligible to take the exam or not.
int main(void) {
	// your code goes here
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    int x,y,a;
	    scanf("%d %d %d",&x,&y,&a);
	    if(a>=x && a<y)
	    
	    printf("YES \n");
	    else
	    printf("NO \n");
	}
	return 0;
}

