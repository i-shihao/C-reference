#include <stdio.h>
#include <stdlib.h>

#define DEBUG_PRINT(msg) \
	printf("DEBUG:%s FILE:%s LINE:%d\n",msg,__FILE__,__LINE__);

#define CHECK(condition) \
    do { \
        if (!(condition)) { \
            fprintf(stderr, "Error: %s at %s:%d\n", \
                    #condition, __FILE__, __LINE__); \
            exit(1); \
        } \
    } while(0)

int main ()
{
	/* Basic predefined macros */
	printf("File: %s\n", __FILE__);
	printf("Line: %d\n", __LINE__);
	printf("Date: %s\n", __DATE__);
	printf("Time: %s\n", __TIME__);
	printf("STDC: %d\n", __STDC__);

	DEBUG_PRINT("Starting program");
	DEBUG_PRINT("Exiting program");

	/* Using CHECK macro */
	int x = 5;
	CHECK(x > 0);
	printf("x is positive\n");

	/* CHECK with a condition that should succeed */
	int y = 10;
	CHECK(y != 0);

	/* #pragma directive examples (compiler-specific) */
	#pragma GCC diagnostic ignored "-Wall"
	#pragma GCC diagnostic warning "-Wextra"

	/* More predefined macros */
	printf("__func__: %s\n", __func__);  // Current function name

	/* Macro for version checking */
	#if defined(__GNUC__) && __GNUC__ >= 4
        printf("GCC version: %d\n", __GNUC__);
	#endif

	/* #undef and redefinition */
	#define TEMP_VALUE 100
	printf("TEMP_VALUE: %d\n", TEMP_VALUE);
	#undef TEMP_VALUE
	#define TEMP_VALUE 200
	printf("TEMP_VALUE: %d\n", TEMP_VALUE);
	return 0;
}

