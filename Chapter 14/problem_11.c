/* 02/23/2022 */
/* ERROR Macro */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ERROR(x, y) fprintf(stderr, x, y);

int main(void){
	int index = 10;
	ERROR("Range error: index = %d\n", index);
}
