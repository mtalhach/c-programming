//Write a program in C for binary search using recursion.
#include<stdio.h>
int binarysearch(int*,int,int,int,int);
int main()
{
	int arr[100],i,n,c,low,high,md;
	printf("\n---------Enter the size of array:  ");
	scanf("%d",&n);
	printf("\n---------Array elements\n");
	for(i=0;i<n;i++)
	{
		printf("elements:- %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("---------Resultant array\n");
	for(i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
	printf("\n-------Enter the number of search  ");
	scanf("%d",&md);
	low=0,high=n-1;
	c=binarysearch(arr,n,md,low,high);
	if(c==0)
	{
		printf("Element does not found");
	}
	else
	{
		printf("Element found");
	}
	return 0;
}
int binarysearch(int arr[],int n,int md,int low,int high)
{
	int mid,c=0;
	if(low<=high)
	{
		mid=(low+high)/2;
		if(md==arr[mid])
		{
			return c=1;
		}
		else if(md<arr[mid])
		{
			return binarysearch(arr,n,md,low,mid-1);
		}
		else
		{
			return binarysearch(arr,n,md,mid+1,high);
		}
	}
	else
	return c;
	
}
