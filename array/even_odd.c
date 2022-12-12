//Write a program in C to separate odd and even integers in separate arrays.
#include<stdio.h>
#define SIZE 10
int main()
{
	int array[]={1,2,3,4,5,6,7,8};
	int even[SIZE],odd[SIZE],i,size,size1=0,size2=0;
	size=sizeof(array)/sizeof(array[0]);
	
	for(i=0;i<size;i++)
	{
		if(array[i]%2==0)
		{
		even[size1]=array[i];
		size1++;	
		}
		else{
			odd[size2]=array[i];
			size2++;
		}		
	}
	printf("Even: ");
	for(i=0;i<size1;i++){
		printf("%d ",even[i]);
	}
	printf("\nOdd: ");
	for(i=0;i<size2;i++){
		printf("%d ",odd[i]);
	}
	return 0;
}
