#include<stdio.h>
#define SIZE 100
int main()
{
	int array[SIZE],i,size;
	int even;
	printf("Enter The size of Array: ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("Element No %d is: ",i+1);
		scanf("%d",&array[i]);
	}
	for(i=0;i<size;i++)
	{
		if(array[i]%2 == 0)
		{
			even=array[i];
			printf("%d is even\t",even);
		}
		else
		{
			printf("%d is odd\t",array[i]);
		}
	}
	return 0;
}
