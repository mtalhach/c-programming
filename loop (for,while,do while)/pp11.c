//to make such a pattern like right angle triangle with number increased by 1.
#include<stdio.h>
int main()
{
	int i,j,k=1,row;
	printf("Enter The Number of rows: ");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d\t",k++);
		}
		printf("\n");
	}
	return 0;
}
