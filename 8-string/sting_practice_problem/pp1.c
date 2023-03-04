//Write a program in C to input a string and print it.
#include <stdio.h>  
#include <stdlib.h>  
void main()
{
    char str[50];
    printf("\n\nAccept a string from keyboard :\n");	
    printf("Input the string : ");
    fgets(str, sizeof str, stdin);
    printf("The string you entered is : %s\n", str);
}

