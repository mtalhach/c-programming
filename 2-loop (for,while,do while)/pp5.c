#include<stdio.h>
int main()
{
	int i,j;
	for (i =2; i <=8;i=i+2)
	{
		printf("\n");
		for (j =1; j <=4;j++)
		{
			printf("\t%d",i*j);
		}
	}
}

