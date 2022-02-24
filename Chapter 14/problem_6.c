/* 02/23/2022 */
/* Macro for computing number of elements in an array  */

#include <stdlib.h>
#include <stdio.h>
#include <strings.h>
#include <math.h>

#define DISP(f,x) printf(#f "(%g) = %g\n", x, f(x));
#define DISP2(f,x, y) printf(#f "(%g,%g) = %g\n", x, y, f(x,y));

int main(void){
	DISP(sqrt, 3.0);
}