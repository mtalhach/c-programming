//print a first repearting element in array
#include<stdio.h>
#define SIZE 100
int main()
{
	int array[]={1,2,1,1,2,1,7,8};
	int i,j,size,flag=0;
	size=sizeof(array)/sizeof(array[0]);
	
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(array[i]==array[j]){
				printf("First Repeating Element is: %d ",array[i]);	
				flag++;
				break;
			}
		}
		if(flag==1){
		break;
		}
	}
	return 0;
}
