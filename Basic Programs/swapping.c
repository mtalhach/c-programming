#include<stdio.h>
int main()
{
	int a=10,b=25,temp;
	printf("The Values before swapping a=%d\tb=%d\n",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("The Values After swapping a=%d\tb=%d",a,b);
	return 0;
}




#include<stdio.h>
int main()
{
	int a=10,b=25,temp;
	printf("The Values before swapping a=%d\tb=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("The Values After swapping a=%d\tb=%d",a,b);
	return 0;
}

