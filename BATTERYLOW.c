#include <stdio.h>
//Problem :Chef's phone shows a Battery Low notification if the battery level is 15 \%15% or less.
//Given that the battery level of Chef's phone is X \%X%, determine whether it would show a Battery low notification.
int main(void) {
	// your code goes here
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    int a;
	    scanf("%d",&a);
	    if(a<=15)
	    printf("YES");
	    else
	    printf("NO");
        printf("\n");	    
	}
	return 0;
}

