//print a frequency
#include<stdio.h>
#define SIZE 100
int main()
{
	int array[]={1,2,1,1,2,1,7,8};
	int i,size,count=0;
	size=sizeof(array)/sizeof(array[0]);
	
	int frequency;
	printf("Enter The Number You want to find Fequency: ");
	scanf("%d",&frequency);
	
	for(i=0;i<size;i++)
	{
		if(frequency==array[i]){
			count++;
		}
	}
	printf("The frequency of %d is:  %d",frequency,count);
	return 0;
}
