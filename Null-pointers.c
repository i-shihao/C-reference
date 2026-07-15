#include <stdio.h>

int main() {
    int *ptr = NULL; // Points to nothing

    if (ptr == NULL) {
        printf("Pointer is null, cannot use.\n");
    }
    return 0;
}
