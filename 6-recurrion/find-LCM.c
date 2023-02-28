//Write a program in C to find the LCM of two numbers using recursion.
#include<stdio.h>
int findLCM(int a,int b);
int main()
{
	int n1,n2,lcmof;
	printf("\n\t----------Enter the first number:  ");
	scanf("%d",&n1);
	printf("\t----------Enter the second number:  ");
	scanf("%d",&n2);
	if(n1>n2)
	{
		lcmof=findLCM(n2,n1);
	}
	else
	{
		lcmof=findLCM(n1,n2);
	}
	printf("The LCM of %d and %d is: %d",n1,n2,lcmof);
	return 0;
}
int findLCM(int a,int b)
{
	static int m=0;
	m=m+b;
	if((m%a==0)&&(m%b==0))
	return m;
	else
	findLCM(a,b);
}
