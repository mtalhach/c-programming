#include<stdio.h>
int main()
{
	int n;
	printf("Enter The Number: ");
	scanf("%d",&n);
	printf("The ASCII Value of %d is %c",n,n);
	return 0;	
}




#include<stdio.h>
int main()
{
	char c;
	printf("Enter The Character: ");
	scanf("%c",&c);
	printf("The ASCII Value of %c is %d",c,c);
	return 0;	
}






#include<stdio.h>
int main()
{
	int i;
	for(i=0;i<255;i++){
		printf("%d=%c\t",i,i);
	}
	return 0;	
}
