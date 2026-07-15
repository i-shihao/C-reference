#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int*)malloc(sizeof(int));
    *ptr = 10;
    free(ptr); // Memory freed

    // ptr is now a DANGLING pointer
    // *ptr = 20; // DANGER! Undefined behavior!
    
    ptr = NULL; // Fix: Set to NULL after free
    return 0;
}

