#include<stdio.h>
#define SIZE 100
int main()
{
	int array1[SIZE],array2[SIZE],i,size;
	printf("Enter The size of Array: ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("Element No %d is: ",i+1);
		scanf("%d",&array1[i]);
	}
	printf("Resultant array is: ");
	for(i=0;i<size;i++)
	{
		printf("%d ",array1[i]);
	}
	
	for(i=0;i<size;i++)
	{
		array2[i]=array1[i];
	}
	printf("\nCopy of Array is: ");
	for(i=0;i<size;i++)
	{
		printf("%d ",array2[i]);
	}
	return 0;
}
