#include <stdio.h>
//Chef rented a car for a day.
//Usually, the cost of the car is Rs 1010 per km. However, since Chef has booked the car for the whole day, he needs to pay for at least 300300 kms even if the car runs less than 300300 kms.
//If the car ran XX kms, determine the cost Chef needs to pay.
int main(void) {
	// your code goes here
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    int a,res;
	    scanf("%d",&a);
	    if(a<=300)
	    printf("3000\n");
	    else
	    {
	    
	    res=a*10;
	    printf("%d\n",res);
	    }
	}
	
	return 0;
}

