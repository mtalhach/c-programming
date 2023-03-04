#include<stdio.h>
typedef struct data
{
	char name[100];
	long long int number;
	float salery;
}person;
int main()
{
	 person p[100];
	 int i,n;
	 printf("How many person?\n");
	 scanf("%d",&n);
	 for(i=0;i<n;i++)
	{
		printf("\n\t\tEnter person %d data:\n",i+1);
		printf("Enter the name of person %d:\n",i+1);
		scanf("%s",p[i].name);
		printf("Enter the number of person %d:\n",i+1);
		scanf("%lld",&p[i].number);
		printf("Enter the person %d salery:\n",i+1);
		scanf("%f",&p[i].salery);
		printf("\n============================\n");
	}
	for(i=0;i<n;i++)
	printf("Person%d#\n  Name:%s  Number:%lld\n  Salery:%.2f\n",i+1,p[i].name,p[i].number,p[i].salery);
	
	return 0;
}
