#include<stdio.h>
#include<conio.h>
#define MAX 100
int findmaxelem(int []);
int n;
int main()
{
	int i,arr1[MAX],maxelem;
	printf("Enter the Size of array:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d",i+1);
		scanf("%d",&arr1[i]);
		maxelem=findmaxelem(arr1);
		printf("%d",maxelem);
		return 0;
	}
	int findmaxelem(int arr1[])
	{
		int i,maxelem;
		maxelem=arr1[0];
		for(i=0;i<n;i++)
		{
			if(maxelem<arr1[i])
			maxelem=arr1[i];
		}
		return maxelem;
	}
}

