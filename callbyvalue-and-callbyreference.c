#include <stdio.h>

void call_by_value(int x) { x = 10; }      // Won't change original
void call_by_reference(int *x) { *x = 10; } // Will change original

int main() {
    int a = 5, b = 5;
    call_by_value(a);
    call_by_reference(&b);
    printf("a=%d, b=%d\n", a, b); // Output: a=5, b=10
    return 0;
}
