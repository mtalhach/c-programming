//Write a program in C to calculate the power of any number using recursion.
#include<stdio.h>
int countofpow(int bnum,int pow);
int main()
{
	int bnum,pow;
	long int result;
	printf("\n\t----------Enter the Base of Number:  ");
	scanf("%d",&bnum);
	printf("\t------------Enter the powe:  ");
	scanf("%d",&pow);
	result=countofpow(bnum,pow);
	printf("\n\t-------------The Result is: %ld",result);
	return 0;
}
int countofpow(int a,int b)
{
	long int result=1;
	if(b==0)
	return result;
	result=a*countofpow(a,b-1);
}
