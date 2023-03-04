//Write a program in C to compare two strings without using string library functions.
#include <stdio.h> 
int test(char*, char*);
int main()
{
char str1[100], str2[100];
   int flg;
   printf("\nInput the 1st string : ");
   fgets(str1, sizeof str1, stdin);
   printf("Input the 2nd string : ");
   fgets(str2, sizeof str2, stdin);          
   printf("\nString1: %s", str1);
   printf("String2: %s", str2);
   flg = test(str1, str2);
    if(flg == 0)
   {
       printf("\nStrings are equal.\n");
   }
   else if(flg == 1)
   {
      printf("\nStrings are not equal.");
   }
         return 0;
}
int test(char* s1, char* s2)
{
         int flag;
         while (*s1 != '\0' || *s2 != '\0') 
	{
         	if (*s1 == *s2) 
			 {
            	s1++;
            	s2++;
            	flag=0;
             }
        else if (*s1 != *s2) 
		{
                flag = 1;
                break;
        }
    }
  return flag;
}
