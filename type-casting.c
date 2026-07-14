#include <stdio.h>
#include <stdlib.h>

int main ()
{

	/* Implicit typecasting */
	int a = 10;
	long b = a;
	printf("sizeof b:%d\n",sizeof(b));

	char c = 'c';
	int int_c = c;
	printf("int_c:%x\n",int_c);

	/* Explicit typecasting */
	float pi = 3.14;
	int int_pi = (int)pi;
	printf("int_pi:%d\n",int_pi);

	char d = 'd';
	int char_d = (int)d;
	printf("char_d:%x\n",char_d);

	/* pointer typecasting */
	int* int_ptr =(int*) malloc(2*sizeof(int));
	char* char_ptr = (char*)malloc(2*sizeof(char));
	void *void_ptr = malloc(2*sizeof(char));

	if(!int_ptr || !char_ptr || !void_ptr)
		return -1 ;

	free(int_ptr);
	free(char_ptr);
	free(void_ptr);

	return 0;
}
