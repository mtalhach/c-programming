#include<stdio.h>
int main()
{
	FILE *file;
	char str[100];
	if(file=fopen("hello.txt","r"))
	{
		printf("%s",fgets(str,50,file));
	}
	else
	printf("Error!!!!");
	fclose(file);
	return 0;	
}
