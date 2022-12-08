#include<stdio.h>
#define SIZE 100
int main()
{
	int array[SIZE],i,size;
	printf("Enter The size of Array: ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("Element No %d is: ",i+1);
		scanf("%d",&array[i]);
	}
	printf("Resultant array is: ");
	for(i=0;i<size;i++)
	{
		printf("%d ",array[i]);
	}
	printf("\nResultant array in reverse order: ");
	for(i=size-1;i>=0;i--)
	{
		printf("%d ",array[i]);
	}
	return 0;
}
