// print first character of 2nd string present in 1st 

//String function – Strpbrk
#include<stdio.h>
#include<string.h>

int main()
{
   //initialization of char type pointer
   const char *str1 = "trytoprogram.com";
   const char *str2 = "hello";
   char *ret; //character type pointer

   printf("str1 = %s\n\nstr2 = %s\n\n", str1, str2);

   //pointer from function is stored in ret
   ret = *strpbrk( str1, str2 );

   printf("'%c' appears first in the string str1 from the string str2.\n", ret);

   return 0;
}
