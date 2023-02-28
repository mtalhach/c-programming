#include<stdio.h>
int fun(int a,int b);
int main()
{
	int a=4,b=5;
	fun(a,b);
	
	return 0;
}
int fun(int a,int b)
{
	int c;
	c=a;
	a=b;
	b=c;
	printf("a=%d\tb=%d",a,b);
}
