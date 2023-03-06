#include<stdio.h>
void useLocal(void);
void useStaticLocal(void);
void useGlobal(void);
int x=1;                    /* Global Variable */
int main(void)
{
int x=5;
printf("local x in outer scope of main is %d\n",x);
{
int x=7;
printf("local x in inner variable of main is %d\n",x);
}
printf("local x in outer scope of main is %d\n",x);
useLocal();
useStaticLocal();
useGlobal();
useLocal();
useStaticLocal();
useGlobal();
printf("local x in main is %d\n",x);
return 0;
}
void useLocal(void)
{
int x=25;
printf("local x in use local is %d after entering use Local\n",x);
x++;
printf("local x in use local is %d before exiting use Local\n",x);
}
void useStaticLocal(void)
{
static int x=50;
printf("local static x is %d on entering use StaticLocal\n",x);
x++;
printf("local static x is %d on exiting use StaticLocal\n",x);
}
void useGlobal(void)
{
printf("global x is %d on entering use Global\n",x);
x*=10;
printf("global x is %d on exiting use Global\n",x);
}
