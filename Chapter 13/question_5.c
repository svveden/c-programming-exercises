/* 02/21/2022 */
/* This program outputs the sum of numbers put on the command line. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv){
	int sum = 0;
	for(int i = 1; i < argc; i++){
		sum += atoi(argv[i]);
	}
	printf("SUM: %d\n", sum);
}
