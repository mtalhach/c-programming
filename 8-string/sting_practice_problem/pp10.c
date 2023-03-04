//Write a program in C to find maximum occurring character in a string. /find the highest frequency of character.
#include<stdio.h>
int main()
{
	char str[100];
	char ch;
	int count=0,i;
	
	printf("Enter the string:\n");
	fgets(str,sizeof(str),stdin);
	printf("Enter the character:\n");
	scanf("%c",&ch);
	for(i=0;str[i]!='\0';i++)
	{
		if(ch==str[i])
		count++;
	}
	printf("The Highest frequency of characte %c is %d",ch,count);
	
}
