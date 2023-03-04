//Write a program in C to read a string through keyboard and sort it using bubble sort.
#include<stdio.h>
#include<string.h>
int main()
{
	char str[15][15],temp[15];
	int n,i,j;
	
	printf("Enter the size of string\n");
	scanf("%d",&n);
	printf("The strings are:\n");
	for(i=0;i<=n;i++)
	{
		fgets(str[i],sizeof(str),stdin);
	}
	
	for(i=1;i<=n;i++)
	for(j=0;j<=n-i;j++)
	{
		if(strcmp(str[j],str[j+1])>0)
		{
			strcpy(temp,str[j]);
			strcpy(str[j],str[j+1]);
			strcpy(str[j+1],temp);
		}
	}
	printf("The String after sorting");
	for(i=0;i<=n;i++)
	{
		printf("  %s",str[i]);
	}
}
