#include <stdio.h>
//Problem :A study has shown that playing a musical instrument helps in increasing one's IQ by 77 points. Chef knows he can't beat Einstein in physics, but he wants to try to beat him in an IQ competition.
//You know that Einstein had an IQ of 170170, and Chef currently has an IQ of XX.
//Determine if, after learning to play a musical instrument, Chef's IQ will become strictly greater than Einstein's.
int main(void) {
	// your code goes here
	int a;
	scanf("%d",&a);
	if(a+7>170)
	printf("YES");
	else
	printf("NO");
	return 0;
}

