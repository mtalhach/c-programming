#include<stdio.h>
int fun(int n);
int main()
{
	int n,count=2;  
	n=435;
	while(n!=0)
	{
		count++;
		n>>=2; //shift binary number to right
	}
	printf("%d",count);
}
int fun(int n)
{
	int count;           
	return count;
}
