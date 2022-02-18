/* 02/18/2022 */
/* Stores 0s in array */

void store_zeros(int *a, int n){
	int *p;
	for(p = a; p < a + n; p++){
		*p = 0;
	}
}
