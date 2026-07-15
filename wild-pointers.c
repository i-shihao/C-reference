#include <stdio.h>

int main() {
    int *ptr; // WILD POINTER! Not initialized, contains garbage address

    // *ptr = 10; // DANGER! Writing to random memory

    // Fix: Always initialize your pointers
    int a = 10;
    ptr = &a; // Now it's safe
    return 0;
}
