#include <stdio.h>

int main() {
    int a = 10;
    float b = 5.5;
    void *ptr;

    ptr = &a;
    printf("Int: %d\n", *(int*)ptr); // Cast to int*

    ptr = &b;
    printf("Float: %.1f\n", *(float*)ptr); // Cast to float*
    return 0;
}
