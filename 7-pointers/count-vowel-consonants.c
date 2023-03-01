#include<stdio.h>
int main()
{
	char str[100];
	char *p=str;
	int vowel,consonant;
	vowel=0;
	consonant=0;
	
	printf("Input a string:\n");
	fgets(str,sizeof str,stdin);
	
	while(*p!='\0')
	{
		if(*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u'
		||*p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U')
		{
			vowel++;
		}
		else
		{
			consonant++;
		}
		p++;
	}
	printf("Vowels are:%d\tConsonant are:%d",vowel,consonant-1);
	return 0;
}
