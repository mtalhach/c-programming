//convert the string into a specific character

//String function – Strset
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20]="Hello World";
	printf("After setting the string is: %s",strset(s1,'T'));
	return 0;
}


//String function – Strnset
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20]="Hello World";
	printf("After setting the string is: %s",strnset(s1,'T',3));
	return 0;
}
