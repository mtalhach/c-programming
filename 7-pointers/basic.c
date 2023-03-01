#include<stdio.h>
int main()
{
	int a=56;
	int *p=&a;
	printf("The address of pointer is %p\n",&p);
	printf("The value of a is %d\n",*p);
	printf("another way to print The value of a is %d\n",a);
	printf("The address of a is %p\n",p);
	printf("Another way to print The address of a is %p",&a);
	return 0;
}
