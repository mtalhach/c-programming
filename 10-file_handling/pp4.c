#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("Text.txt","w");
	fputc('M',fp);
	fclose(fp);
	printf("File open successfully");
	return 0;
}
