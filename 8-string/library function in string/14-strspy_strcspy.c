//for length of string on the base of character on other string

//String function – Strspy
#include<stdio.h>
#include<string.h>

int main()
{
   //initializing char pointers
   const char *str1 = "Learn from trytoprogram.com";
   const char *str2 = "rtyn eaL ofm";

   //displaying both string 
   printf("str1 = %s\n\n", str1);
   printf("str2 = %s\n\n", str2);

   printf("Length of str1 consisting only characters "
          "from str2 = %d\n", strspn( str1, str2 ));

   return 0;

}


//String function – Strcspy
#include<stdio.h>
#include<string.h>

int main()
{
   //initialization of char pointers
   const char *str1 = "Learn from trytoprogram.com";
   const char *str2 = "yoyo";

   //displaying both strings
   printf("str1 = %s\n\n", str1);
   printf("str2 = %s\n\n", str2);

   printf("Length of str1 containing "
          "no character from str2 = %d\n", strcspn( str1, str2));

   return 0;
}
