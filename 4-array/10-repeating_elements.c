//print the duplicate elements
#include<stdio.h>
#define SIZE 10
int main()
{
	int array[]={1,2,1,1,2,1,7,8};
	int arr[SIZE],i,j,k=0,size;
	size=sizeof(array)/sizeof(array[0]);
	
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(array[i]==array[j])
			{
				arr[k]=array[i];
				k++;	
			}	
		}	
	}
	
	printf("Repeating elements:  ");
	for(i=0;i<k;i++){
		for(j=0;j<i;j++){
			if(arr[i]==arr[j]){
				break;
			}
		}
		if(i==j){
			printf("%d ",arr[i]);
		}
	}
	return 0;
}
