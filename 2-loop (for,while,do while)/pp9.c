//display the pattern like right angle triangle with a number

#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d  ",j);
		}
		printf("\n");
	}
	return 0;
}
