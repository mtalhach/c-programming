#include<stdio.h>
int main()
{
	FILE *fp;
	char c;
	fp=fopen("hello.txt","r");
	if(fp==NULL)
	{
		printf("File does not exists");
		return 0;
	}
	while((c=fgetc(fp))!=EOF)
	{
		printf("%c",c);
	}
	fclose(fp);
	return 0;
}

