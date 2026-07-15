#include <stdio.h>

/* static variable and static function are
 *  visible to its own file onlu */
static int global_int = 100;

static int returnstatic(void)
{
	static int result;
	result +=100;
	return result;
}

int main()
{

	/* Initialiazing static variable */
	static int i;	/* static variable gets always declared as 0 */
	printf("value of static variable:%d\n",i);

	/* static variable retian their values
	 * even between calls */

	int result = returnstatic();
	printf("result:%d\n",result);

	/* static variable in loops */
	for (int i = 0; i <10; i++) {
		printf("index:%d\n",i);
		for (static int j = 0; j < 5; j++)
		{
			printf("It will executed only once\n");
		}
	}

	return 0;
}

