//Write a program in C to count the total number of words in a string
#include <stdio.h>  
#include <stdlib.h>  
int main()
{
    char str[100];
    int i=0,word=1; 
    printf("Enter the string:\n");
    fgets(str,sizeof(str),stdin);
    while(str[i]!='\0')
    {
    	if(str[i]==' '||str[i]=='\n'||str[i]=='\t')
    	{
    		word++;
		}
		i++;
	}
	printf("The Total word in a string: %d",word-1);
	return 0;
}
