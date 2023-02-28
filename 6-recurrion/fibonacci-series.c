//Write a program in C to Print Fibonacci Series using recursion.
#include<stdio.h>
int fibonacci(int fno,int sno);
int term;
int main()
{
	int fno=0,sno=1;
	printf("Enter the term of series:  ");
	scanf("%d",&term);
	printf("\n------The series are:\n");
	printf("1 ");
	fibonacci(fno,sno);
	return 0;	
}
int fibonacci(int fno,int sno)
{
	static int i=1;
	int nxtn;
	if(i==term)
	return 0;
	else
	{
		nxtn=fno+sno;
		fno=sno;
		sno=nxtn;
		printf("%d ",nxtn);
		i++;
		fibonacci(fno,sno);
	}
	return 0;
}
