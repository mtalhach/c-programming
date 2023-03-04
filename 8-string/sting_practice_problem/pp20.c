//Write a program in C to replace the spaces of a string with a specific character
#include<stdio.h>
#include<ctype.h>

int main()
{
	char str[100];
	char ch;
	int i;       
    printf(" Input a string : ");
	fgets(str, sizeof str, stdin); 
    printf(" Input replace character : ");
	scanf("%c",&ch);
	printf(" After replacing the space with  %c the new string is :\n",ch);
	for(i=0;str[i]!='\0';i++)
	{
		if (isspace(str[i])) 
		str[i]=ch;
		putchar (str[i]);
	}
	return 0;
}
