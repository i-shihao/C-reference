#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *ptr = (int*)malloc(2*sizeof(int));
	if(!ptr) {
		printf("malloc() error\n");
		return 0;
	}

	/* free(ptr);  memory leak */
	free(ptr);

	char *char_ptr = (char*)malloc(3 * sizeof(char));
	if(!char_ptr) {
		printf("malloc() error\n");
		return 0;
	}
	free(char_ptr);  /* if not done memory leak */

	char_ptr = (char*)calloc(10, sizeof(char));
	if(!char_ptr){
		printf("malloc() error\n");
		return 0;
	}
	free(char_ptr); /* if not done memory leak */

	/* previous allocated memory has been lost
	 * and all this leads to memory leaks and could
	 * crash and entire system so make sure to free
	 * all dynamic memory allocaions. */

	return 0;
}
