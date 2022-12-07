//display the sum of the series [ 9 + 99 + 999 + 9999 ...].

#include<stdio.h>
int main()
{
	int i,n,sum=0,t=9;
	printf("Enter The size of series: ");
	scanf("%d",&n);
	printf("The Series is:\n");
	for(i=0;i<n;i++){
		sum=sum+t;
		printf("%d ",t);
		t=t*10+9;
	}
	printf("\nThe sum of series is: %d",sum);
	return 0;
}
