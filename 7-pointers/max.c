#include<stdio.h>
int main()
{
	int n1,n2;
	int *p=&n1;
	int *q=&n2;
	printf("Enter the first number:\n");
	scanf("%d",&n1);
	printf("Enter the second number:\n");
	scanf("%d",&n2);
	
	if(*p>*q)
	{
		printf("Number %d is greater",*p);
	}
	else
	{
		printf("Numer %d is greater",*q);
	}
	return 0;
}
