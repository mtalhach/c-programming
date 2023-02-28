//Write a program in C to print even or odd numbers in given range using recursion
#include<stdio.h>
int evenodd(int stVal,int n);
int main()
{
	int n;
	printf("\n\t-----------The number range are:  ");
	scanf("%d",&n);
	
	printf("\t-------Even number from 1 to %d are: ",n);
	evenodd(2,n);
	printf("\n\t-------Odd number from 1 to %d are: ",n);
	evenodd(1,n);
	return 0;
}ttrt
int evenodd(int stVal,int n)
{
	if(stVal>n)
	return 0;
	else
	printf("%d ",stVal);
	evenodd(stVal+2,n);
}
