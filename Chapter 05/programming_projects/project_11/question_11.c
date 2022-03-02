/* 01/26/2022 */
/* This program takes in a two-digit number and outputs word form of that number. */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int num;
	printf("Enter a two-digit number: ");
	scanf("%d", &num);
	if(num>99 || num < 10){
		printf("Number too large/too small!");
	}
	else if(num > 10 && num < 20){
		printf("You entered the number ");
		switch(num){
			case 11: printf("eleven.");
			break;
			case 12: printf("twelve.");
			break;
			case 13: printf("thirteen.");
			break;
			case 14: printf("fourteen.");
			break;
			case 15: printf("fifteen.");
			break;
			case 16: printf("sixteen.");
			break;
			case 17: printf("seventeen.");
			break;
			case 18: printf("eighteen.");
			break;
			case 19: printf("nineteen.");
			break;
			default: printf("A new number has been born!");
			break;
		}
	}
	else if(num>19){
		printf("You entered the number ");
		int num_temp = num/10;
		switch(num_temp){
			case 1: printf("ten");
			break;
			case 2: printf("twenty");
			break;
			case 3: printf("thirty");
			break;
			case 4: printf("fourty");
			break;
			case 5: printf("fifty");
			break;
			case 6: printf("sixty");
			break;
			case 7: printf("seventy");
			break;
			case 8: printf("eighty");
			break;
			case 9: printf("ninety");
			break;
			default: printf("A new number has been born!");
		}
		printf("-");
		num_temp = num%10;
		switch(num_temp){
			case 1: printf("one.");
			break;
			case 2: printf("two.");
			break;
			case 3: printf("three.");
			break;
			case 4: printf("four.");
			break;
			case 5: printf("five.");
			break;
			case 6: printf("six.");
			break;
			case 7: printf("seven.");
			break;
			case 8: printf("eight.");
			break;
			case 9: printf("nine.");
			break;
			default: printf("A new number has been born!");
		}
		printf("\n");
	}
  return 0;
}
