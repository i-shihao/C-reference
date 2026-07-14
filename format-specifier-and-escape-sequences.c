#include <stdio.h>

int main ()
{

	int no = 10;
	int hexa = 0xa;
	char b = 'b';
	float c = 3.14;
	int *ptr = &no;

	printf("Decimal format specifier:%d\n",no);
	printf("hex format specifier:%x\n",hexa);
	printf("character format specifier:%c\n",b);
	printf("float format specifier:%.2f\n",c);
	printf("memory address format specifier:%p\n",ptr);

	/* format specifier with width and alignmet */
	printf("memory address format specifier:%10d\n",no);
	printf("memory address format specifier:%-10d\n",no);

	/* esacpe sequences */

	printf("This is newline\n in action \n");
	printf("This is tab \t in action\t ok\n");
	printf("This is how we \"quote\" \n");
	printf("This is we use backlash \\ \n");

	return 0;
}

