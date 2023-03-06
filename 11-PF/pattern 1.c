#include<stdio.h>
int main(){
    int i,j,k,height;
    printf("Enter height : ");
    scanf("%d",&height);
    for(i=0;i<=height;i++)
    {
        for(j=height;j>i;j--)
        {
            printf(" ");
        }
        for(k=0;k<=i;k++)
        {
            printf("* ");
        }
    printf("\n");
    }
}
