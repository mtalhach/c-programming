#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
int i, j, p[100], o[100], n, a=1, b=0;
double sum=0.00;
printf("\nEnter value of n to find sum of series (1-100): ");
scanf("%d", &n);
p[0]=1; //according to condition first number in series is 1
for(i=3; a<n; i++) //find prime (2 is excluded)
{
for (j=2; j<=i; j++) //exclude non-prime
if (i%j == 0) //if rem=0, i is not prime
break;
if (i == j)
{
p[a]=i; //storing prime num in array
a++; //here 'a' tells how many prime num needed
}
}
for (i=1; b<n; i+=2) //find odd
{
o[b]=i;
b++;
}
for (i=0; i<n; i++) //calculate sum
sum+= pow(p[i],2)/pow(o[i],3);
printf("\n-------------------------------------------------\n");
printf(" Sum of given series upto '%d' terms is: %lf", n, sum);
printf("\n-------------------------------------------------\n");
printf("\nSeries is: \n = 1");
for (i=1; i<n; i++) //print series
printf(" + (%d^2/%d^3)", p[i], o[i]);
printf("\n");
getch(); //to make output stay on screen
return 0;
}














