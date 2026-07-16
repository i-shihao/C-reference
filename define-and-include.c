#ifndef MY_HEADER_H
#define MY_HEADER_H

/* Standard library includes */
#include <stdio.h>     /* Input/output */
#include <stdlib.h>    /* Standard library */
#include <string.h>    /* String functions */
#include <math.h>      /* Math functions */

/* macro defination */
#define MAX_BUFFER_SIZE 1024
#define ENABLE_LOGGING 1
#define DEBUG 1
#define __linux__ 1

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define ABS(x) ((x) < 0 ? -(x) : (x))

/* user defined constant */
#define VERSION "1.0.0"
#define PROGRAM_NAME "MyApp"

/* function like macro with multiple statements */
#define ERROR_MSG(msg) \
    fprintf(stderr, "Error: %s\n", msg); \
    exit(1)

/* Conditional defines */
#ifdef DEBUG
    #define LOG(msg) printf("DEBUG: %s\n", msg)
#else
    #define LOG(msg) // Do nothing
#endif

/* User-defined header */
#include "temp.c"

#endif

int main ()
{
	printf("Program: %s v%s\n", PROGRAM_NAME, VERSION);

	char buffer[MAX_BUFFER_SIZE];
	printf("Buffer size: %d\n", MAX_BUFFER_SIZE);

#ifdef ENABLE_LOGGING
        LOG("Application started");
#endif

	/* Multi-line macro */
	int x = 25;
	if (x < 0) {
		ERROR_MSG("Invalid value");
	 }

	int a = 10, b = 20;
	printf("MIN(%d, %d) = %d\n", a, b, MIN(a, b));
	printf("ABS(-5) = %d\n", ABS(-5));

#ifdef _WIN32
 #include <windows.h>
        printf("Windows system\n");
#elif __linux__
#include <unistd.h>
        printf("Linux system\n");
#endif
	return 0;
}

