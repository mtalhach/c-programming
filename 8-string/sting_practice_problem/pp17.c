//Write a program in C to Concatenate Two Strings Manually.
#include <stdio.h>
#include <string.h>
int  main()
{
    char str1[100], str2[100], i, j,l1,l2,k;	
	printf("Input the first string :\n");
    fgets(str1,sizeof str1,stdin);
	
	printf("Input the second string :\n");
    fgets(str2,sizeof str2,stdin);
    
    l1=strlen(str1);
    l2=strlen(str2);
    
	for(i=0; i<l1-1; ++i);  
    str1[i]=' ';            
    i++;                  

    for(j=0; j<l2-1; ++j, ++i)
    {
        str1[i]=str2[j];
    }
     k=strlen(str1);   

    printf("After concatenation the string is : \n ");    
    for(i=0; i<k; ++i)    
    {
         printf("%c",str1[i]);
    }
return 0;
}

