#include <stdio.h>
//Chef is watching TV. The current volume of the TV is XX. Pressing the volume up button of the TV remote increases the volume by 11 while pressing the volume down button decreases the volume by 11. Chef wants to change the volume from XX to YY. Find the minimum number of button presses required to do so.
int main(void) {
	// your code goes here
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    int x,y,res;
	    scanf("%d %d",&x,&y);
	    res=abs(x-y);
	    printf("%d \n",res);
	    
	}
	return 0;
}

