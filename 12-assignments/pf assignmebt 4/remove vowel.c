#include<stdio.h>
int main()
{
	FILE *fp,*fp_w;
	char c;
	fp_w=fopen("nowreadme.txt","w");
	fp=fopen("readme.txt","r");
	if(fp==NULL)
	{
		printf("File does not exists");
		return 0;
	}
	c=fgetc(fp);
	while(c!=EOF)
		{
			if(!(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
			  c=='A'||c=='E'||c=='I'||c=='O'||c=='U'))
			  {
			  		fprintf(fp_w,"%c",c);
			  }
			  c=fgetc(fp);
		}
	printf("\n-----------File open successfully\n\n");
	fclose(fp);
	return 0;
}






