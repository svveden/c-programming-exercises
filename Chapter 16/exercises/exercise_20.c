/* 02/28/2022 */
/* Enum and switch for directions */

#include <stdio.h>
#include <stdlib.h>

typedef enum {NORTH, EAST, SOUTH, WEST} Direction;

switch(Direction){
	case 0: 
		y--;
		break;
	case 1:
		x++;
		break;
	case 2:
		y++;
		break;
	case 3:
		x--;
		break;
	default:
		exit(0);
}