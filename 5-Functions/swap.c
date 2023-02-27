//Write a program in C to swap two numbers using function.
#include<stdio.h>
int swap(int*,int*);
int main()
{
	int n1,n2;
	printf("Enter the number:\n");
	scanf("%d%d",&n1,&n2);
	printf("\nThe number before swaping is: n1=%d    n2=%d\n",n1,n2);
	swap(&n1,&n2);
	printf("\nThe number after swaping is: n1=%d    n2=%d\n",n1,n2);
	return 0;
}
int swap(int *p,int *q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}
