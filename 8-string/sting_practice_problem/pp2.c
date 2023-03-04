//Write a program in C to find the length of a string without using library function
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
    	l++;
	}
	printf("The length of string is %d",l-1);
	return 0;
}
