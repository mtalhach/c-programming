#include<stdio.h>
int main()
{
    int i;
    int arr[5]={0};
    for(i=0;i<5;i++)
    {
        printf("Enter Value:");
        scanf("%d",&arr[i]);
    }
    printf("\n");
    if(arr[0]==arr[5-1]&&arr[1]==arr[5-2]&&arr[2]==arr[5-3])
        printf("Yes ,it is a palindrome");
    else
        printf("No, it is a palindrome\n");
    return 0;
}
