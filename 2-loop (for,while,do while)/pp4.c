//write a c program to display n term of odd natural number and their sum
#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("Enter The limit of natural number: ");
	scanf("%d",&n);
	printf("Odd Numbers are: ");
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			printf("%d  ",i);
			sum +=i;	
		}
	}
	printf("\nThe Sum of Odd Number is: %d",sum);
	return 0;
}
