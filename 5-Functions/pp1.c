//take something return something
#include<stdio.h>
int add(int,int,int);
int main()
{
	int x,y,z,s;
	printf("Enter the value:\n");
	scanf("%d%d%d",&x,&y,&z);
	s=add(x,y,z);
	printf("The sum is: %d",s);
	return 0;
}
int add(int a,int b,int c)
{
	int d=a+b+c;
	return d;
}

//OR
#include<stdio.h>
int function(int a,int b);
int main()
{
	int s;
	s=function(9,8);
	printf("The sum is: %d",s);
	return 0;
}
int function(int a,int b)
{
	int d=a+b;
	return d;
}


//OR
#include<stdio.h>
float square(float y);
int main()
{
	float s,x;
	printf("Enter the number: ");
	scanf("%f",&x);
	s=square(x);
	printf("The square is: %.2f",s);
	return 0;
}
float square(float y)
{
	return y*y;
}
