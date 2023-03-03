//compare the string
//C String function – strcmp
#include <stdio.h>
#include <string.h>
int main()
{
     char s1[20] = "BeginnersBook";
     char s2[20] = "BeginnersBook.COM";
     if (strcmp(s1, s2) ==0)
     {
        printf("string 1 and string 2 are equal");
     }else
      {
         printf("string 1 and 2 are different");
      }
     return 0;
}


//C String function – strncmp
#include <stdio.h>
#include <string.h>
int main()
{
     char s1[20] = "BeginnersBook";
     char s2[20] = "BeginnersBook.COM";
    //below it is comparing first 8 characters of s1 and s2
     if (strncmp(s1, s2, 8) ==0)
     {
         printf("string 1 and string 2 are equal");
     }else
     {
         printf("string 1 and 2 are different");
     }
     return 0;
}
