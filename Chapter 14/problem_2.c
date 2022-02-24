/* 02/23/2022 */
/* Macro for computing number of elements in an array  */

#include <stdlib.h>
#include <stdio.h>
#define NELEMS(a) sizeof(a)/sizeof(a[0])

int main(void){
	int array[] = {0,1,2,3,4};
	printf("%lu",NELEMS(array));
}