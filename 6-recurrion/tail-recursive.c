/*A recursive function is said to be tail recursive if the recursive call i sthe last thing done by the
function.there is no need to take record of previous function*/
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
	printf("%d ",n);
	return fun(n-1);
}
