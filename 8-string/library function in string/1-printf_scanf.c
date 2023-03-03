//Read & write Strings in C using Printf() and Scanf() functions
//in scanf() string break at white spaces
#include <stdio.h>
#include <string.h>
int main()
{
    char nickname[20];
    printf("Enter your Nick name:");
    scanf("%s", nickname);
    printf("%s",nickname);
    return 0;
}
