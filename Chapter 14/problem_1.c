/* 02/23/2022 */
/* Macros. */

#include <stdlib.h>
#include <stdio.h>
#define CUBE(x) ((x)*(x)*(x))
#define REMAINDER(x) ((x)%(4))
#define PRODUCT(x,y) ((x)*(y) < 100 ? 1 : 0)

int main(void){
	int x = 5, y = 100;
	printf("%d\n",CUBE(x));
	printf("%d\n",REMAINDER(x));
	printf("%d\n",PRODUCT(x,y));
}
