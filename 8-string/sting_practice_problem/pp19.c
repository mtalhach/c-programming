//Write a program in C to check whether a letter is uppercase or not
#include<stdio.h>
 int main()
 {
 	char testchar;
 	printf("Enter the Character:\n");
 	scanf("%c",&testchar);
 	if(isupper(testchar))
 	{
 		printf("The entered character is Upper case");
	 }
	 else
	 {
	 	printf("The entered character is not a Upper case");
	 }
	 return 0;
 }

