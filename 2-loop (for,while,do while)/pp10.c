//make such a pattern like right angle triangle with a number 
//which will repeat a number in a row.

#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d  ",i);
		}
		printf("\n");
	}
	return 0;
}
