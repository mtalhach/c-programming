//Write a program in C to reverse a string using recursion.
#include<stdio.h>
char* reversestring(char str[]);
#define MAX 100
int main()
{
	char str[MAX],*revstr;
	printf("\n\t-------------Enter the String:  ");
	scanf("%[^\n]%*c",str);
	revstr=reversestring(str);
	printf("\n\t----------------The Reverse string is: %s",revstr);
	return 0;
}
char* reversestring(char str[])
{
	static int i=0;
	static char reverse[MAX];
	if(*str)
	{
		reversestring(str+1);
		reverse[i++]=*str;
	}
	return reverse;
}
