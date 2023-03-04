//Write a program in C to copy one string to another string.
#include<stdio.h>
int main()
{
	char str1[100];
	char str2[100];
	printf("Enter the str1:\n");
	fgets(str1,sizeof(str1),stdin);
	
	int i=0;
	while(str1[i]!='\0')
	{
		str2[i]=str1[i];
		i++;
	}
	printf("String 1 is:%s\n",str1);
	printf("String 2 is:%s\n",str2);
	printf("Total number of character copied is %d",i-1);	
}
