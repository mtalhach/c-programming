#include<stdio.h>
#define SIZE 100
int main()
{
	int array[SIZE],i,size,count=0;
	printf("Enter The size of Array: ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("Element No %d is: ",i+1);
		scanf("%d",&array[i]);
	}
	for(i=0;i<size;i++)
	{
		if(array[i]<0)
		{
			count++;
		}
	}
	printf("The total number of negative elements: %d",count);
	return 0;
}
