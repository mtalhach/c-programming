//copy the string

//Use of string library function memcpy
#include<stdio.h>
#include<string.h>

int main()
{
   //declaring and initializing character array
   char str1[ 50 ];
   char str2[50] = "Learn C from trytoprogram.com";

   //displaying str1 and str2
   printf("str1 = %s\n", str1);
   printf("str2 = %s\n", str2);

   memcpy(str1, str2, strlen(str2) + 1);

   printf("\nAfter copying str2 into str1 using memcpy\n"
          "\nstr1 = %s\n", str1);

   return 0;
}
