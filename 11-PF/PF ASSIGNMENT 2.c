#include<stdio.h>
int printbook(int *a);//function for printing book codes
int sortbooks(int *a);//function for sorting out book codes
int searchbook(int *a);//function for searching a book code
int main()
{
int bookcode[20]={0,10,20,30,40,50,60,70,80,90,100,110,120,130,140,150,160,170,180,190};
int choice,i;// initialization
repeat:
printf("To Add book code\t:\tPress 1\n");
printf("To Display book code\t:\tPress 2\n");
printf("To Delete book code\t:\tPress 3\n");
printf("To Search book code\t:\tPress 4\n");
printf("To Arrange book code\t:\tPress 5\n");
printf("To Exit\t\t\t:\tPress 6\n\n");

scanf("%d",&choice);//Reads the choice made by user

switch(choice)
{
case 1:
{
int add_code,flag=0;
printbook(bookcode);//calling printing function
printf("\nEnter the additional Book code you want to add:");
scanf("%d",&add_code);//read the book code to be added
for(i=0 ; i<20 ; i++)
{
if(bookcode[i]==0)//book code in the list=0
{
flag=1;
break;
}
}
if (flag==1)//book code in the list=1
{
bookcode[i]=add_code;
printf("\nSee!Book code is now added in the book list\n");
printbook(bookcode);//calling printing function
}
else
printf("\nNo space available in the list\n");
{
printbook(bookcode);//calling printing function
}
break;

}
case 2:
{
printbook(bookcode);//calling printing function
break;
}
case 3:
{

printbook(bookcode);//calling printing function
int delete_code,_flag=0;
printf("Enter the Book code you want to delete:");
scanf("%d",&delete_code);
for(i=0 ; i<20 ; i++)
{
if(delete_code==bookcode[i])// user input book code=book code in the list
{
_flag=1;
break;
}
}
if(_flag==1)//user input value=book code in the list
{
bookcode[i]=0;
printf("\nSee!%d Book code is now deleted from the book list\n\nNew List:\n",delete_code);
printbook(bookcode);//calling printing function
}
break;
}
case 4:
{
searchbook(bookcode);//calling search function
break;
}
case 5:
{
sortbooks(bookcode);//calling sorting function
break;
}
case 6:
{
return 0; //if user presses 6 then end
}

}
goto repeat;//again to the repeat that is declared in the main
}


int printbook(int * a)//function for printing book list on screen
{
int x;
for(x=0 ; x<20 ; x++)
{
printf("Book(%d)=%d\n",x,a[x]);
}
}
int sortbooks(int *a)//function to sort books in ascending order
{

int x,j,hold;//declare integers to use in loop for(x=0 ; x<20 ; x++)
{
for(j=x+1 ; j<20 ; j++)
{
if(a[x]>a[j])
{
hold=a[x];
a[x]=a[j];//replace the value of a[x] with a[j]
a[j]=hold;//replace the value of a[j] with a[x]
}
}
}
for(x=0 ; x<20 ; x++)
{
printf("%d\n",a[x]);
}

}

int searchbook(int *a)//function to search book code in the list
{
int search,x,flag;
printf("Enter the book code you want to search:");
scanf("%d",&search);//read the search book code that user enter
flag=0;
for(x=0 ; x<20 ; x++)
{
if(a[x]==search)//book code=user searched book code
{
flag=1;
break;
}
}
if(flag==1)
printf("\t\tBook found\n");
else
printf("\t\tBook not found\n");
}
