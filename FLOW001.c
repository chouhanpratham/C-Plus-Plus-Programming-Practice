#include <stdio.h> 
//Shivam is the youngest programmer in the world, he is just 12 years old. Shivam is learning programming and today he is writing his first program.
int main()
	int T;
	scanf("%d", &T);
	while (T--) 
	{
		int a, b,ans;
		scanf("%d %d", &a, &b);
        ans = a + b;
		printf("%d\n", ans);
	}

	return 0;
}