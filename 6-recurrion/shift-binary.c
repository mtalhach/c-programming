#include<stdio.h>
int fun(int n);
int main()
{
	int n,count=0;  //110110011 it move on right 9 time to become zero forexample 011011001  and so on
	n=435;
	while(n!=0)
	{
		count++;
		n>>=1; //shift binary number to right
	}
	printf("%d",count);
}
int fun(int n)
{
	int count;           
	return count;
}
