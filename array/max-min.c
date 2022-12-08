#include<stdio.h>
#define SIZE 100
int main()
{
	int array[SIZE],i,size;
	int max,min;
	printf("Enter The size of Array: ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("Element No %d is: ",i+1);
		scanf("%d",&array[i]);
	}
	max=array[0];
	min=array[0];
	for(i=0;i<size;i++)
	{
		if(max<array[i])
		{
			max=array[i];
		}
		if(min>array[i])
		{
			min=array[i];
		}
	}
	printf("The maximum value is: %d\n",max);
	printf("The minimum value is: %d",min);
	return 0;
}
