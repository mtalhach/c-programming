//Write a program in C to find the first capital letter in a string using recursion.
#include<stdio.h>
#include<string.h>
char findcap(char*);
int main()
{
	char str[100],singlet;
	printf("Enter the string:\n");
	fgets(str,sizeof str,stdin);
	singlet=findcap(str);
	if(singlet==0)
	{
		printf("There is no capital letter in string");
	}
	else
	{
		printf("The first capital letter in |%s| is |%c|",str,singlet);
	}
	return 0;
}
char findcap(char *str)
{
	static int i=0;
		if(i<str[i])
		{
			if(isupper(str[i]))
			{
				return str[i];
			}
			else
			{
				i=i+1;
				return findcap(str);
			}
		}
		
	return 0;
}
