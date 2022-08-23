#include <stdio.h>
//Problem :Chef has to travel to another place. For this, he can avail any one of two cab services.
//The first cab service charges XX rupees.
//The second cab service charges YY rupees.
//Chef wants to spend the minimum amount of money. Which cab service should Chef take?
int main(void) {
	// your code goes here
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    int x,y;
	    scanf("%d %d",&x,&y);
	    if(x<y)
	    {printf("FIRST");
	        
	    }
	    else if(x==y)
	    {printf("ANY");
	    }
	    
	    else
	    {printf("SECOND");
	    }
	    printf("\n");
      	
	}
	return 0;
}

