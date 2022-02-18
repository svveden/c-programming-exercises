/* 02/18/2022 */
/* Sum of an array using pointers */

int sum_array(const *a, int n){
	int sum, *p; 
	sum = 0;
	for(p = a; p < a + n; p++){
		sum += *p;
	} return sum;
}
