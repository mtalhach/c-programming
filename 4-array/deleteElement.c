//Write a program in C to delete an element at desired position from an array.
#include<stdio.h>
int main()
{
	int array[]={1,3,6,7,8,9};
	int i,j,size,p;
	size=sizeof(array)/sizeof(array[0]);
	printf("Enter The Position You want to Delete: ");
	scanf("%d",&p);
	if(p <= 0 || p > size)
    {
        printf("Invalid position! Please enter position between 1 to %d\n", size);
    }
    else
	{
    	for(i=p-1;i<size;i++){
		array[i]=array[i+1];
	}
	size--;
	printf("The Resultant Array is: ");
	for(i=0;i<size;i++){
		printf("%d ",array[i]);
	}
}
	return 0;
}
	

