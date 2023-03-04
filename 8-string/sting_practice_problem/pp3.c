//Write a program in C to separate the individual characters from a string.
#include <stdio.h>  
#include <stdlib.h>  
int main()
{
    char str[100];
    int l=0; 
    printf("Enter the string:\n");
    fgets(str,sizeof(str),stdin);
    while(str[l]!='\0')
    {
    	printf("%c ",str[l]);
    	l++;
	}
	
	return 0;
}
