/* 03/03/2022 */
/* Count occurences */

int count_occurences(struct node *list, int n){
	int count = 0;
	while(list != NULL){
		if(list->value == n){
			count+=1
		}
		list=list->next;
	}	
	return count;
}