#include <stdio.h>

/* macro declaration */
#define PI 3.14
#define DEBUG 1
#define ARCH 86
#define STRINGIFY(x) #x
#define CONCAT(a,b) a##b
#define SQUARE(x) ((x) * (x))

/* multiline macros */

#define PRINT_ERROR(msg) \
	do { \
		printf("Error: %s\n",msg); \
		printf("FIle:%s Line:%d\n",__FILE__, __LINE__); \
	} while(0);
int main()
{
	printf("the value of macro PI:%d\n",PI);
#ifdef DEBUG
	PRINT_ERROR("SEG FAULT");
#endif

	int variable = 100;
	printf("The square is 8 is:%d\n",SQUARE(8));
	printf("Stringify(hello):%s\n",STRINGIFY(hello));
	printf("the concant(vari,able):%d\n",CONCAT(vari,able));

#ifdef ARCH
	printf("It is arch:%d\n",ARCH);
#elif
		printf("It is maybe arch:%d\n", x86_32);
#elif
	printf("Or it could be arch64 or arch32\n");
#endif
	return 0;
}
