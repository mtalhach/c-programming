#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("Text.txt","w");
	if(fp==NULL)
	{
		printf("Some Error occured");
		return 0;
	}
	fputs("Hello My Name is Talha",fp);
	fclose(fp);
	printf("File open successfully!");
	return 0;
}
