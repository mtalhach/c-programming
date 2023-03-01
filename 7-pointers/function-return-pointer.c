#include <stdio.h>
int* findLarger(int*, int*);
void main()
{
 	int n1,n2;
 	int *result;
    printf(" Input the first number : ");
    scanf("%d", &n1);
    printf(" Input the second  number : ");
    scanf("%d", &n2); 	

 	result=findLarger(&n1, &n2);
 	printf(" The number %d is larger.  \n\n",*result);
}

int* findLarger(int *n1, int *n2)
{
 if(*n1 > *n2)
  return n1;
 else
  return n2;
}
