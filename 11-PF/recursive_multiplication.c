#include<stdio.h>
#include<stdlib.h>
int multi(int x,int y);

int main()
{   int a,b;
    printf("Enter any two integers : \n");
    scanf("%d %d",&a,&b);
    printf("The product of %d and %d = %d",a,b,multi(a,b));

}
int multi(int x,int y)
{
    if (y==1)
    return x;
    else
    return x + multi(x,y-1);
}
