/*A recursive function is said to be non tail recursive if the recursive call is not the last thing 
done by the function.after recursive there is something left to evaluate*/
#include<stdio.h>
int fun(int n);
int main()
{
	fun(3);
	return 0;
}
int fun(int n)
{
	if(n==0)
	return 0;
	else
	fun(n-1);
	printf("%d ",n);
}


#include<stdio.h>
int fun(int n);
int main()
{
	printf("%d",fun(8));
	return 0;
}
int fun(int n)
{
	if(n==1)
	return 0;
	else
	return 1+fun(n/2);
}
