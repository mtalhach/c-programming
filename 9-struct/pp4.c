#include<stdio.h>
struct person
{
	int age;
	float weight;
	char name[100];
};
int main()
{
	struct person *p;
	int i,n;
	printf("Enter the Number:\n");
	scanf("%d",&n);
	p=(struct person*)malloc(n*sizeof(struct person));
	
	for(i=0;i<n;i++)
	{
		printf("Enter name and age:\n");
		scanf("%s %d",(p+i)->name,&(p+i)->age);
	}
	printf("================================\n");
	for(i=0;i<n;i++)
	{
		printf("Name:%s\tAge:%d\n",(p+i)->name,(p+i)->age);
	}
}
