/* 03/04/2022 */
/* delete_from_list updated with pointer to pointer */

#include <stdlib.h>
#include <stdio.h>

struct node{
	int value;
	struct node *next;
};

struct node *list = NULL;

void delete_from_list(struct node **list, int n){
	struct node *pp = *list;
	for(; pp != NULL && pp->value != n; pp = pp->next){
		printf("b4: %p\n",list);
		list = &pp->next;
		printf("after: %p\n",list);
	}
	*list = pp->next;
	free(pp);
}

// int main(void){
// 	struct node *new_node3 = malloc(sizeof(struct node));
// 	new_node3->value = 10;
// 	new_node3->next = list;
// 	list = new_node3;
// 	struct node *new_node = malloc(sizeof(struct node));
// 	new_node->value = 5;
// 	new_node->next = list;									// TESTING
// 	list = new_node;
// 	struct node *new_node2 = malloc(sizeof(struct node));
// 	new_node2->value = 99;
// 	new_node2->next = list;
// 	list = new_node2;
// 	struct node *p = list;
// 	while(p != NULL){
// 		printf("%d\n", p->value);
// 		p = p->next;
// 	}
// 	p = list;
// 	delete_from_list(&list, 10);
// 	while(p != NULL){
// 		printf("%d\n", p->value);
// 		p = p->next;
// 	}
// }