//Write a program in C to Check whether a given String is Palindrome or not.
#include<stdio.h>
#include<string.h>
#define MAX 100
int checkPalindrome(char wordPal[],int index);
int main()
{
	char wordPal[MAX];
	printf("\n\t-------------Enter the String:\n");
	scanf("%s",wordPal);
	checkPalindrome(wordPal,0);
	return 0;
}
int checkPalindrome(char wordPal[],int index)
{
	int len=strlen(wordPal)-(index+1);
	if(wordPal[index]==wordPal[len])
	{
		if(index+1==len||index==len)
		{
			printf("\n\t-------- The entered word is a palindrome.\n\n");
			return 0;
		}
		checkPalindrome(wordPal,index+1);
	}
	else
	{
		printf("The entered word is not a palindrome.\n\n");
	}
	
}

