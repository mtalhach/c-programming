#include<stdio.h>
int addnum(int*,int*);
int main()
{
	int n1,n2,sum;
	printf("Enter the first number:\n");
	scanf("%d",&n1);
	printf("Enter the second number:\n");
	scanf("%d",&n2);
	
	sum=addnum(&n1,&n2);
	printf("Sum:%d",sum);
	return 0;
}
int addnum(int *n1,int *n2)
{
	int sum;
	sum=*n1+*n2;
	return sum;
}
