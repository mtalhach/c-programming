//Write a program in C to check whether a character is digit or not.
#include<stdio.h>
#include<string.h>
int main()
{
	char testchar;
	printf("Enter the character:\n");
	scanf("%c",&testchar);
	if(isdigit(testchar))
	{
		printf("The character is a digit");
	}
	else
	{
		printf("The character is not a digit");
	}
}
