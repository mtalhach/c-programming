//Write a program in C to print only the string before new line character.
#include<stdio.h>
#include<string.h>
int main()
{
	char str[]=" The quick brown fox \n jumps over the \n lazy dog. \n";
	int i;	
	for (i=0;isprint(str[i]);i++)
	{
		putchar (str[i]);
	}
	return 0;
}
