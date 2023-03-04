#include<stdio.h>
struct person
{
	int age;
	char name[100];
};
struct person display();
int main()
{
	struct person s;
	s=display();
	printf("Displaying:\n");
	printf("Name:%s\tAge:%d",s.name,s.age);
}
struct person display()
{
	struct person s1;
	printf("Enter the name:\n");
	scanf("%[^\n]%*c", s1.name);
	printf("Enter the age:\n");
	scanf("%d",&s1.age);

	return s1;
}
