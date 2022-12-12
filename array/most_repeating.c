//print a first repearting element in array
#include<stdio.h>
#define SIZE 100
int main()
{
	int array[]={1,2,1,1,2,1,7,8};
	int i,j,size;
	size=sizeof(array)/sizeof(array[0]);
	int max_count=0;
	for(i=0;i<size;i++)
	{
		int count=1;
		for(j=i+1;j<size;j++)
		{
			if(array[i]==array[j])
			{
				count++;	
			}
		}
		if(count>max_count)
		{
			max_count=count;
		}
	}
	for(i=0;i<size;i++)
	{
		int count=1;
		for(j=i+1;j<size;j++)
		{
			if(array[i]==array[j])
			{
				count++;	
			}
		}
		if(count==max_count)
		{
			printf("\nMost repeating element is: %d ",array[i]);
		}
	}
	return 0;
}
