#include<stdio.h>
int fact(int,int*);
int main()
{
	int n,f;
	printf("Enter the number:\n");
	scanf("%d",&n);
	fact(n,&f);
	printf("The factorial of %d is %d",n,f);
	return 0;
}
int fact(int n,int *f)
{
	int i;
	*f=1;
	for(i=1;i<=n;i++)
	{
		*f=*f*i;
	}
	return f;
}
