#include <stdio.h>
//Problem :Chef is playing with weights. He has an object weighing WW units. He also has three weights each of X, Y,X,Y, and ZZ units respectively. Help him determine whether he can measure the exact weight of the object with one or more of these weights.
int main(void) {
	// your code goes here
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    int w,x,y,z;
	    scanf("%d %d %d %d",&w,&x,&y,&z);
	    if(x==w ||y==w ||z==w || (x+y)==w||(x+z)==w||(y+z)==w ||(x+y+z)==w)
	    printf("YES\n");
	    else 
	    printf("NO\n");
	    
	}
	return 0;
}

