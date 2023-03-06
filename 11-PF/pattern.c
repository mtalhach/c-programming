#include<stdio.h>
int main()
        {
        int x,y,z;
        x=0,y=0,z=0;
        while(x<5)
        {
        printf("*");
        x++;
        }
        printf("\n");
        for(z=0;z<4;z++)
        {
        printf("*");
        while(y<3)
        {
            printf(" ");
            printf("*");
            printf("\n");
            y++;
        }
        }
        return 0;
        }
