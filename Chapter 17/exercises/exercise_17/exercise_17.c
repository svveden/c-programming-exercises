/* 03/04/2022 */
/* qsort call on array of 100 elements for sorting of last 50 */

int a[100];

qsort(&a[50], 50, sizeof(int), int (*compar)(const void*, const void*));