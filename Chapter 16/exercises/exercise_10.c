/* 02/28/2022 */
/* Structures for points and rectangles */

#include <stdio.h>
#include <stdlib.h>

struct point{
	int x;
	int y;
};

struct rectangle{
	struct point upper_left;
	struct point lower_right;
};

int area_of_rectangle(struct rectangle r){
	return((r.upper_left.x - r.lower_right.x) * (r.upper_left.y - r.lower_right.y));
}

struct point center_of_rectangle(struct rectangle r){
	return (struct point){(((r.upper_left.x-r.lower_right.x))/2), (((r.upper_left.y-r.lower_right.y))/2)};
}

struct rectangle move_rectangle(struct rectangle r, int x, int y){
	r.upper_left.x += x;
	r.upper_right.x += x;
	r.upper_left.y += y;
	r.upper_right.y += y;
	return r;
}

bool inside(struct rectangle r, struct point p){
	if(p.x < r.upper_left.x && p.x > r.upper_right.x && p.y < r.upper_left.y && p.y > r.upper_right.y){
		return true;
	} return false;
}