//Write a program in C to print individual characters of string in reverse order.
#include <stdio.h>  
#include <stdlib.h>  
int main()
{
    char str[100];
    int l,i; 
    printf("Enter the string:\n");
    fgets(str,sizeof(str),stdin);
    l=strlen(str);
    for(i=l;i>=0;i--)
    {
    	printf("%c ",str[i]);
	}
	return 0;
}
