//Iterative
#include<stdio.h>
int fact(int n);
int main()
{
	printf("%d",fact(5));
	return 0;
}
int fact(int n)
{
	int res=1;
	while(n!=0)
	{
		res=res*n;
		n--;
	}
	return res;
}


//OR
#include<stdio.h>
int fact(int n);
int main()
{
	int f;
	f=fact(5);
	printf("%d",f);
	return 0;
}
int fact(int n)
{
	int res=1;
	while(n!=0)
	{
		res=res*n;
		n--;
	}
	return res;
}


//OR
#include<stdio.h>
int fact(int n);
int main()
{
	int n;
	printf("Enter the Number:  ");
	scanf("%d",&n);
	printf("%d",fact(n));
	return 0;
}
int fact(int n)
{
	int res=1;
	while(n!=0)
	{
		res=res*n;
		n--;
	}
	return res;
}
