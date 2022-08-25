#include <stdio.h>
//Problem :Chef is watching a football match. The current score is A:BA:B, that is, team 11 has scored AA goals and team 22 has scored BB goals. Chef wonders if it is possible for the score to become C:DC:D at a later point in the game (i.e. team 11 has scored CC goals and team 22 has scored DD goals). Can you help Chef by answering his question?
int main(void) {
	// your code goes here
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    int a,b,c,d;
	    scanf("%d %d %d %d",&a,&b,&c,&d);
	    if(c>=a && d>=b)
	    printf("POSSIBLE\n");
	    else
	    printf("IMPOSSIBLE\n");
	    
	}
	return 0;
}

