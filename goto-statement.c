#include <stdio.h>
#include <stdlib.h>

int main ()
{
	/* goto statement */

	int no;
	printf("Enter any positive or negative no\n");
	scanf("%d",&no);

	if(no < 0)
		goto negative;
	goto positive;

	negative:
		printf("It is a negative no\n");
	return 0;

	positive:
		printf("it is a positive no\n");

	/* goto statements are used to break nested loops */
	for (int i =0;i<10;i++) {
		printf("index:%d\n",i);
		for(int j=0; j<5; j++) {
			if (j == 4) {
				goto end_loop;
			}
			printf("inside index:%d\n",j);
		}
	}

	end_loop:
		printf("nested loop has been terminated\n");

	/* It is mostly used in kernel programming to handle errors */
	int* a = (int*)malloc(1* sizeof(int));
	if(!a)
		goto free_mem;

	printf("memory has been allocated\n");
	free(a);
	return 0;

free_mem:
	free(a);
}
