//Write a program in C to copy One string to another using recursion.
#include<stdio.h>
int copystr(char str1[],char str2[],int ctr);
#define MAX 100
int main()
{
	char str1[MAX],str2[MAX];
	printf("\n-----Enter the string to copy:\n");
	scanf("%s",str1);
	copystr(str1,str2,0);
	printf("\n\n----The string 1 is: %s",str1);
	printf("\n----The string 2 is: %s",str2);
	return 0;
}
int copystr(char str1[],char str2[],int ctr)
{
	str2[ctr]=str1[ctr];
	if(str1[ctr]=='\0')
	{
		return 0;
	}
	copystr(str1,str2,ctr+1);
}
