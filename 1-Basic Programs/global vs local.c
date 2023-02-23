#include<stdio.h>
int a;  //The Value of global variable is 0 
int main()
{
	int b;
	printf("Enter The Value: ");
	scanf("%d",&b);
	printf("The Result is: %d",a*b);
	return 0;
}







#include<stdio.h>
int a=100;  
int main()
{
	int a=500;
	printf("The value is: %d",a);
	return 0;
}







#include<stdio.h>
int a=100;    //Global variable
int main()
{
	int a=500;   //local variable
	{
		extern int a;   //if we want to use global variable
		printf("The value is: %d",a);
	}
	return 0;
}






#include<stdio.h>
int a=100;    //Global variable
int main()
{
	int b=500;   //local variable
	printf("The value of a is: %d\n",a);
	printf("The value of b is: %d",b);
	return 0;
}

