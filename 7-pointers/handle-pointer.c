#include<stdio.h>
int main()
{
	int *p;
	int m=15;
	
	printf("Address of m: %p\n",&m);
	printf("Value of m: %d\n\n",m);
	
	p=&m;
	printf("Address of m: %p\n",p);
	printf("Value of m: %d\n\n",*p);
	
	m=34;
	printf("Address of m: %p\n",p);
	printf("Value of m: %d\n\n",*p);
	
	*p=7;
	printf("Address of m: %p",p);
	
	return 0;
}
