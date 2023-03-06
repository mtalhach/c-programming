#include<stdio.h>
int power(int m, int n);
int main()
        {
        int num1;
        int num2;
        printf("Enter base: ");
        scanf("%d",&num1);
        printf("Enter exponent: ");
        scanf("%d",&num2);
        printf("power(%d*%d)=%d\n",num1,num2,power(num1,num2));
        return 0;
        }
        int power(int m, int n)
        {
        if(n == 0)
        return 1;
        else
        return m*power(m,n-1);
        }
