//print a unqiue array
#include<stdio.h>
#define SIZE 100
int main()
{
	int array[]={1,2,1,1,2,1,7,8};
	int i,j,size;
	size=sizeof(array)/sizeof(array[0]);
	
	for(i=0;i<size;i++)
	{
		for(j=0;j<i;j++)
		{
			if(array[i]==array[j]){
				break;
			}
		}
		if(i==j){
		printf("%d ",array[i]);	
		}
	}
	return 0;
}
