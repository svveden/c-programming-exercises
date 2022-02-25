/* 1/24/2022 */
/* This program takes in a item number, price, and date of purchase and formats an output as specified by problem. */
#include <stdio.h>
#include <stdlib.h>

int main(void){
	int item_number;
	float price;
	char date[11];
	printf("Enter item number: ");
	scanf("%d", &item_number);
	printf("Enter unit price: ");
	scanf("%f", &price);
	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%s", date);
	printf("Item\tUnit\tPurchase\n\tPrice\tDate\n%d\t$%3.2f\t%s\n",item_number,price,date);
	return 0;
}
