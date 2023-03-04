#include <stdio.h>
int main(){
    FILE *fptr;
    char name[30], gender;
    int age;  
    fptr = fopen("Text.txt","w");
    if(fptr == NULL)
        printf("Error");
    else{
        printf("Enter name ");
        fgets(name,sizeof name,stdin);
        printf("Enter gender m=male f=female ");
        scanf("%c",&gender);
        printf("Enter age ");
        scanf("%d",&age);
        fprintf(fptr,"%s %c %d",name,gender,age);
        fputs(" Thanks", fptr);
        fclose(fptr);
    }
    return 0;
}
