#include <stdio.h>
//Problem :There is a group of NN friends who wish to enroll in a course together. The course has a maximum capacity of MM students that can register for it. If there are KK other students who have already enrolled in the course, determine if it will still be possible for all the NN friends to do so or not.
int main(void) {
	// your code goes here
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    int n,m,k;
	    scanf("%d %d %d",&n,&m,&k);
	    if(n+k<=m)
	    printf("YES");
	    else
	    printf("NO");
	    printf("\n");
	}
	return 0;
}

