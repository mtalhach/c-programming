#include<stdio.h>
#include<stdlib.h>
FILE *fptr;
void ReadAndWelcome(){
    char name[30],gender;
    int age; 
    fscanf(fptr,"%s %c %d",&name,&gender,&age);
    if(gender=='m')
        printf("\n Welcome Mr. %s in the age of %d",name,age);
    else if(gender=='f')
        printf("Welcome Ms. %s in the age of %d",name,age);
    fclose(fptr);
}
void OpenFile(){
    fptr=fopen("First File.txt","r");
    if(fptr==NULL)
        printf("Error");
}
void main(){
    OpenFile();
    ReadAndWelcome();
}


