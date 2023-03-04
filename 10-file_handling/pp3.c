#include<stdio.h>
int main()
{
	FILE *file;
	if(file=fopen("Text.txt","w"))
	{
		printf("Welcome");
	}
	else
	printf("Error!!!!");
	fclose(file);
	return 0;
}
