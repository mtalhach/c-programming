#include<stdio.h>
int main()
{
int i,no,j=3;
float total=0;
printf("enter n number of series\n");
scanf("%d",&no);
for(i=1;i<=no;i=i+2)
{
	total=total+((i/j)-(i+1/j+3));
	j=j+3;
}
printf("%.2f\n",total);
if(total>=0)
{
	printf("\npositive sum\n");
}
else
{
	printf("Negative sum");
}
return 0;
}
