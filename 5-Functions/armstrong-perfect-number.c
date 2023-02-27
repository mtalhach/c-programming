//Write a program in C to check armstrong and perfect numbers using the function.
#include <stdio.h>
int checkArmstrong(int n1);
int checkPerfect(int n1);
int main()
{
    int n1; 
    printf(" Input any number: ");
    scanf("%d", &n1);
    //Calls the isArmstrong() function
    if(checkArmstrong(n1))
    {
        printf(" The %d is an Armstrong number.\n", n1);
    }
    else
    {
        printf(" The %d is not an Armstrong number.\n", n1);
    }
    //Calls the checkPerfect() function
    if(checkPerfect(n1))
    {
        printf(" The %d is a Perfect number.\n\n", n1);
    }
    else
    {
        printf(" The %d is not a Perfect number.\n\n", n1);
    }
    return 0;
}

//Armstrong mean the cube power of each disgit is equal to orignal value
//1(cube)+5(cuube)+3(cube)=153 is a armstrong number
int checkArmstrong(int n1) 
{
    int ld, sum,num;
    sum = 0;
    num=n1;
    while(num!=0)  
    {  
        ld = num% 10;  // find the last digit of the number 
        sum += ld * ld * ld;  //calculate the cube of the last digit and adds to sum
        num = num/10;  
    }
    return (n1 == sum);
}
//the sum of its positive divisors excluding the number itself 
//28=the divisor is 1,2,4,7,14 the sum is 28
int checkPerfect(int n1) 
{
    int i, sum,num;
    sum = 0;
    num=n1;
    for(i=1; i<num; i++)  
    {  
        //If i is a divisor of n1 
        if(num%i == 0)  
        {  
            sum += i;  
        }  
    }
    return (n1 == sum);
}
