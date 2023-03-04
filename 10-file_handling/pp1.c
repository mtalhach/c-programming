#include<stdio.h>
int main()
{
	FILE *fp;
	if(fp=fopen("hello.txt","r"))
	{
		printf("Welcome");
	}
	else
	{
		printf("Error!");
	}
	fclose(fp);
	return 0;
}
