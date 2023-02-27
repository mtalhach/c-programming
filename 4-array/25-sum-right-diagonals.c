//Write a program in C to find sum of right diagonals of a matrix.
#include<stdio.h>
int main()
{
	int array[50][50],i,j,n,sum=0;
	printf("Enter the size of Matrix: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("elements-[%d][%d]: ",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	printf("\n---------Matrix are:\n");
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
			printf("%d ",array[i][j]);
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				sum=sum+array[i][j];
			}
		}
	}
	printf("\nAddition of right dignols is: %d ",sum);
}
