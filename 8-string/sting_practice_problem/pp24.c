//Write a C programming to convert vowels into upper case character in a given string.
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("Enter the string:\n");
	fgets(str,sizeof str,stdin);
	
	int i=0;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		str[i]=str[i]-32;
	}
	printf("After converting vowel into Upper case :%s",str);
}
