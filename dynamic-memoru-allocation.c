#include <stdlib.h>
#include <stdio.h>

int main()
{

	/* malloc */
	int *ptr = (int*)malloc( 2 *sizeof(int));
	if(!ptr)
		printf("malloc() error\n");
	free(ptr);

	/* calloc 0 initialized */
	int  *ptr2 = (int*)calloc(2, sizeof(int));
	if(!ptr2)
		printf("realloc() error\n");

	/* realloc - allocated a new size  */
	int *new_ptr = (int*)realloc(ptr, 4 * sizeof(int));
	if(!new_ptr)
		printf(" realloc() error\n");
	free(new_ptr);

	return 0;
}
