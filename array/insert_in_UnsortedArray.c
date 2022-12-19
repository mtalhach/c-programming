//Write a program in C to insert New value in the array (unsorted list ).
#include<stdio.h>
int main()
{
	int array[]={1,3,6,7,8,9};
	int i,j,size,value,p;
	size=sizeof(array)/sizeof(array[0]);
	printf("Enter The Number You want to insert:  ");
	scanf("%d",&value);
	printf("Enter The Position You want to insert: ");
	scanf("%d",&p);
	for(i=size;i>=p;i--){
		array[i]=array[i-1];
	}
	array[p-1]=value;
	printf("The Resultant Array is: ");
	for(i=0;i<=size;i++){
		printf("%d ",array[i]);
	}
	return 0;
}
	

