/*	02/09/2022 */
/* This program checks if an unlimited number of nums have repeating digits */

#include <stdio.h>
#include <stdbool.h>

int main(void){
	long num;
	printf("Enter a number: ");
	scanf("%ld", &num);
	while(num != 0){
		bool repeat[10] = {false};
		for(int i = 0; num > 0; i++){
			if(repeat[num % 10] != true){
				repeat[num % 10] = true;
			}
			else{
				printf("Repeated digit\n");
				break;
			}
			num /= 10;
		}
		printf("Enter a number: ");
		scanf("%ld", &num);
	}
	return 0;
}
