//Write a program in C to find the number of times a given word 'the' appears in the given string.
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int t,h,e,spac;
	int freq=1,l,i;
	printf("Enter the string:\n");
	fgets(str,sizeof(str),stdin);
	l=strlen(str);
	
	for(i=0;i<=l-3;i++)
	{
		t=(str[i]=='t'||str[i]=='T');
		h=(str[i+1]=='h'||str[i+1]=='H');
		e=(str[i+2]=='e'||str[i+2]=='E');
		spac=(str[i+3]==' '||str[i+3]=='\0');
		if((t&&h&&e&&spac)==1)
		{
			freq++;
		}
	}
	printf("The frequency of |the| is %d",freq);
}

