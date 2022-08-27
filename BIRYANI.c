#include <stdio.h>
//Problem :According to a recent survey, Biryani is the most ordered food. Chef wants to learn how to make world-class Biryani from a MasterChef. Chef will be required to attend the MasterChef's classes for XX weeks, and the cost of classes per week is YY coins. What is the total amount of money that Chef will have to pay?
int main(void) {
	// your code goes here
	 int i,n;
	 scanf("%d",&n);
	 for(i=1;i<=n;i++)
	 {
	     int x,y;
	      scanf("%d %d ",&x,&y);
	      printf("%d\n",x*y);
	 }
	return 0;
}

