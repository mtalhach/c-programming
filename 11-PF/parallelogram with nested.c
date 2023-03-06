#include<stdio.h>
int main(){
    int i,j,k,nmbr;
    printf("Enter ant nmbr : ");
    scanf("%d",&nmbr);

    for(i=0;i<=nmbr;i++)
    {
        for(j=nmbr;j>i;j--)
        {
            printf(" ");
        }
        for(k=0;k<=nmbr;k++)
        {
                printf("* ");
        }
    printf("\n");
    }
}
