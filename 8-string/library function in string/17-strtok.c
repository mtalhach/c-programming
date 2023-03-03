// It returns a pointer to the first character of a token or to a null pointer if there is no token.	

//C library function - strtok()
#include <string.h>
#include <stdio.h>

int main () {
   char s1[80] = "This is - www.tutorialspoint.com - website";
   char s2[2] = "-";
   char *token;
   //get the first token 
   token = strtok(s1, s2);
   //walk through other tokens 
   while( token != NULL ) {
      printf( " %s\n", token );
      token = strtok(NULL, s2);
   }
}
