/* 02/18/2022 */
/* Searches array for matching keys */

bool search(const int a[], int n, int key){
	const int *p;
	for(p = a; p < a + n; p++){
		if(*p == key){
			return true;
		}
	} return false;
}
