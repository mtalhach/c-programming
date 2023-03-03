//start the string at specific characte

//Use of string library function memchr
#include <stdio.h>
#include <string.h>
int main () {
   char s1[] = "http://www.tutorialspoint.com";
   char ch = '.';
   char *ret;

   ret = memchr(s1, ch, strlen(s1));

   printf("String after |%c| is : |%s|\n", ch, ret);

   return(0);
}
