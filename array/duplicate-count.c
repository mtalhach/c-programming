//count a total number of duplicate elements in an array.
#include<stdio.h>
#define SIZE 100
int main()
{
	int array[]={1,2,1,1,2,1,7,8};
	int i,j,size,count=0;
	size=sizeof(array)/sizeof(array[0]);
	
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(array[i]==array[j])
			{
				count++;
				break;
			}
		}
	}
	printf("The total Number of Duplicate Elements: %d",count);
	return 0;
}
