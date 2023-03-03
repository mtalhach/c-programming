//length of string

//C String function – strlen
#include <stdio.h>
#include <string.h>
int main()
{
     char str1[20] = "BeginnersBook";
     printf("Length of string str1: %d", strlen(str1));
     return 0;
}



//C String function – strnlen
#include <stdio.h>
#include <string.h>
int main()
{
     char str1[20] = "BeginnersBook";
     printf("Length of string str1 when maxlen is 30: %d\n\n", strnlen(str1, 30));
     printf("Length of string str1 when maxlen is 5: %d", strnlen(str1, 5));
     return 0;
}
