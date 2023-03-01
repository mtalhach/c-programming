#include<stdio.h>
int main()
{
	int array[100],i,j,temp,n;
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	printf("Array elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("Array elements %d: ",i+1);
		scanf("%d",array+i);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*(array+i)>*(array+j))
			{
				temp=*(array+i);
				*(array+i)=*(array+j);
				*(array+j)=temp;
			}
		}
	}
	printf("After sorting the array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",*(array+i));
	}
	return 0;
}
