#include <stdio.h>
//Problem :To access CRED programs, one needs to have a credit score of 750750 or more.
//Given that the present credit score is XX, determine if one can access CRED programs or not.
//If it is possible to access CRED programs, output \texttt{YES}YES, otherwise output \texttt{NO}NO.
int main(void) {
	// your code goes here
	int n;
	scanf("%d",&n);
	if(n>=750)
	printf("YES");
	else
	printf("NO");
	return 0;
}

