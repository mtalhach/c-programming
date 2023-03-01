#include<stdio.h>
int main()
{
	int array[100],i,n,sum=0;
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	
	printf("Array Elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("Array elements %d:",i+1);
		scanf("%d",&array[i]);
	}
	int *p=array;
	for(i=0;i<n;i++)
	{
		sum=sum+*p;
		p++;
	}
	printf("The sum of array is:%d",sum);
}
