//write a c program to display square and cube of n natural number
#include<stdio.h>
int main()
{
	int i,n=5;
	for(i=1;i<=5;i++)
	{
		printf("%d =>     square:%d     cube:%d\n",i,i*i,i*i*i);
	}
	return 0;
}
