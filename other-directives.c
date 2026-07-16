#include <stdio.h>

#define TEMP 100
#undef TEMP


/* if def and ifndef */
#define DEBUG 1
#define FEATURE_X 1

#ifdef DEBUG
	#define LOG(msg) printf("DEBUG:%s\n",msg);
#else
	#define LOG(msg) /* do nothing */
#endif

/* if, elif, else, endif */
#define VERSION 3

void voidcheckverison(void)
{
#if  VERSION == 1
	printf("Running verion 1\n");
#elif VERSION == 2
	printf("Running verion 2\n");
#elif VERSION == 3
	printf("Running verion 3\n");
#else
	printf("Unkown version detected\n");
#endif
}

/* Generate error and warning to complier */
#define MAX_SIZE 1024
#if MAX_SIZE > 1024
	#error "Max size has been exceeded!\n"
#endif

#define MIN_SIZE 512
#if MIN_SIZE < 512
	#warning "Min size has reached!\n"
#endif

/* Change line no and file name */
#line 100 "newfile.c"

/* stringizing and cocatinating  */
#define STRINGIZE(x) #x
#define STRINGIZE_VALUE(x) STRINGIZE(x)

#define CONCAT(a, b) a##b
#define MAKE_VAR(name, num) name##num

/* pragma directives */
#pragma message("Compiling main.c")

#pragma pack(push, 1)
struct PackedStruct {
    char c;
    int i;
    short s;
};
#pragma pack(pop)


int main ()
{
	/*printf("Value of temp now:%d\n",TEMP);  undefined */

#ifdef DEBUG
	LOG("SEGMENTATION FAULT")
#endif

	voidcheckverison();

	printf("stringize helloworld:%s\n",STRINGIZE(helloworld));
	printf("stringize_value 10 :%s\n",STRINGIZE_VALUE(10));

	int variable = 100;
	printf("concatenat(vari, able) :%d\n",CONCAT(vari, able));
	printf("makevar(vari, able) :%d\n",MAKE_VAR(vari, able));

	printf("The current line:%d and filename is:%s\n", __LINE__, __FILE__);

#if MAX_SIZE > 1024
	LOG("MAX_SIZE reached!");
#endif

#if min_SIZE > 512
	LOG("MIN_SIZE reached!");
#endif

	return 0;
}
