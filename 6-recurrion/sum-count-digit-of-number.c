//Write a program in C to find the sum of digits of a number using recursion.
#include<stdio.h>
int digitsum(int n);
int main()
{
	int n,sum;
	printf("Enter the Number:  ");
	scanf("%d",&n);
	sum=digitsum(n);
	printf("The number of digits are: %d",sum);
	return 0;
}
int digitsum(int n)
{
	if(n==0)
	return 0;
	else
	return ((n%10)+digitsum(n/10));	
}

