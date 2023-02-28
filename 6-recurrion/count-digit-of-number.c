//Write a program in C to count the digits of a given number using recursion.
#include<stdio.h>
int numofdigit(int n);
int main()
{
	int n,ctr;
	printf("Enter the Number:  ");
	scanf("%d",&n);
	ctr=numofdigit(n);
	printf("The number of digits are: %d",ctr);
	return 0;
}
int numofdigit(int n)
{
	static int ctr=0;
	if(n!=0)
	{
		ctr++;
		numofdigit(n/10);
	}
	return ctr;
}
