/* 03/03/2022 */
/* Insert updated */

struct node *insert_into_ordered_list(struct node *list, struct node *new_node){
	struct node **pos = &list;
	while(list != NULL){
		if(list->value >= new_node->value){
			break;
		}
		pos = &list->next;
	}
	new_node->next = *pos;
	*pos = new_node;
	return list;
}
