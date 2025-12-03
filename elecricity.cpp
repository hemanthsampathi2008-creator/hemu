#include<stdio.h>
int main()
{
	char name[50];
	int units,price,amount;
	printf("enter your name :");
	scanf("%s",&name);
	printf("no of units:");
	scanf("%d",&units);
	printf("enter unit price:");
	scanf("%d",&price);
	amount=units*price;
	printf("\n__electirc_bill_\n");
	printf("customer name=%s",name);
	printf("electic bill=%d",amount);
	return 0;
}

