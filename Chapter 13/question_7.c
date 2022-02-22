/* 02/22/2022 ;) */
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
		char *a[9] = {"eleven.", "twelve.", "thirteen.", "fourteen.", "fifteen.", "sixteen.", "seventeen.", "eighteen.", "nineteen."};
		printf("You entered the number ");
		printf("%s", a[num%10-1]);
	}
	else if(num == 10 || num>19){
		char *a[9] = {"ten", "twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"};
		char *b[10] = {"", "one.", "two.", "three.", "four.", "five.", "six.", "seven.", "eight.", "nine."};
		printf("You entered the number ");
		int num_temp = num/10;
		printf("%s", a[num_temp-1]);
		num_temp = num%10;
		printf(" %s", b[num_temp]);
		printf("\n");
	}
  return 0;
}
