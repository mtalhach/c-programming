//Write a program in C to print the array elements using recursion.
#include<stdio.h>
#define MAX 100
int array(int arr[],int str,int l);
int main()
{
	int arr[MAX],n,i;
	printf("Enter the size of array:  ");
	scanf("%d",&n);
	printf("\t--------Array elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("elements:-%d: ",i+1);
		scanf("%d",&arr[i]);
	}
	array(arr,0,n);
	return 0;
}
int array(int arr[],int str,int l)
{
	if(str>=l)
	return 0;
	else
	printf("%d ",arr[str]);
	array(arr,str+1,l);
	return 0;
}
