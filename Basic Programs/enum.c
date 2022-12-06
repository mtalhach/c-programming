#include<stdio.h>
enum days{mon=1,tue,wed,thu,fri,sat,sun};
int main()
{
	int n;
	enum days d;
	printf("Enter The Number(1-7): ");
	scanf("%d",&n);
	d=n;
	if(d==sat||d==sun){
		printf("Weekend");
	}
	else if(d==fri){
		printf("Half Day");
	}
	else if(d==tue||d==wed||d==thu){
		printf("Working Day");
	}
	else{
		printf("Enter The Correct number");
	}
	return 0;
}
