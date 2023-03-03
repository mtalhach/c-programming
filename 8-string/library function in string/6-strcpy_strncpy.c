//copy the string
//C String function – strcpy
#include <stdio.h>
#include <string.h>
int main()
{
     char s1[15] = "Hello Talha";
     char s2[15];
     printf("%s",strcpy(s2,s1));
     return 0;
 }
#include <stdio.h>
#include <string.h>
int main()
{
     char s1[30] = "string 1";
     char s2[30] = "string 2 : I’m gonna copied into s1";
     //this function has copied s2 into s1
     strcpy(s1,s2);
     printf("String s1 is: %s", s1);
     return 0;
}
#include <stdio.h>
#include <string.h>
int main()
{
     char s1[30] = "Hello world";
     char s2[30];
     int s3;
     //this function has copied s2 into s1
     s3=strcpy(s2,s1);
     printf("String s1 is: %s", s3);
     return 0;
}



//C String function – strncpy
#include <stdio.h>
#include <string.h>
int main()
{
     char s1[50];
     char s2[50] ="My name is talha shafiq";
     //this function has copied first 12 chars of s2 into s1
     strncpy(s1,s2, 12);
     printf("String s1 is: %s", s1);
     return 0;
}
