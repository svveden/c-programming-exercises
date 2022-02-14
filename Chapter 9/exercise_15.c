/* 02/14/2022 */
/* This program computes median of three doubles. */

#include <stdio.h>
#include <stdlib.h> 

double median(double x, double y, double z){
	int middle;
	if(x <= y && y <= z || x >= y && y >= z){
		middle = y;
	} else if(y <= x && x <= z || y >= x && x >= z){
		middle = x;
	} else{
		middle = z;
	} return middle;
} 

int main(void){
	double x = 2, y = 7, z = 6;
	printf("Median: %f", median(x,y,z));
	return 0;
}
