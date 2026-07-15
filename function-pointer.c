#include <stdio.h>

int add(int a, int b) { return a + b; }

int main() {
    int (*func_ptr)(int, int) = add; // Pointer to add function
    int result = func_ptr(5, 3);     // Call via pointer
    printf("Sum: %d\n", result);     // Output: 8
    return 0;
}
