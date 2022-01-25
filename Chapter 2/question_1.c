/* 01/24/2022 */

/* Write a program that uses printf to display the following picture on screen: */
/* 			*							*/
/*		      *								*/
/*		    *								*/
/*     	   *      *								*/
/*	    *   *								*/
/*	      *									*/
/*										*/

#include <stdio.h>

int main(void){
	printf("%25c\n", '*');
	printf("%22c\n", '*');
	printf("%19c\n", '*');
	printf("%7c%10c\n",'*', '*');
	printf("%9c%5c\n", '*', '*');
	printf("%11c\n\n", '*');
	return 0;
}
