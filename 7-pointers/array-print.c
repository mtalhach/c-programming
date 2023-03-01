#include<stdio.h>
int main()
{
	int array[100],i,n;
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	printf("Enter the elements in array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",array+i);
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",*(array+i));
	}
	return 0;
}
