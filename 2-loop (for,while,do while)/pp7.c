// print odd number between 1 to 20
#include<stdio.h>
int main()
{
	int n=2,i;
	for(i=1;i<20;i++)
	{
		if(i==n)
		{
			n=n+2;
			continue;
		}
		printf("%d ",i);	
	}
	return 0;
}
