#include <stdio.h>

/* function to demonstrate restrict keyword */

void maybe_change(int *p)
{
	*p = 100;
}

int main ()
{
	/* Without restrict keyword */
	int a = 10;
	int *ptr = &a;
	*ptr = 20;
	maybe_change(ptr);
	int x = *ptr;
	printf("the value of x:%d\n",x);

	/* With restrict keyword */
	int* restrict ptr2 = &a;
	*ptr2 = 30;
	maybe_change(ptr2);
	int y = *ptr2;
	printf("the value of y:%d\n",y);

	return 0;
}
