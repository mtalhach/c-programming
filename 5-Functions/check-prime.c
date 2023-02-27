//Write a program in C to check whether a number is a prime number or not using the function
#include<stdio.h>
int checkprime(int n1);
int main()
{
	int n1,prime;
	printf("Enter the number: ");
	scanf("%d",&n1);
	
	prime=checkprime(n1);
	if(prime==1)
	{
		printf("The number is prime");
	}
	else
	{
		printf("The number is not prime");
	}
}
int checkprime(int n1)
{
	int i=2;
    while(i<=n1/2)
    {
         if(n1%i==0)
             return 0;
         else
             i++;
    }
    return 1;
}
