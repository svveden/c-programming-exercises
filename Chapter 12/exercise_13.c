/* 02/18/2022 */
/* Prints identity matrix using pointers! */

#include <stdio.h>
#include <stdlib.h>

#define N 10

int main(void){
	double indent[N][N];
	double *p = &indent[0][0];
	int count = 10;
	indent[0][0] = 1.0;
	for(p = &indent[0][0]; p <= &indent[N-1][N-1]; p++){
		if(count == N){
			*p = 1.0;
			count = 0;
		} else{
			*p = 0.0;
			count++;
		}
	}
	for(int i = 0; i < N; i++){
		for(int j = 0; j<N; j++){
			printf("%.1f ", indent[i][j]);
		} printf("\n");
	}
}
