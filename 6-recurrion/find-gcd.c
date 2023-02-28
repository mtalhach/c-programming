//Write a program in C to find GCD of two numbers using recursion.
#include<stdio.h>
int findgcd(int n1,int n2);
int main()
{
	int n1,n2,gcd;
	printf("\n\t------Enter the First number  ");
	scanf("%d",&n1);
	printf("\t------Enter the second number  ");
	scanf("%d",&n2);
	gcd=findgcd(n1,n2);
	printf("\n\n\t-----------The GCD of %d and %d is: %d",n1,n2,gcd);
	return 0;
}
int findgcd(int a,int b)
{
	while(a!=b)
	{
		if(a>b)
		return findgcd(a-b,b);
		else
		return findgcd(a,b-a);
	}
}
