#include<stdio.h>
struct person
{
	int age;
	char name[100];
};
int display(struct person s1);
int main()
{
	struct person s1;
	printf("Enter the name:\n");
	scanf("%[^\n]%*c", s1.name);
	printf("Enter the age:\n");
	scanf("%d",&s1.age);
	display(s1);
}
int display(struct person s1)
{
	printf("Displaying:\n");
	printf("Name:%s\tAge:%d",s1.name,s1.age);
	return 0;
}
