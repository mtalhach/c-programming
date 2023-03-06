#include<stdio.h>
int fibonacci(int x);

int main()
{
    int a;
    printf("Enter any positive integer :");
    scanf("%d",&a);
    printf("The fibonacci of %dth term is %d",a,fibonacci(a));
}
int fibonacci(int x)
{
    if (x==0 || x==1)
        return x;
    else
        return fibonacci(x-1) + fibonacci(x-2);
}
