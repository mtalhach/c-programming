#include<stdio.h>
int main()
{
	int number=5;
	switch(number)
	{
		case 1:
		case 2:
		case 3:
		printf("one two three");
		break;
		
		case 4:
		case 5:
		case 6:
		printf("four five six");
		break;
		
		default:
		printf("Default value");	
	}
	return 0;
}
