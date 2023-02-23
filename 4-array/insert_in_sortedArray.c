//Write a program in C to insert New value in the array (sorted list ).
#include<stdio.h>
#define SIZE 10
int main()
{
	int array[]={1,3,6,7,8,9};
	int i,j,size;
	size=sizeof(array)/sizeof(array[0]);
	int value;
	printf("Enter The Number You want to insert:  ");
	scanf("%d",&value);
	int low=0,high=size-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(array[mid]==value){
			return;
		}
		if(array[mid]<value){
			low=mid+1;
		}
		if(array[mid]>value){
			high=mid-1;
		}
	}
	for(i=size-1;i>=low;i--){
		array[i+1]=array[i];
	}
	array[low]=value;
	printf("The Resultant Array is: ");
	for(i=0;i<=size;i++){
		printf("%d ",array[i]);
	}
	return 0;
}
	

