#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("Text.txt","w");
	int a=5,b=7;
	fprintf(fp,"SUM:%d",a+b);
	fclose(fp);
	return 0;
}
