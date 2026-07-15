#include <stdio.h>

extern int  extern_int;
extern char extern_char;
extern int extern_function(int, int);


int main()
{
	/* auto storage class */
	auto int a = 10;
	auto int b = 10;

	/* static storage class */
	static int c = 20;
	static int d = 30;
	static char e = 'e';

	/* extern storage class */
	printf("extern_int value:%d\n",extern_int);
	printf("extern_char value:%x\n",extern_char);
	int result = extern_function(a,b);
	printf("result of externfunction:%d\n",result);

	/* register storage class */
	register int a0 = 0x12;
	register char h = 0x64;

	return 0;
}
