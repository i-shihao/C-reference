#include <stdio.h>
#include <stdlib.h>

/* Global variables - stored in data segment */
int globalInitialized = 100;     // Data segment (initialized)
int globalUninitialized;          // BSS segment (zero-initialized)
static int staticGlobal = 200;   // Data segment (static)

int main() {
    /* Local variables - stored on stack */
    int localVar = 42;
    static int staticLocal = 300;  // Data segment (static)
    const int constVar = 50;       // Stack (usually)

    /* Dynamic allocation - stored on heap */
    int* heapVar = (int*)malloc(sizeof(int));
    *heapVar = 500;

    /* String literals - stored in read-only section */
    char* stringLiteral = "Hello";

    /* Print addresses to see memory layout */
    printf("Code section (function address): %p\n", (void*)main);
    printf("Read-only data (string literal): %p\n", (void*)stringLiteral);
    printf("Global (initialized): %p\n", (void*)&globalInitialized);
    printf("Global (uninitialized): %p\n", (void*)&globalUninitialized);
    printf("Static global: %p\n", (void*)&staticGlobal);
    printf("Static local: %p\n", (void*)&staticLocal);
    printf("Local variable: %p\n", (void*)&localVar);
    printf("Heap allocation: %p\n", (void*)heapVar);
    printf("Const variable: %p\n", (void*)&constVar);

    /* Show stack growth (within the same function) */
    int stackVar2 = 100;
    printf("Another stack var: %p\n", (void*)&stackVar2);
    printf("Stack grows %s\n",
           (&localVar < &stackVar2) ? "downward" : "upward");

    /* Allocate more heap memory */
    int* heapVar2 = (int*)malloc(sizeof(int));
    printf("Another heap var: %p\n", (void*)heapVar2);
    printf("Heap %s\n", 
           (heapVar < heapVar2) ? "grows upward" : "grows downward");

    /* Free heap memory */
    free(heapVar);
    free(heapVar2);

    return 0;
}
