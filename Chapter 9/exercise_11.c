/* 02/14/2022 */
/* This program computes the average GPA of an array of grades. */

#include <stdio.h>
#include <stdlib.h> 

float compute_GPA(char grades[], int n){
	float sum = 0;
	for(int i = 0; i < n; i++){
		switch(grades[i]){
			case 'A': sum+=4;
			break;
			case 'B': sum+=3;
			break;
			case 'C': sum+=2;
			break;
			case 'D': sum+=1;
			break;
			case 'F':
			break;
			default: break;
		}
	} return sum/=n;
}

int main(void){
	char grades[] = {'A', 'B', 'C', 'D', 'F', 'A', 'B', 'B', 'D', 'C', 'C'};
	printf("Average: %.2f\n", compute_GPA(grades, 11));
	return 0;
}
