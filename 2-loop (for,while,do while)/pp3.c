//write a c program to display the multiplication table of a natural number
#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter The number: ");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("%d x %d\t= %d\n",n,i,n*i);
	}
	return 0;
}
