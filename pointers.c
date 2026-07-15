#include <stdio.h>

int sum_2_no(int a, int b)
{
	return a + b;
}

int main()
{
	/* Pointer declaration */
	int value= 100;
	int *ptr = &value;

	char array [] = {1, 2, 3, 4, 5, 6, 7,};
	char *arr_ptr = array;

	char **ptr_2_ptr = &arr_ptr;

	/* using pointer to access values */
	*ptr = 200;
	*arr_ptr = 10;
	**ptr_2_ptr = 20;

	printf("value:%d\n",value);
	printf("array[0]:%d\n",array[0]);

	/* function pointer */
	int (*f_ptr)(int x, int y) = sum_2_no;
	int x =10;
	int y= 20;
	int r = f_ptr(x, y);
	printf("result:%d\n",r);

	/* generic pointer */
	void *g_ptr = &x;
	printf("the value of x after deference is:%d\n",*(int*)g_ptr);

	/* Null pointer */
	int* n_ptr = NULL;
	if (!n_ptr)
		printf("Null Pointer!\n");
	return 0;

}
