/* 01/25/2022 */
/* This program calculates a brokerage's percentage of commission based on price + rival's commission. */

#include <stdio.h>

int main(void){
	float trade;
	float trade2;
	float commission = 0;
	float rival_commission = 0;
	printf("Enter number of shares: ");
	scanf("%f", &trade2);
	printf("Enter price per share: ");
	scanf("%f", &trade);

	trade *= trade2;

	if(trade < 2500){
		commission += 30 + (trade * .017);
	}
	else if(trade < 6250){
		commission += 56 + (trade * 0.0066);
	}
	else if(trade < 20000){
		commission += 76 + (trade * 0.0034);
	}
	else if(trade < 50000){
		commission += 100 + (trade * 0.0022);
	}
	else if(trade < 500000){
		commission += 155 + (trade * 0.0011);
	}
	else {
		commission += 255 + (trade * 0.0009);
	}

	if(commission < 39.00f){
		commission = 39.00f;
	}

	if(trade2 < 2000){
		rival_commission = 33 + 0.03 * trade2;
	}
	if(trade2 > 2000){
		rival_commission = 33 + 0.02 * trade2;
	}

	printf("$%.2f\n", commission);
	printf("Rival's commission: $%.2f\n", rival_commission);
}
