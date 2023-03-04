#include<stdio.h>
int main()
{
	FILE *file;
	char str[100];
	if(file=fopen("hello.txt","r"))
	{
		while(fscanf(file,"%s",str)!=EOF)
		{
			printf("%s",str);
		}
	}
	else
	printf("Error!!!!!!");
	fclose(file);
	return 0;
}
