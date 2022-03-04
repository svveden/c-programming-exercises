/* 03/03/2022 */
/* find last element containing n */

struct node *find_last(struct node *list, int n){
	struct node *last = NULL;
	while(list != NULL){
		if(list->value == n){
			last = list
		}
		list = list->next
	} return last;
}