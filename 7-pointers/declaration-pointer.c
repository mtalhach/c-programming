#include<stdio.h>
int main()
{
	int m=10,n,o;
	int *p=&m;
	printf("\np store the address of m: %p\n",p);
	printf("p stores the value of m: %d\n",*p);
	printf("&m is the address of m: %p\n",&m);
	
	printf("&n is the address of n: %p\n",&n);
	printf("&o is the address of 0: %p\n",&o);
	printf("&p is the address of p: %p",&p);
	return 0;
}

