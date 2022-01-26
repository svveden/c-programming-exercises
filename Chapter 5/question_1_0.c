/* 01/26/2022 */
/* This program takes in numerical grade and gives letter grade. */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int grade;
	printf("Enter numerical grade: ");
	scanf("%d", &grade);
	if(grade > 100 || grade < 0){
		printf("Error, grade incorrect.\n");
	}
	else{
		grade=grade/10;
		switch(grade){
			case 10: printf("A+");
			break;
			case 9: printf("A");
			break;
			case 8: printf("B");
			break;
			case 7: printf("C");
			break;
			case 6: printf("D");
			break;
			default: printf("F");
			break;
		}
		printf("\n");
	}
  return 0;
}
