#include<stdio.h>
int main(){
    float miles_covered,gallons_used,i=1,miles_gallons,total=0;
    while(i>0)
    {
        printf("Enter number of gallons used  : ");
        scanf("%f",&gallons_used);
        {
            if (gallons_used == -1)
                break;
        }
        printf("Enter number of miles covered : ");
        scanf("%f",&miles_covered);
        miles_gallons = miles_covered/gallons_used;
        printf("The miles/gallons for this tank was %6.2lf\n",miles_gallons);
        total = total + miles_gallons;
        i++;
    }

        printf("The overall average miles/gallon was %6.2lf ",total);
}
