#include<stdio.h>
int main()
{
	FILE *fp;
	char buff[255];
	fp=fopen("hello.txt","r");
	if(fp==NULL)
	{
		printf("File does not exists");
		return 0;
	}
	fscanf(fp,"%s",buff);
	{
		printf("%s",buff);
	}
	fclose(fp);
	return 0;		
}
