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

int insert(struct part inventory[], int inventory_position, int number, char name[MAX_NAME_LENGTH+1], int in_stock){
	int i;
	inventory[inventory_position].number = number;
	inventory[inventory_position].in_stock = in_stock;
	for(i = 0; i < strlen(name); i++){
		inventory[inventory_position].name[i] = name[i];
	}
	inventory[inventory_position].name[i] = '\0';
	inventory_position++;
	return inventory_position;
}

void search_item(struct part inventory[], int inventory_position, int number){
	for(int i = inventory_position; i >= 0; i--){
		if(inventory[i].number == number){
			printf("Name: %s\n", inventory[i].name);
			printf("Amount in stock: %d\n", inventory[i].in_stock);
			return;
		} 
	} printf("Item not found!");
}

void update_item(struct part inventory[], int inventory_position, int number, int update){
	for(int i = inventory_position; i >= 0; i--){
		if(inventory[i].number == number){
				inventory[i].in_stock += update;
				return;
			}
		}
	}

void print_inventory(struct part inventory[], int inventory_position){
	printf("Part number %15s %20s\n", "Part name", "Amount in stock");
	for(int i = 0; i < inventory_position; i++){
		printf("%-18d%-15s%d\n",inventory[i].number,inventory[i].name,inventory[i].in_stock);
	}
	return;
}