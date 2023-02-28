//Write a program in C to get the largest element of an array using recursion.
#include<stdio.h>
int maxarr(int arr[],int n);
#define MAX 100
int main()
{
	int arr[MAX],n,i,hstelem;
	printf("\n\t---------Size of array  ");
	scanf("%d",&n);
	printf("\t---------Array elements are\n");
	for(i=0;i<n;i++)
	{
		printf("elements:-%d: ",i+1);
		scanf("%d",&arr[i]);
	}
	hstelem=maxarr(arr,n);
	printf("\n\n\t--------The MAximum array is: %d",hstelem);
	return 0;
}
int maxarr(int arr[],int n)
{
	static int i=0,hstelem=-9999;
	if(i<n)
	{
		if(hstelem<arr[i])
		hstelem=arr[i];
		i++;
		maxarr(arr,n);
	}
	return hstelem;
}
