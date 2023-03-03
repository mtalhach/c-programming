//concatenate mean combine the string

//C String function – strcat
#include <stdio.h>
#include <string.h>
int main()
{
     char s1[10] = "Hello";
     char s2[10] = "World";
     strcat(s1,s2);
     printf("Output string after concatenation: %s", s1);
     //or printf("Output string after concatenation: %s",strcat(s1,s2));
     return 0;
}


//C String function – strncat
#include <stdio.h>
#include <string.h>
int main()
{
     char s1[10] = "Hello";
     char s2[10] = "World";
     strncat(s1,s2, 3);
     printf("Concatenation using strncat: %s", s1);
     return 0;
}
