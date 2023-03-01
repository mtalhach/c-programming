#include<stdio.h>
int main()
{
	int i,j,n,array[100],temp;
	int *p;
	p=&array;
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Array %d: ",i+1);
		scanf("%d",p+i);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*(p+i)>*(p+j))
			{
			temp=*(p+i);
			*(p+i)=*(p+j);
			*(p+j)=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(p+i));
	}
	
