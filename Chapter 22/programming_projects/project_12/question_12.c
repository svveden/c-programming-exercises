/* 03/13/2022 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	if(argc < 2){
		fprintf(stderr, "Usage: ./question_12 filename\n");
		exit(EXIT_FAILURE);
	}

	FILE *fp;
	if((fp = fopen(argv[1], "r")) == NULL){
		fprintf(stderr, "Failed to open file!\n");
		exit(EXIT_FAILURE);
	}

	char line[50];
	int day, month, year, amount;
	float price;
	printf("Item       Unit Price       Purchase Date\n");
	while(fgets(line, 50, fp) != NULL){
		sscanf(line, "%d,%f,%d/%d/%d", &amount, &price, &month, &day, &year);
		printf("%-4d       $%6.2f       %d/%d/%d\n", amount, price, month, day, year);
	}

}