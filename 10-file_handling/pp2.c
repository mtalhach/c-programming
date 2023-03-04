#include <stdio.h>
int main()
{
   FILE * file;
   if (file = fopen("/home/ch/Desktop/programming/(9)File handling/hello.txt", "r"))
   {
      printf("Welcome Here");
   }
   else
   printf("Error!!!!!!!");
   fclose(file);
   return 0;
}

