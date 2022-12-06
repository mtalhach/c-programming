#include<stdio.h>
int main()
{
	int a=5;
	int b=6;
	int result;
	result=(a>b)?a:b;
	printf("The Greater is: %d",result);
	return 0;
}









// C pgogram to demonstratre the use of bitwise operator
#include<stdio.h>
int main()
{
	// a=00000101      b=00001001
	int a=5,b=9;
	printf("a= %d\tb= %d\n",a,b);
	
	//The result is 00000001 bcz in AND operator the condition is '1' if both variable are '1'
	printf("a&b= %d\n",a&b);
	
	//The result is 00001101 bcz in OR operator the condition in '1' if in both one varibale is '1'
	printf("a|b= %d\n",a|b);
	
	//The result is 00001100 bcz in EXOR only same values is equal to 0
	printf("a^b= %d\n",a^b);
	
	//The result is 11111010 bcz in NOT operator we change 1 to 0 and 0 to 1
	printf("~a= %d\n",~a);
	
	//The result is 00010010 Shift to left
	printf("b<<1= %d\n",b<<1);
	//The result is 00000100 Shift to right
	printf("b>>1= %d\n",b>>1);
}






#include<stdio.h>
int main()
{
	int a=5;
	a++;  //post increment
	printf("a= %d\n",a);
	++a;  //pre increment
	printf("a= %d\n",a);
	a--;  //post decrement
	printf("a= %d\n",a);
	--a;  // pre decrement
	printf("a= %d",a);
	return 0;
}







#include<stdio.h>
int main()
{
	int a=5;
	a=a++;  //post increment
	printf("a= %d\n",a);
	a=++a;  //pre increment
	printf("a= %d\n",a);
	a=a--;  //post decrement
	printf("a= %d\n",a);
	a=--a;  // pre decrement
	printf("a= %d",a);
	return 0;
}







#include<stdio.h>
int main()
{
	int a=7;
	int b;
	b=a++;
	printf("a= %d\tb= %d\n\n",a,b);
	b=++a;
	printf("a= %d\tb= %d\n\n",a,b);
}





#include<stdio.h>
int main()
{
	int i;
	char ch;
	float f;
	double d;
	
	printf("integer size: %d\n",sizeof(i));
	printf("char size: %d\n",sizeof(ch));
	printf("float size: %d\n",sizeof(f));
	printf("double size: %d\n",sizeof(d));
}

