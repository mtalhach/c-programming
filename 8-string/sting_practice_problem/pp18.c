//Write a program in C to check whether a character is Hexadecimal Digit or not.
#include<stdio.h>
 int main()
 {
 	char testchar;
 	printf("Enter the Character:\n");
 	scanf("%c",&testchar);
 	/*The word “Hexadecimal” means sixteen because this type of digital 
	 numbering system uses 16 different digits from 0-to-9, and A-to-F.*/
 	if(isxdigit(testchar))
 	{
 		printf("The entered character is haxadecimal digit");
	 }
	 else
	 {
	 	printf("The entered character is not a haxadecimal digit");
	 }
	 return 0;
 }
