#include<stdio.h>
int main()
{
    FILE *fptr;
    char name[30],gender;
    int age;  
    fptr=fopen("Text.txt","r");
    if(fptr==NULL)
        printf("Error");
    else{
        fscanf(fptr,"%s %c %d",&name,&gender,&age);
        if(gender=='m')
            printf("Welcome Mr. %s in the age of %d.",name,age);
        else if(gender=='f')
            printf("Welcome Ms. %s in the age of %d.",name,age);
        fclose(fptr);
    }
    return 0;
}
