/* 02/23/2022 */
/* Macros */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define CHECK(x,y,n) ((x) >= 0 && (x) <= ((n)-1) && (y) >= 0 && (y) <= ((n)-1)) ? 1 : 0
#define MEDIAN(x,y,z) (((x)>=(y)&&(x)<=(z))?(x):((y)>=(x)&&(y)<=(z))?(y):(z))
#define POLYNOMIAL(x) ( ( 3 * ( pow ( (x) ,5) ) ) + ( 2 * ( pow ( (x) ,4) ) ) - ( 5 * ( pow ( (x), 3 ) ) ) - ( pow( (x) ,2 ) ) + ( 7 * (x) ) - 6 )

