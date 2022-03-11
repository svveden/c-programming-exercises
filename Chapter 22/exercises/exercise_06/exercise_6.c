/* 03/11/2022 */

#include <stdio.h>

int main(void){
	int widget = 1;
	while(widget < 100){
		printf("%d %s%.*s\n", widget, "widget", (1-widget), "s");
		widget++;
	}
}