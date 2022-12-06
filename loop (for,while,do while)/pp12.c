//Write a C program to calculate the factorial of a given number.
#include<stdio.h>
int main()
{
	int i,f=1,n;
	printf("Enter The Number you want to find factorial: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("The factorial of %d is: %d",n,f);
	return 0;
}
