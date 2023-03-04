#include<stdio.h>
struct data
{
	int age;
	float weight;
};
int main()
{
	struct data *p,person;
	p=&person;
	
	printf("Enter the age:\n");
	scanf("%d",&p->age);
	
	printf("Enter the weight:\n");
	scanf("%f",&p->weight);
	
	printf("Age:%d\t Weight:%.2f",p->age,p->weight);
}
