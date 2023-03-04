//Write a program in C to read a sentence and replace lowercase characters by uppercase and vice-versa.
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int l,i,ch;
	printf("Enter the string:\n");
	fgets(str,sizeof(str),stdin);
	l=strlen(str);
	printf("String After conversion:\n");
	for(i=0;i<l;i++)
	{
		ch=islower(str[i])? toupper(str[i]): tolower(str[i]);
		putchar(ch);
	}
	return 0;
}

