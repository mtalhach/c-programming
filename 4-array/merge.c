//merge two arrays of same size sorted in decending order.
#include<stdio.h>
#define SIZE 20
int main()
{
	int array1[SIZE],array2[SIZE],array3[SIZE];
	int i,j,k,size1,size2,size3;
	printf("Enter The Size of Array1: ");
	scanf("%d",&size1);
	for(i=0;i<size1;i++)
	{
		printf("Element No %d is: ",i+1);
		scanf("%d",&array1[i]);
	}
	printf("Resultant Array: ");
	for(i=0;i<size1;i++)
	{
		printf("%d ",array1[i]);
	}
	
	
	printf("\nEnter The Size of Array2: ");
	scanf("%d",&size2);
	for(j=0;j<size2;j++)
	{
		printf("Element No %d is: ",j+1);
		scanf("%d",&array2[j]);
	}
	printf("Resultant Array: ");
	for(j=0;j<size2;j++)
	{
		printf("%d ",array2[j]);
	}
	
	
	for(i=0;i<size1;i++){
		array3[i]=array1[i];
	}
	for(j=0;j<size2;j++){
		array3[i]=array2[j];
		i++;
	}
	size3=size1+size2;
	
	
	
	
	
	printf("\n\nMerged Array is: ");
	for(i=0;i<size3;i++){
		printf("%d ",array3[i]);
	}
	return 0;
}
