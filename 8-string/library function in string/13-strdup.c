//duplicate the string	

//String function – Strdup
#include<stdio.h>
#include<string.h>
int main()
{
	char *s1="Hello";
	char *s2;
	s2=strdup(s1);
	printf("The duplicate string is: %s",s2);
	return 0;
}
