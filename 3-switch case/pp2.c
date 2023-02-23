#include<stdio.h>
int main()
{
	char ch='B';
	switch(ch)
	{
		case 'A':
			printf("A");
		break;
		
		case 'b':
			printf("b");
		break;
		
		case 'B':
			printf("B");
		break;
		
		case 'Z':
			printf("Z");
		break;
		
		default:
		printf("Default value");	
	}
	return 0;
}
