//Write a program in C to count total number of alphabets, digits and special characters in a string.
#include<stdio.h>
int main()
{
	char str[100];
	int alp,dig,spchar,i;
	alp=0,dig=0,spchar=0;
	printf("Enter the string:\n");
	fgets(str,sizeof(str),stdin);
	
	i=0;
	while(str[i]!='\0')
	{
		if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
		{
			alp++;
		}
		else if(str[i]>='0'&&str[i]<='9')
		{
			dig++;
		}
		else 
		{
			spchar++;
		}
		i++;
	}
	printf("Alphabet is: %d\n",alp);
	printf("Digit is: %d\n",dig);
	printf("Special char is :%d",spchar);
	return 0;
}
