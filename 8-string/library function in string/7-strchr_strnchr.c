//start the string at specific character 

#include <stdio.h>
#include <string.h>
int main()
{
     char s1[50] = "I’m an example of function strchr";
     printf ("%s", strchr(s1, 'f'));
     return 0;
}


//C String function – Strrchr
#include <stdio.h>
#include <string.h>
int main()
{
     char mystr[50] = "I’m an example of function strchr";
     printf ("%s", strrchr(mystr, 'f'));
     return 0;
}
