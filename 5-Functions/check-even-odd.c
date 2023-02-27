//Write a program in C to check a given number is even or odd using the function.
#include<stdio.h>
int checkoddeven(int n1);
int main()
{
	int n1;
	printf("Enter the number: ");
	scanf("%d",&n1);
	
	if(checkoddeven(n1))
	{
		printf("The number is odd");
	}
	else
	{
		printf("The number is even");
	}
}
int checkoddeven(int n1)
{
	return (n1&1);
}
