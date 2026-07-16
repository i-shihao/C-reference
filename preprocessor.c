#include <stdio.h>

#define PI 3.14

#define square(x) ((x) * (x))
#define greater(a,b) ((a) > (b) ? (a) : (b))

#define DEBUG 1
#define ARCH 1
/* Multi line macro */
#define multilinemacro(x) \
	do { \
		int temp = (x); \
		printf("Inside multi line macro with value:%d\n",temp); \
		temp += 2; \
		printf("%d + 2 :%d\n",(x), temp); \
	} while(0);

/* Macro with stringification*/
#define STRINGIFY(x) #x
#define CONCAT(a,b) a##b


int main ()
{
	printf("The value of pi is: %d\n", PI);
	printf("square of 4 is: %d\n",square(4));
	int a = 20; int b = 10;
	printf("In %d and %d :%d is greater\n",a,b, greater(a,b));

	/* stringification */
	printf("stringify(hello):%s\n",STRINGIFY(hello));
	printf("stringify(42):%s\n",STRINGIFY(42));

	/* token concatenation */
	int var1 =100;
	int bar2 =200;
	printf("concat(var,1):%d\n",CONCAT(var,1));

	multilinemacro(19);

#ifdef DEBUG
	printf("Debug mode enabled\n");
	printf("Current file:%s\n", __FILE__);
	printf("Current line:%d\n", __LINE__);
#endif

	 /* Platform-specific code */
#if defined(ARCH) || defined(ARCH64)
	printf("Architecture arm\n");
#elif defined(__linux__)
        printf("Linux platform\n");
#elif defined(__APPLE__)
        printf("macOS platform\n");
#else
        printf("Unknown platform\n");
#endif

    /* Undefining macros */
    #undef PI
    /* printf("PI: %f\n", PI);   Error: PI is undefined */

    /* #pragma example (compiler-specific) */
    /* #pragma message("This is a pragma message") */
	return 0;
}
