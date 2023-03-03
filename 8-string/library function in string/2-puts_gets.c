//in gets() string continue at white spaces
//Read & Write Strings in C using gets() and puts() functions
#include <stdio.h>
#include <string.h>
int main()
{
    char nickname[20];
    puts("Enter your Nick name:");
    gets(nickname);
    puts(nickname);
    return 0;
}
