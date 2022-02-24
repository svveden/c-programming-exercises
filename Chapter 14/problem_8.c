/* 02/23/2022 */
/* Macro for computing number of elements in an array  */

#include <stdlib.h>
#include <stdio.h>
#include <strings.h>
#include <math.h>

#define STRINGIZE(x) #x
#define EXPAND(x) STRINGIZE(x)
#define LINE_FILE ("Line " EXPAND(__LINE__) " of file " __FILE__)

int main(void){
	const char *str = LINE_FILE;
	printf("%s", str);
}