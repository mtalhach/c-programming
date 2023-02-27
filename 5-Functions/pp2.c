#include<stdio.h>
double getarea(double radius);
double getcircumstance(double radius);
double getdiameter(double radius);
double pi=3.14;
int main()
{
	double area,circumstance,diameter,radius;
	printf("Enter the radius: ");
	scanf("%lf",&radius);
	
	area=getarea(radius);
	circumstance=getcircumstance(radius);
	diameter=getdiameter(radius);
	
	printf("The area is %.2lf\n",area);
	printf("The circumstance is %.2lf\n",circumstance);
	printf("The diameter is %.2lf\n",diameter);
}
double getarea(double radius)
{
	return (pi*radius*radius);
}
double getcircumstance(double radius)
{
	return (2*pi*radius);
}
double getdiameter(double radius)
{
	return (2*radius);
}
