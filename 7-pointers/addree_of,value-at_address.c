#include<stdio.h>
int main()
{
	int a=50;
	float f=34.56;
	char ch='z';
	int *p1=&a;
	float *p2=&f;
	char *p3=&ch;
	
	printf("Value of a:%d\n",a);
	printf("Value of f:%.2f\n",f);
	printf("Value of ch:%c\n\n",ch);
	
	printf("Address of a:%p\n",&a);
	printf("Address of f:%p\n",&f);
	printf("Address of ch:%p\n",&ch);
	
	printf("======================\n");
	printf("Values By using pointer\n");
	printf("======================\n");
	printf("Value of a:%d\n",*p1);
	printf("Value of f:%.2f\n",*p2);
	printf("Value of ch:%c\n",*p3);
	
	printf("======================\n");
	printf("Address By using pointer\n");
	printf("======================\n");
	printf("Address of a:%p\n",p1);
	printf("Address of f:%p\n",p2);
	printf("Address of ch:%p\n",p3);
	
	printf("======================\n");
	printf("Using & and * \n");
	printf("======================\n");
	printf ("value at address of a = %d\n",*(&a));
  	printf ("value at address of f=%.2f\n",*(&f));
  	printf ("value at address of ch= %c\n",*(&ch));	
	return 0;
}
