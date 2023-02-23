#include<stdio.h>
#define SIZE 100
int main()
{
	int array[SIZE],i,size,sum=0;
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
		sum +=array[i];
	}
	printf("\nThe sum of array is: %d",sum);
	return 0;
}
