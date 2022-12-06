//calculate the sum of natural number if number is negative then loop terminated

#include<stdio.h>
#define SIZE 100
int main()
{
	int i,n,sum=0;
	for(i=1;i<=SIZE;i++)
	{
		printf("Enter The Number: ");
		scanf("%d",&n);
		if(n<0)
		{
			break;
		}
		sum +=n;
	}
	printf("The Sum is: %d",sum);
	return 0;
}




