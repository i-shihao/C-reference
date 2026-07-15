#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    /* Array name is a pointer to first element */
    printf("arr = %p\n", (void*)arr);
    printf("&arr[0] = %p\n", (void*)&arr[0]);

    /* Pointer arithmetic */
    int* ptr = arr;
    printf("ptr[0] = %d, *ptr = %d\n", ptr[0], *ptr);
    printf("ptr[1] = %d, *(ptr+1) = %d\n", ptr[1], *(ptr+1));

    /* Incrementing pointer */
    ptr++;  // Moves to next element
    printf("After ptr++: %d\n", *ptr);

    /* Difference between pointers */
    ptr = &arr[0];
    int* end = &arr[4];
    int elements = end - ptr + 1;
    printf("Array size: %d\n", elements);

    /* 2D array pointer arithmetic */
    int matrix[3][2] = {{1,2}, {3,4}, {5,6}};
    int (*rowPtr)[2] = matrix;  // Pointer to array of 2 ints

    printf("matrix[0][0]: %d\n", rowPtr[0][0]);
    printf("matrix[1][1]: %d\n", *(*(rowPtr + 1) + 1));

    /* Array of pointers */
    int a = 1, b = 2, c = 3;
    int* ptrs[] = {&a, &b, &c};
    printf("ptrs[1] points to: %d\n", *ptrs[1]);

    /* Pointer arithmetic with different types */
    char charArr[10];
    char* charPtr = charArr;
    int* intPtr = (int*)charArr;

    printf("charPtr+1 moves %ld bytes\n", (charPtr+1) - charPtr);
    printf("intPtr+1 moves %ld bytes\n", (char*)(intPtr+1) - charPtr);
    return 0;
}
