//display the n terms of harmonic series and their sum 
//1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms

#include <stdio.h>
int main()
{
	int i,n;
	float sum=1.0;
	printf("Enter the size of series: ");
	scanf("%d",&n);
	printf("1+ ");
	for(i=2;i<=n;i++)
	{
		if(i<n)
		{
		printf("1/%d+ ",i);
		sum +=1/(float)i;
		}
		if(i==n)
		{
		printf("1/%d",i);
		sum +=1/(float)i;	
		}
	}
	printf("\nThe sum of series is: %.2f",sum);
	return 0;
}

