/* 03/03/2022 */
/* Sort in descending order */

int compare_parts(const void *p, const void *q){
	if (((struct part *) q)->number < ((struct part *) p)->number)
		return -1;
	else if (((struct part *) p)->number == ((struct part *) q)->number)
		return 0;
	else{
		return 1;
	}
}