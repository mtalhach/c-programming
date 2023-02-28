//Write a program in C to calculate the sum of numbers from 1 to n using recursion.
#include<stdio.h>
int sumrange(int n);
int main()
{
	int n,sum;
	printf("\n--------The last number of range is:  ");
	scanf("%d",&n);
	sum=sumrange(n);
	printf("The sum is %d",sum);
	return 0;
}
int sumrange(int n)
{
	int res=0;
	if(n==0)    //if(n==1)
	return 0;  //return 1;
	else
	res=n+sumrange(n-1);
	return res;
}
