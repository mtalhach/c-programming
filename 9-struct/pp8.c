#include <stdio.h> 
#include <string.h>
typedef struct Book
{
   int ISSN;
   char title[100];
   char author[100];
   double price;
} Data;

int main()
{
   Data Book[10];
   int i,j;
   for(i=0;i<=2;i++)
   {
   	printf("\nEnter book %d ISSN:",i+1);
   	scanf("%d",&Book[i].ISSN);
   	for(j=0;j<i;j++)
   		{
   			if(Book[i].ISSN == Book[j].ISSN)
   			{
   				printf("\t\tISSN repeated Program terminated.\n");
   				break;
			}
		}	
   printf("Enter the Book title: ");
   scanf(" %[^\n]%*c", Book[i].title);
   printf("Enter the Author NAME: ");
   scanf(" %[^\n]%*c", Book[i].author);
   printf("Enter the PRICE: ");
   scanf("%lf", &Book[i].price);
   }
    int Issn;
    printf("Now enter an ISSN number to search:  ");
    scanf("%d",&Issn);
    
    for(i=0;i<=2;i++)
    {
    	if(Issn == Book[i].ISSN)
    	{
    		printf("\t----------Book Record Display\n"); 
   printf("ISSN: %d \t Book Name: %s \t Author Name: %s \t Rs. %.2lf", Book[i].ISSN, Book[i].title, Book[i].author, Book[i].price);
		}
	}
   
}
