//Write a C program to sort a string array in ascending order.
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i,j,l,temp;
	printf("Enter the string:\n");
	fgets(str,sizeof(str),stdin);
	l=strlen(str);
	
	for(i=1;i<l;i++)
		for(j=0;j<l-i;j++)
			if(str[j]>str[j+1])
			{
				temp=str[j];
				str[j]=str[j+1];
				str[j+1]=temp;
			}
	printf("The string in assending order is %s",str);
}
