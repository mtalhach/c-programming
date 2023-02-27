//Write a program in C to find sum of rows an columns of a Matrix.
#include<stdio.h>
int main()
{
	int array[50][50],srow[50],scol[50];
	int i,j,n;
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
		srow[i]=0;
		for(j=0;j<n;j++)
		{
		srow[i]=srow[i]+array[i][j];	
		}
	}
	
	for(i=0;i<n;i++)
	{
		scol[j]=0;
		for(j=0;j<n;j++)
		{
		scol[j]=scol[j]+array[i][j];	
		}	
	}
		
	printf("\n------------sum of row is:\n");
	for(i=0;i<n;i++)
		{
		printf("%d\n",srow[i]);	
		}
		printf("\n------------sum of coloum is:\n");
		for(j=0;j<n;j++)
		{
		printf("%d ",scol[j]);	
		}
}
