//Write a program in C to count the number of punctuation characters exists in a string.
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int punc=0;
	printf("Enter the string:\n");
	fgets(str,sizeof str,stdin);
	
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		if(ispunct(str[i]))
		punc++;
	}
	printf("Total number of puctuation in a string is %d",punc);
	return 0;
}
