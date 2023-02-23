#include<stdio.h>
int main()
{
	int n1,n2;
	char oper;
	while(1)
	{
	printf("\n\nPlz Enter The operator (+,*,-,/): ");
	fflush(stdin);
	scanf("%c",&oper);
//	scanf("%[^\n]",&oper);
	printf("Plz Enter The numbers:\n");
	scanf("%d %d",&n1,&n2);
	
	switch(oper)
	{
		case '+':
			printf("The Sum of %d and %d is: %d",n1,n2,n1+n2);
			break;
		case '-':
			printf("The Subtraction of %d and %d is: %d",n1,n2,n1-n2);
			break;
		case '*':
			printf("The Multiplication of %d and %d is: %d",n1,n2,n1*n2);
			break;
		case '/':
			printf("The division of %d and %d is: %.2f",n1,n2,n1/(float)n2);
			break;
		default:
			printf("Program terminated");
	}
}
	return 0;
}
