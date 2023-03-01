#include<stdio.h>
int calculatelen(char*);
int main()
{
	char str[100];
	printf("Input the string:\n");
	fgets(str, sizeof str,stdin);
	
	int l;
	l=calculatelen(str);
	printf("The length of string %s is |%d|",str,l-1);
	return 0;
}
int calculatelen(char *str)
{
	int i=0;
	while(*str!='\0')
	{
		str++;
		i++;
	}
	return i;
}

