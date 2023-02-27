#include<stdio.h>
int fact(int);
int main()
{
	int f;
	f=fact(1)/1+fact(2)/2+fact(3)/3+fact(4)/4+fact(5)/5;
	printf("the factorial of series is: %d",f);
	return 0;
}
int fact(int n)
{
	int i,f=1;
	for(i=0;i<n;i++)
	{
		f=f+f*i;
	}
	return f;
}
