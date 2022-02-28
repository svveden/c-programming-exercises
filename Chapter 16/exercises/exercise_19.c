/* 02/28/2022 */
/* Structures and enums for pinball machine info */

#include <stdio.h>
#include <stdlib.h>

typedef enum {EM, SS} Type;

struct pinball_machine{
	char name[40];
	int year;
	Type type;
	int players;
}