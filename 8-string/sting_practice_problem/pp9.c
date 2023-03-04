//Write a program in C to count total number of vowel or consonant in a string.
#include<stdio.h>
int main()
{
	char str[100];
	int vowel,consonent;
	vowel=0,consonent=0;
	printf("Enter the string:\n");
	fgets(str,sizeof(str),stdin);
	
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
		str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		{
			vowel++;
		}
		else if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
		{
			consonent++;
		}
		i++;
	}
	printf("The Total Vowel in a string is: %d\n",vowel);
	printf("The Total consonent in a string is: %d\n",consonent);
	
	return 0;
}
