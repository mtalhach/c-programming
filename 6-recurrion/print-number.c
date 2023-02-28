//Write a program in C to print first 50 natural numbers using recursion.
#include<stdio.h>
int num(int n);
int main()
{
	int n=1;
	printf("\n--------The (1-50) Natural numbers are\n\n");
	num(n);
	printf("\n\n");
	return 0;
}
int num(int n)
{
	if(n<=50)
	{
		printf("%d ",n);
		num(n+1);
	}
}
