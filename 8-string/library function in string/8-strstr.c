//start the string from other string

//C String function – Strstr
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[50]="Learn C from trytoprogram.com";
	char s2[50]="top";
	
	printf("%s",strstr(s1,s2));
	return 0;
}
