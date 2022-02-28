/* 02/28/2022 */
/* Structures for points and rectangles */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct shape{
	int shape_kind;
	struct point center;
	union{
		struct{
			int height, width;
		} rectangle;
		struct{
			int radius;
		} circle;
	} u;
} s;

struct point{
	int x;
	int y;
};

int compute_area(struct shape s){
	if(s.shape_kind == RECTANGLE){
		return s.u.rectangle.height * s.u.rectangle.width;
	} else{
		return pow(s.u.circle.radius, 2); * 3.14159;
	}
}

struct shape move_shape(struct shape s, int x, int y){
	s.center.x += x;
	s.center.y += y;
	return s;
}

struct shape scale_shape(struct shape s, double c){
	if(s.shape_kind == RECTANGLE){
		s.u.rectangle.height *= c;
		s.u.rectangle.width *= c;
	} else{
		s.u.circle.radius *= c;
	} return s;
}