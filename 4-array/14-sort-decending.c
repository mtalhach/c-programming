//Write a program in C to sort elements of array in decending order.
#include<stdio.h>
#define SIZE 10
int main()
{
	int array[]={1,8,4,7,2,5,6,3};
	int i,j,size,temp;
	size=sizeof(array)/sizeof(array[0]);
	
	for(i=0;i<size;i++)
	{
		for(j=i;j<size;j++){
			if(array[i]>array[j]){
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}	
	}
	printf("After Sorting the Array is: ");
	for(i=size-1;i>=0;i--){
		printf("%d ",array[i]);
	}
	return 0;
}
