//write a c program to display n term of natural number and their sum and average
#include<stdio.h>
int main()
{
	int i,n,sum=0;
	float average;
	printf("Enter The Size of natural number: ");
	scanf("%d",&n);
	
	printf("Natural Number is:\n");
	for(i=1;i<=n;i++){
		printf("%d  ",i);
		sum +=i;
	}
	printf("\nThe sum is: %d",sum);
	average=sum/(float)n;
	printf("\nThe average is: %.2f",average);
	return 0;
}


