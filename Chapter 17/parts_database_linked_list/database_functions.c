/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* 03/01/2022 */
/* Parts Database Functions */

#include <stdlib.h>
#include <stdio.h>
#include <strings.h>
#include <ctype.h>

#ifndef DATABASE_H
#define DATABASE_H
#include "database_functions.h"
#endif

struct part *list = NULL;

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
	struct part *cur, *prev, *new_node = malloc(sizeof(struct part));
	new_node->number = number;
	new_node->in_stock = in_stock;
	for(int i = 0; i < strlen(name); i++){
		new_node->name[i] = name[i];
	}
	for(cur = list, prev = NULL; cur!=NULL && new_node->number > cur->number; prev = cur, cur = cur->next){
		;
	}
	if(cur != NULL && cur->number == new_node->number){
		printf("Already in list.");
		free(new_node);
		return;
	}
	new_node->next = cur;
	if(prev == NULL){
		list = new_node;
	} else{
		prev->next = new_node;
	}
}

void search_item(int number){
	struct part *p;
	for(p = list; p != NULL && number > p->number; p=p->next){
		;
	}
	if(p != NULL && p->number == number){
		printf("Name: %s\n", p->name);
		printf("Amount in stock: %d\n", p->in_stock);
		return;
	} else{
		printf("Item not found!");
	}
}

void update_item(int number, int update){
	struct part *p;
	for(p = list; p != NULL && p->number < number; p=p->next){
		;
	}
	if(p != NULL && p->number == number){
		p->in_stock += update;
	}
	return;
}
void print_inventory(){
	struct part *p;
	printf("Part number %15s %20s\n", "Part name", "Amount in stock");
	for(p = list; p != NULL; p=p->next){
		printf("%-18d%-15s%d\n",p->number,p->name,p->in_stock);
	}
	return;
}