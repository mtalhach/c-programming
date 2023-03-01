#include<stdio.h>
int swapnum(int*,int*,int*);
int main()
{
	int n1,n2,n3;
	printf("Enter the n1:\n");
	scanf("%d",&n1);
	printf("Enter the n2:\n");
	scanf("%d",&n2);
	printf("Enter the n3:\n");
	scanf("%d",&n3);
	
	printf("Before swap n1:%d  n2:%d   n2:%d\n\n",n1,n2,n3);
	swapnum(&n1,&n2,&n3);
	printf("After swap swap n1:%d  n2:%d   n2:%d",n1,n2,n3);
	return 0;
}
int swapnum(int *n1, int *n2, int *n3)
{
	int temp;
	temp=*n2;
    	*n2=*n1;
    	*n1=*n3;
    	*n3=temp;
}
