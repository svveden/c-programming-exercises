struct node *insert_into_ordered_list(struct node *list, struct node *new_node){
	struct node **pos = &list;
	while(list != NULL){
		if(list->value >= new_node->value){
			break;
		}
		pos = &list->next;
		list = list->next;
	}
	*pos = new_node;
	new_node = list;
	return list;
}