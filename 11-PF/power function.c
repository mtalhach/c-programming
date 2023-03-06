#include<stdio.h>
int power(int b,int p)
{
    int power = 1;
    for(p;p!=0;p--)
    {
        power = power * b;
    }
    printf("%d",power);
}
int main()
{
    int x,y;
    printf("Enter base  :");
    scanf("%d",&x);
    printf("Enter power :");
    scanf("%d",&y);
    power(x,y);
}
