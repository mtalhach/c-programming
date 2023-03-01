#include<stdio.h>
int main()
{
	int array[100],i,n;
	int *p;
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	p=&array[0];
	printf("Array elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("Array elements %d:",i+1);
		scanf("%d",p);
		p++;
	}
	p=&array[n-1];
	printf("Array in Reverse order:\n");
	for(i=n;i>0;i--)
	{
		printf("%d ",*p);
		p--;
	}
	return 0;
	
}
