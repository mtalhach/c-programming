#include<stdio.h>
int price[10],quantity[10],subtotal[10];
void takeprice();
void takequantity();
void takesubtotal();
void takeTotal();
void takediscount();
void grandtotal();
int main()
{
	takeprice();
	takequantity();
	takesubtotal();
	takeTotal();
	takediscount();
	grandtotal();
	return 0;
}
void takeprice()
{
	int i;
	printf("If the price are as\n");
	for(i=0;i<5;i++)
	{
				
		printf("item %d: ",i+1);
		scanf("%d",&price[i]);	
	}
}
void takequantity()
{
	int i;
	printf("\nIf the quantity are as\n");
	for(i=0;i<5;i++)
	{
				
		printf("item %d: ",i+1);
		scanf("%d",&quantity[i]);	
	}
}
void takesubtotal()
{
	int i;
	printf("\nThey should have print\n");
	printf("item\t\tprice\t\tquantity\t\tsubtotal\n");
	for(i=0;i<5;i++)
	{
		subtotal[i]=price[i]*quantity[i];
		printf("item %d:\t\t%d\t\t%d\t\t\t%d\n",i+1,price[i],quantity[i],subtotal[i]);	
	}
}
void takeTotal()
{
	int Total=0,i;
	for(i=0;i<5;i++)
	{
	Total=Total+subtotal[i];
	}	
	printf("_________________________________________________");
	printf("\nTotal\t\t\t\t\t\t\t%d",Total);
}
void takediscount()
{
	int total,discount;
	if(total>1000)
	{
		discount=total*0.1;
		printf("\nDiscount  10percent\t\t\t\t\t%d\n",discount);
		printf("_________________________________________________");
	}
}
void grandtotal()
{
	int grandtotal,Total,discount;
	grandtotal=Total-discount;
	printf("\nGRAND TOTAL\t\t\t\t\t\t%d",grandtotal);
}
