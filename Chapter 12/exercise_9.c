/* 02/18/2022 */
/* Adds two arrays */

double inner_product(const double *a, const double *b, int n){
	double sum;
	int i = 0;
	while(i++ < n){
		sum += *a++ * *b++;
	}
}
