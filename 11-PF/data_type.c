#include<stdio.h>
int main()
{
int i = 10;
char c= 'A';
double f = 25.5;
int *iptr = &i;
char *cptr = &c;
printf("i = %d\n", i);
printf("Address of i = %p\n", &i);
printf("iptr = %d\n", iptr);
printf("Address of iptr = %p\n", &iptr);
printf("Dereferenced value for iptr = %d\n", *iptr);
printf("Size of iptr = %d\n", sizeof(iptr));
printf("Size of i = %d\n", sizeof(i));
printf("\n");
printf("c = %c\n",c);
printf("Address of c = %p\n", c);
printf("cptr = %d\n", cptr);
printf("Address of cptr = %p\n", cptr);
printf("Dereferenced value for cptr = %c\n",*cptr);
printf("Size of cptr = %d\n", sizeof(cptr));
printf("Size of c = %d\n", sizeof(c));
printf("\n");
}
