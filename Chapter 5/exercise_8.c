/* 01/25/2022 */
/* The following if statement is unecessarily complicated. Simplify it as much as possible. */

/* if (age >= 13)
/*    if (age<=19)
/*      teenager = true;
/*    else
/*      teenager = false;
/* else if (age < 13)
/*      teenager = false;                                                                   */

#include <stdio.h>
#include <stdbool.h>

int main(void){
	int age = 11;
	printf("%d", age > 12 && age < 20 ?  true : false);

}
