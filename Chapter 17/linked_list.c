/* 03/01/2022 */
/* Linked List */

#include <stdio.h>
#include <stdlib.h>

struct node{
	int value;
	struct node *next;
};

struct node *add_to_list(struct node *list, int n);
struct node *read_numbers(void);
struct node *search_list(struct node *list, int n);
struct node *delete_from_list(struct node *list, int n);

int main(void){
	read_numbers();
	return 0;
}

struct node *add_to_list(struct node *list, int n){
	struct node *new_node = malloc(sizeof(struct node));
	if(new_node == NULL){
		printf("Malloc failed.");
		exit(0);
	}
	new_node->value = n;
	new_node->next = list;
	return new_node;
}

struct node *read_numbers(void){
	struct node *first = NULL;
	int n;
	printf("Enter a series of integers (0 to terminate): ");
	for(;;){
		scanf("%d", &n);
		if(n == 0){
			return first;
		}
		first = add_to_list(first, n);
	}
}

struct node *search_list(struct node *list, int n){
	struct node *p;
	for(p = list; p != NULL; p=p->next){
		if(p->value == n){
			return p;
		} 
	} return NULL;
}

struct node *delete_from_list(struct node *list, int n){
	struct node *cur, *prev;
	for(; cur != NULL && cur->value != n; prev = cur, cur = cur->next){
		;
	}
	if(cur == NULL){
		return list;
	}
	if(prev == NULL){
		return list->next;
	} else{
		prev->next = cur->next;
		free(cur);
		return list;
	}
}