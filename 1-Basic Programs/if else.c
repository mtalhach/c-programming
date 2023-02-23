#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter The Value of a: ");
	scanf("%d",&a);
	printf("Enter The Value of b: ");
	scanf("%d",&b);
	printf("Enter The Value of c: ");
	scanf("%d",&c);
	
	if(a>b && a>c){
		printf("a is greater");
	}
	if(b>a && b>c){
		printf("b is greater");
	}
	if(c>a && c>b){
		printf("c is greater");
	}
	return 0;
}





#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter The Value of a: ");
	scanf("%d",&a);
	printf("Enter The Value of b: ");
	scanf("%d",&b);
	printf("Enter The Value of c: ");
	scanf("%d",&c);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("a is greater");
		}
	}
	else
	{
		if(b>c)
		{
			printf("b is greater");	
		}
		else
		{
			printf("c is greater");	
		}	
	}
	return 0;
}




#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter The Value of a: ");
	scanf("%d",&a);
	
	if(a>0){
		printf("a is positive");
	}
	else if(a<0){
		printf("a is negative");
	}
	else{
		printf("a is zero");
	}
	return 0;
}
