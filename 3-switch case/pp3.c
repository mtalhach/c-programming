#include<stdio.h>
int main()
{
	int n1,n2,result,choice;
	while(choice!=3)
	{
		printf("\n\nchoose 1 for addition\n");
		printf("choose 2 for subtraction\n");
		printf("Enter Your choice (1-2): ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				printf("Enter The first number for addition: ");
				scanf("%d",&n1);
				printf("Enter The second number for addition: ");
				scanf("%d",&n2);
				result=n1+n2;
				printf("The Result of addition is: %d",result);
				break;
			case 2:
				printf("Enter The first number for subtraction: ");
				scanf("%d",&n1);
				printf("Enter The second number for subtraction: ");
				scanf("%d",&n2);
				result=n1-n2;
				printf("The Result of subtraction is: %d",result);
				break;
			default:
				printf("program terminated");
		}
	}
	return 0;
}
