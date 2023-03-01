#include<stdio.h>
int main()
{
	int n1,n2,sum;
	int *p1=&n1;
	int *p2=&n2;
	printf("Enter the first number:\n");
	scanf("%d",&n1);
	printf("Enter the second number:\n");
	scanf("%d",&n2);
	
	sum=*p1+*p2;
	printf("Sum:%d",sum);
	return 0;
}
