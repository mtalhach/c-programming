#include<stdio.h>
int main()
{
	FILE *fp;
	char c;
	int vowel=0,consonant=0;
	fp=fopen("hello.txt","r");
	if(fp==NULL)
	{
		printf("File does not exists");
		return 0;
	}
	while(c!=EOF)
	{
		c=fgetc(fp);
		if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
		{
			if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
			  c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
			  vowel++;
			  else
			  consonant++;
		}
	}
	printf("Vowel: %d\t",vowel);
	printf("Consonant: %d",consonant);
	fclose(fp);
	return 0;
}
