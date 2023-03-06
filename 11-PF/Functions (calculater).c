#include <stdio.h>
#include <math.h>
/*prototype*/
float sum(int a,int b);
float subtract(int a,int b);
float multiplication(int a,int b);
float division(int a,int b);
float factorial(int x);
int power(int a,int b);
int prime(int x);
int main()
{
    int operation,x,y,i;

    printf("Press 1 for addition\t\tPress 2 for subtraction\nPress 3 for multiplication\tPress 4 for division\nPress 5 for Factorial\t\tPress 6 for Power\n\tPress 7 to check for Prime Number : \n\n");
    scanf("%d",&operation);
    switch(operation)
    {
    case 1:
          printf("\n\nEnter first nmbr  : ");
          scanf("%d",&x);
          printf("Enter second nmbr : ");
          scanf("%d",&y);
          printf("sum is %.2f\n",sum(x,y));
          break;

    {
    case 2:
          printf("\n\nEnter first nmbr  : ");
          scanf("%d",&x);
          printf("Enter second nmbr : ");
          scanf("%d",&y);
          printf("Subtraction is %.2f\n",subtract(x,y));
          break;
    }
    {
    case 3:
          printf("\n\nEnter first nmbr  : ");
          scanf("%d",&x);
          printf("Enter second nmbr : ");
          scanf("%d",&y);
          printf("Multiplication is %.2f\n",multiplication(x,y));
          break;
    }
    {
    case 4:
          printf("\n\nEnter first nmbr  : ");
          scanf("%d",&x);
          printf("Enter second nmbr : ");
          scanf("%d",&y);
          printf("Division is %.2f\n",division(x,y));
          break;
    }
    {
    case 5:
          printf("\n\nEnter any nmbr : ");
          scanf("%d",&x);
          printf("Factorial is %.1f\n",factorial(x));
          break;
    }
    {
    case 6:
        printf("\n\nEnter base     : ");
        scanf("%d",&x);
        printf("Enter exponent : ");
        scanf("%d",&y);
        printf("Power is %d\n",power(x,y));
        break;
    }
    {
    case 7:
        printf("\n\nEnter any number     : ");
        scanf("%d",&x);
        break;
    }
    default:
        printf("\n\nEnter a valid operation\n");
}
    return 0;
}
float sum(int a,int b)
{
    float sum = 0;
    sum = a + b;
    return sum;
}
float subtract(int a,int b)
{
    float subtract = 0;
    subtract = a - b;
    return subtract;
}
float multiplication(int a,int b)
{
    float multiplication = 0;
    multiplication = a * b;
    return multiplication;
}
float division(int a,int b)
{
    float division = 0;
    division = a / b;
    return division;
}
float factorial(int x)
{
    float factorial = 1,i;
    for(i=x;i>=1;i--)
    {
        factorial = factorial * i;
    }
    return factorial;
}
int power(int a,int b)
{
    int power = 1;
    for(b;b!=0;b--){
        power = power * a;
    }
    return power;
int prime(int x)
{
    int prime,i;
         if (x % i == 0)
            printf("The given nmbr is not a prime nmbr");
        else
            printf("The given number is prime");
      }
   }

