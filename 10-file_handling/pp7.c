#include<stdio.h>
int main()
{
	FILE *fp;
	int rollno,marks,choice;
	char name[100];
	fp=fopen("Text.txt","w");
	if(fp==NULL)
	{
		printf("Some Error occured");
		return 0;
	}
	while(1)
	{
	fflush(stdin);
	printf("Enter the Name\n");
	fgets(name,sizeof name,stdin);
	fprintf(fp,"Name:%s",name);
	printf("Enter the Roll No\n");
	scanf("%d",&rollno);
	fprintf(fp,"Roll No:%d\t",rollno);
	printf("Enter the Marks\n");
	scanf("%d",&marks);
	fprintf(fp,"Marks:%d\n\n",marks);
	printf("Enter your choice 1 for data 2 for return\n");
	scanf("%d",&choice);
	if(choice==2)
	break;
	}
	printf("File open successfully!");
	return 0;
}
