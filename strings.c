#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello"; // Array of characters
    char *str2 = "World";  // Pointer to a string literal

    printf("%s %s\n", str1, str2); // Output: Hello World
    printf("Length of str1: %zu\n", strlen(str1)); // Output: 5
    return 0;
}
