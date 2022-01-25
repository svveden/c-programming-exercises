/* 01/24/2022 */

/* Write a program that computes the volume of a sphere with a 10-meter radius, using the formula */
/* v = 4/3pir^3. Write the fraction 4/3 as 4.0f/3.0f.						  */


/* This program computes the volume of a sphere */
/* This is both question 2 & 3 */

#include <stdio.h>
#define FOUR_THIRDS (4.0f/3.0f)
#define M_PI 3.14159265358979323846

int main(void){
	int r = 0;
	printf("Please enter the radius of the sphere you'd like to calculate: ");
	scanf("%d", &r);	
	float v = FOUR_THIRDS * M_PI * r * r * r;
	printf("Sphere calculation: %.2f\n\n", v);
	return 0;
}
