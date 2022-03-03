/* 03/02/2022 */
/* Point and square struct */

#include <stdlib.h>
#include <stdio.h>

struct point{
	int x;
	int y;
};

struct rectangle{
	struct point upper_left;
	struct point lower_right;
};

int main(void){
	struct rectangle *p;
	p = malloc(sizeof(struct rectangle));
	p->upper_left.x = 10;
	p->upper_left.y = 25;
	p->lower_right.x = 20;
	p->lower_right.y = 15;
	return 0;
}