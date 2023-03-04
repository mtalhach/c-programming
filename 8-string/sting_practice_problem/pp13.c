//Write a program in C to extract a substring from a given string.
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],sstr[100];
	int i,pos,len;
	printf("Enter the string:\n");
	fgets(str,sizeof(str),stdin);
	
	printf("Enter the position of string:\n");
	scanf("%d",&pos);
	
	printf("Enter the length of string:\n");
	scanf("%d",&len);
	
	for(i=0;i<len;i++)
	{
		sstr[i]=str[pos+i-1];
	}
	printf("The new string is |%s|",sstr);
	
}
