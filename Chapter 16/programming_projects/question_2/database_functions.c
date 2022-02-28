/* 02/26/2022 */
/* Parts Database Functions */

#include <stdlib.h>
#include <stdio.h>
#include <strings.h>
#include <ctype.h>

#ifndef DATABASE_H
#define DATABASE_H
#include "database_functions.h"
#endif

struct part{
	int number;
	char name[MAX_NAME_LENGTH+1];
	int in_stock;
};

struct part inventory[100];
int inventory_position = 0;

int split(struct part a[], int low, int high);

void quicksort(struct part a[], int low, int high) {

    int middle;

    if (low >= high) return;
    middle = split(a, low, high);
    quicksort(a, low, middle - 1);
    quicksort(a, middle + 1, high);
}

int split(struct part a[], int low, int high) {

    struct part part_element = a[low];

    for (;;) {
        while (low < high && part_element.number <= a[high].number)
            high--;
        if (low >= high) break;
        a[low++] = a[high];

        while (low < high && a[low].number <= part_element.number)
            low++;
        if (low >= high) break;
        a[high--] = a[low];
    }
    a[high] = part_element;
    return high;
}

int read_line(char str[], int n){
	char c;
	int i = 0;
	while(isspace(c = getchar()))
		;
	while(c != EOF && c != '\n'){
		if(i < n){
			str[i++] = c;
		} c = getchar();
	} str[i] = '\0';
	return i;
}

void insert(int number, char name[MAX_NAME_LENGTH+1], int in_stock){
	inventory[inventory_position].number = number;
	inventory[inventory_position].in_stock = in_stock;
	for(int i = 0; i < strlen(name); i++){
		inventory[inventory_position].name[i] = name[i];
	}
	inventory_position++;
}

void search_item(int number){
	for(int i = inventory_position; i >= 0; i--){
		if(inventory[i].number == number){
			printf("Name: %s\n", inventory[i].name);
			printf("Amount in stock: %d\n", inventory[i].in_stock);
			return;
		} 
	} printf("Item not found!");
}

void update_item(int number, int update){
	for(int i = inventory_position; i >= 0; i--){
		if(inventory[i].number == number){
				inventory[i].in_stock += update;
				return;
			}
		}
	}

void print_inventory(void){
	quicksort(inventory, 0, inventory_position-1);
	printf("Part number %15s %20s\n", "Part name", "Amount in stock");
	for(int i = 0; i < inventory_position; i++){
			printf("%-18d%-15s%d\n",inventory[i].number,inventory[i].name,inventory[i].in_stock);
	}
	return;
}