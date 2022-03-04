/* 03/03/2022 */

for(p = first; p != NULL; p = p->next){
	struct x *temp;
	temp = p;
	p = p->next;
	free(p);
}