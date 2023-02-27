#include<stdio.h>
long tobin(int);
int main()
{
	long bno;
	int dno;
	printf("Enter the decimal number: ");
	scanf("%d",&dno);
	bno=tobin(dno);
	printf("The binary number is:  %ld",bno);
	return 0;
}
long tobin(int dno)
{
	long bno=0,reminder,f=1;
	while(dno!=0)
	{
	reminder=dno%2;
	bno=bno+reminder*f;
	f=f*10;
	dno=dno/2;
	}
	return bno;
}
