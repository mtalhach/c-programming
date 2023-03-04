#include<stdio.h>
struct distance
{
	int feet;
	float inch;
}dist1,dist2,sum;
int main()
{
	printf("Enter the first distane:\n");
	printf("The feet is:\n");
	scanf("%d",&dist1.feet);
	printf("Enter the inch:\n");
	scanf("%f",&dist1.inch);
	
	printf("\nEnter the second distane:\n");
	printf("The feet is:\n");
	scanf("%d",&dist2.feet);
	printf("Enter the inch:\n");
	scanf("%f",&dist2.inch);
	
	sum.feet=dist1.feet+dist2.feet;
	sum.inch=dist1.inch+dist2.inch;
	while (sum.inch >= 12) 
    {
        ++sum.feet;
        sum.inch = sum.inch - 12;
    }
	
	printf("The feet is %d\n",sum.feet);
	printf("The inch is %.2f",sum.inch);	
}
