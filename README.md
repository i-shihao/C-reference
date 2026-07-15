# C Language - Reference Guide for Quick Revision

This repository serves as a comprehensive C reference guide, covering fundamental to advanced topics. Perfect for quick revision and lookups.

## Table of Contents

### Basics
- [1. Basic Structure](#1-basic-structure)
- [2. Basic Syntax](#2-basic-syntax)
- [3. Variables & Data Types](#3-variables--data-types)
  - [3.1 Typedef](#31-typedef)
  - [3.2 Enumerations](#32-enumerations)
  - [3.3 Const Keyword](#33-const-keyword)
  - [3.4 Volatile Keyword](#34-volatile-keyword)
  - [3.5 Restrict Keyword](#35-restrict-keyword)

### Input/Output & Formatting
- [4. Format Specifiers & Escape Sequences](#4-format-specifiers--escape-sequences)

### Control Flow
- [5. If-Else Statements](#5-if-else-statements)
- [6. Switch Case](#6-switch-case)
- [7. Loops](#7-loops)
- [8. Break & Continue](#8-break--continue)
- [9. Goto Statement](#9-goto-statement)

### Functions
- [10. Type Casting](#10-type-casting)
- [11. Functions](#11-functions)
- [12. Recursion](#12-recursion)
- [13. Variable Arguments](#13-variable-arguments)
- [14. Error Handling](#14-error-handling)

### Arrays & Strings
- [15. Arrays](#15-arrays)
- [16. Strings](#16-strings)

### Pointers
- [17. Pointers](#17-pointers)
  - [17.1 Pointer Arithmetic](#171-pointer-arithmetic)
  - [17.2 Arrays & Pointers](#172-arrays--pointers)
  - [17.3 Arrays as Function Arguments](#173-arrays-as-function-arguments)
  - [17.4 Call by Value & Reference](#174-call-by-value--call-by-reference)
  - [17.5 Void Pointers](#175-void-pointers)
  - [17.6 Null Pointers](#176-null-pointers)
  - [17.7 Dangling Pointers](#177-dangling-pointers)
  - [17.8 Wild Pointers](#178-wild-pointers)
  - [17.9 Function Pointers](#179-function-pointers)

### Structures & Unions
- [18. Structures](#18-structures)
- [19. Unions](#19-unions)

### Memory Management
- [20. Memory Layout](#20-memory-layout)
- [21. Storage Classes](#21-storage-classes)
- [22. Static Variables](#22-static-variables)
- [23. Dynamic Memory Allocation](#23-dynamic-memory-allocation)
- [24. Memory Leaks](#24-memory-leaks)

### Operators & Preprocessor
- [25. Bitwise Operators](#25-bitwise-operators)
- [26. C Preprocessor](#26-c-preprocessor)
  - [26.1 Define & Include](#261-define--include)
  - [26.2 Macros](#262-macros)
  - [26.3 Predefined Macros](#263-predefined-macros)
  - [26.4 Other Directives](#264-other-directives)

### Advanced Topics
- [27. Header Files & Multi-file Programs](#27-header-files--multi-file-programs)
- [28. C & Assembly Integration](#28-c--assembly-integration)
- [29. Command Line Arguments](#29-command-line-arguments)
- [30. File I/O](#30-file-io)
  - [30.1 File I/O Functions](#301-file-io-functions)
- [31. Signal Handling](#31-signal-handling)

---

## 1. Basic Structure
Every C program follows a standard structure that tells the compiler how to interpret your code. Understanding this structure is crucial as it forms the foundation of all C programs.

```
#include <stdio.h>

int main () {
        int x = 12;
        printf("Hello wordl\n");
        return 0;
}
```

## 2. Basic Syntax
C has specific rules for writing code. Understanding syntax is like learning the grammar of the language - it tells you how to structure statements correctly.

```
#include <stdio.h>

#define pi 3.14

int main()
{
        int a = 10;
        float b = pi;
        char c = 'c';

        printf("%d\n",a);
        printf("%f\n",b);
        printf("%c\n",c);

        // proper block
        if (a==10) {
                printf("It is whole no :%d\n", a);
        }

        return 0;
}
```

## 3. Variables & Data Types
Variables are named memory locations that store data. Data types tell the compiler how much memory to allocate and what kind of operations you can perform.

```
#include <stdio.h>
#include <stdint.h>

int main () {

        int a = 1;
        float b = 3.14;
        char c = 'c';
        double pi = 3.14159;

        /* Low level data types */
        unsigned int positiveonly = 1000;
        short smallNumber = 32767;
        long largeNumber = 2147483647L;
        unsigned char byteValue = 255;

        /* Signed fixed-size types */
        int8_t  signed_8   = -128;                              // Exactly 8 bits
        int16_t signed_16  = -32768;                            // Exactly 16 bits
        int32_t signed_32  = -2147483648;                       // Exactly 32 bits
        int64_t signed_64  = -9223372036854775807LL;            // Exactly 64 bits

        /* Unsigned fixed-size types */
        uint8_t  unsigned_8  = 255;                               // Exactly 8 bits
        uint16_t unsigned_16 = 65535;                             // Exactly 16 bits
        uint32_t unsigned_32 = 4294967295U;                       // Exactly 32 bits
        uint64_t unsigned_64 = 18446744073709551615ULL;           // Exactly 64 bits

        /* Signed least-width */
        int_least8_t   signed_least_8   = -128;                    // At least 8 bits
        int_least16_t  signed_least_16  = -32768;                  // At least 16 bits
        int_least32_t  signed_least_32  = -2147483648;             // At least 32 bits
        int_least64_t  signed_least_64  = -9223372036854775807LL;  // At least 64 bits

        /* Unsigned least-width */
        uint_least8_t  unsigned_least_8  = 255;                    // At least 8 bits
        uint_least16_t unsigned_least_16 = 65535;                  // At least 16 bits
        uint_least32_t unsigned_least_32 = 4294967295U;            // At least 32 bits
        uint_least64_t unsigned_least_64 = 18446744073709551615ULL;// At least 64 bits

        /* Signed fastest-width */
        int_fast8_t   signed_fast_8   = -128;                      // At least 8 bits, fastest
        int_fast16_t  signed_fast_16  = -32768;                    // At least 16 bits, fastest
        int_fast32_t  signed_fast_32  = -2147483648;               // At least 32 bits, fastest
        int_fast64_t  signed_fast_64  = -9223372036854775807LL;    // At least 64 bits, fastest

        /* Unsigned fastest-width */
        uint_fast8_t  unsigned_fast_8  = 255;                      // At least 8 bits, fastest
        uint_fast16_t unsigned_fast_16 = 65535;                    // At least 16 bits, fastest
        uint_fast32_t unsigned_fast_32 = 4294967295U;              // At least 32 bits, fastest
        uint_fast64_t unsigned_fast_64 = 18446744073709551615ULL;  // At least 64 bits, fastest

        /* Pointer-sized */
        intptr_t  signed_ptr   = (intptr_t)NULL;                   // Holds any pointer (signed)
        uintptr_t unsigned_ptr = (uintptr_t)NULL;                  // Holds any pointer (unsigned)

        /* Maximum-width (largest integer type on the system) */
        intmax_t  signed_max   = INTMAX_MAX;                       // Largest signed integer
        uintmax_t unsigned_max = UINTMAX_MAX;                      // Largest unsigned integer

        /* Size of each data type */
        printf("Size of char: %zu bytes\n", sizeof(char));
        printf("Size of int: %zu bytes\n", sizeof(int));
        printf("Size of short: %zu bytes\n", sizeof(short));
        printf("Size of long: %zu bytes\n", sizeof(long));

        return 0;
}
```

### 3.1 Typedef
Typedef lets you create aliases for existing data types. Think of it like creating your own custom type names in C.

```
#include <stdio.h>

int main ()
{
        /* Typedef */
        typedef unsigned char DB;
        typedef unsigned short DW;
        typedef unsigned int  DD;
        typedef unsigned long DQ;

        DB a = 1;
        DW b = 2;
        DD c = 3;
        DQ d = 4;

        printf("size of DB:%d\n",sizeof(a));
        printf("size of DW:%d\n",sizeof(b));
        printf("size of DD:%d\n",sizeof(c));
        printf("size of DQ:%d\n",sizeof(d));

        return 0;
}
```

### 3.2 Enumerations
Enumerations create named integer constants. They make code more readable and type-safe for representing a set of related values.

```
#include <stdio.h>

/* enum */
enum state {
        on,
        off,
        running,
        dead
};

int main ()
{
        enum state cur_state  =  dead;

        switch(cur_state) {
        case 0:
                printf("machine is off\n");
                break;
        case 1:
                printf("machine is on\n");
                break;
        case 2:
                printf("machine is running\n");
                break;
        case 3:
                printf("machine is dead\n");
                break;
        default:
                printf("Invalid state!\n");
                ;
        }
        return 0;
}
```

### 3.3 Const Keyword
The const keyword creates read-only variables. It's used for constants, function parameters, and pointers to prevent unintended modifications.
However const is enforced by the compiler, not by hardware. The compiler prevents code that would modify const variables. However, in C, const doesn't guarantee that the variable is stored in read-only memory. For true read-only memory, use #define or string literals which are stored in the text segment.

```
#include <stdio.h>

int main ()
{
        /* Variables using const keyword */
        const int square = 2;
        const int triangle = 3;
        const char a = 'a';
        const float pi = 3.14;

        /* Const values are read only */
        // square = 3;
        // triangle = 4;
        // a = 'A';
        // pi = 3.15;

        /* const with pointers */
        int v1 = 100;
        int v2 = 200;
        int v3 = 300;

        const int* ptr1 = &v1;
        // *ptr1 = 300;                 // Cannot change value
        //ptr1 = &v2;                   // however pointer can be changed

        int* const ptr2 = &v2;
        *ptr2 = 400;                    // Value can be changed
        //ptr2 = &v1;                   // However pointer cannot be

        /* Both value and pointer cannot be changed */
        const int* const ptr3 = &v3;
        //ptr3 = &v2;                   // Cannot be changed
        //*ptr3 = 400;                  // Cannot be changed

        return 0;
}
```

### 3.4 Volatile Keyword
The volatile keyword tells the compiler that a variable's value might change unexpectedly. This prevents compiler optimizations that would assume the variable hasn't changed. It tells the compiler to avoid optimizing reads and writes to the variable. This is crucial for memory-mapped I/O where reading or writing can have side effects. Without volatile, the compiler might eliminate redundant reads or reorder operations, which could cause hardware bugs.

```
#include <stdio.h>
#include <stdint.h>

#define KBD_STATUS ((volatile uint8_t*)0x64)
#define KBD_DATA ((volatile uint8_t*)0x60)
#define KBD_DATA_READY 0x01


int main ()
{
        /* volatile ensures that its value always gets read from memory every
         * single time ensuring no complier optimization for this value  */

        while (!(*KBD_STATUS & KBD_DATA_READY)) {
                // Data not ready yet
        }

        uint8_t key = *(KBD_DATA);
        printf("Key:%d\n",key);

        return 0;
}
```

### 3.5 Restrict Keyword
The restrict keyword tells the compiler that a pointer is the only way to access the memory it points to. This enables better optimization by allowing the compiler to assume no aliasing occurs. It is an optimization hint that enables the compiler to generate faster code by assuming pointers don't overlap. This is particularly important for vectorization and loop optimization. However, if you violate the restrict contract (by passing overlapping pointers), the program behavior becomes undefined.
```
#include <stdio.h>

/* function to demonstrate restrict keyword */

void maybe_change(int *p)
{
        *p = 100;
}

int main ()
{
        /* Without restrict keyword */
        int a = 10;
        int *ptr = &a;
        *ptr = 20;
        maybe_change(ptr);
        int x = *ptr;
        printf("the value of x:%d\n",x);

        /* With restrict keyword */
        int* restrict ptr2 = &a;
        *ptr2 = 30;
        maybe_change(ptr2);
        int y = *ptr2;
        printf("the value of y:%d\n",y);

        return 0;
}
```
## 4. Format Specifiers & Escape Sequences
 Format specifiers tell printf() and scanf() how to interpret data. Escape sequences represent special characters in strings. Format specifiers tell printf() how to interpret binary data. When you use %d, printf reads 4 bytes and interprets them as a signed integer. The %x specifier reads the same bytes but displays them in hexadecimal format. Understanding this is crucial when debugging memory issues.

```
#include <stdio.h>

int main ()
{

        int no = 10;
        int hexa = 0xa;
        char b = 'b';
        float c = 3.14;
        int *ptr = &no;

        printf("Decimal format specifier:%d\n",no);
        printf("hex format specifier:%x\n",hexa);
        printf("character format specifier:%c\n",b);
        printf("float format specifier:%.2f\n",c);
        printf("memory address format specifier:%p\n",ptr);

        /* format specifier with width and alignmet */
        printf("memory address format specifier:%10d\n",no);
        printf("memory address format specifier:%-10d\n",no);

        /* esacpe sequences */

        printf("This is newline\n in action \n");
        printf("This is tab \t in action\t ok\n");
        printf("This is how we \"quote\" \n");
        printf("This is we use backlash \\ \n");

        return 0;
}
```
## 5. If-Else Statements
Conditional statements let your program make decisions based on conditions. The if-else structure executes code blocks based on boolean expressions. The if statement compiles to conditional jump instructions in assembly. The CPU evaluates the condition and either jumps over the code block or executes it. This is why conditions must be simple - complex conditions require multiple comparisons.

```
#include <stdio.h>

int main()
{
        int age = 0;
        printf("Enter you age\n");
        scanf("%d",&age);

        if(age>=18 && age<=90) {
                printf("You are eligible to drive\n");
        }else if (age <= 18) {
                printf("You cannot apply for driving licence\n");
        }else if (age >=90) {
                printf("You are too old to drive a car\n");
        }

        printf("Invalid age!");
        return 0;
}
```
## 6. Switch Case
The switch statement is an efficient alternative to multiple if-else statements when checking a single variable against multiple constant values
. Switch statements compile to jump tables in assembly, making them very efficient. Instead of comparing the value multiple times (like if-else), the switch statement uses the value as an index into a jump table. This is why switch only works with integer types.

```
#include <stdio.h>

int main ()
{
        int no=0;
        printf("Enter the no corresponding to weeks\n");
        scanf("%d",&no);

        switch(no) {
                case 1:
                        printf("Its Monday\n");
                        break;
                case 2:
                        printf("Its Tuesday\n");
                        break;
                case 3:
                        printf("Its Wednesday\n");
                        break;
                case 4:
                        printf("Its Thursday\n");
                        break;
                case 5:
                        printf("Its Friday\n");
                        break;
                case 6:
                        printf("Its Staturday\n");
                        break;
                case 7:
                        printf("Its Sunday yoho\n");
                        break;
                default:
                        printf("Invalid no!\n");
                }

        return 0;
}
```
## 7. Loops
Loops allow you to execute a block of code multiple times. C provides three types of loops for different use cases. Loops compile to jump instructions that either go back to the beginning or forward past the loop. The for loop is particularly efficient because it combines initialization, condition, and increment in a single line that the compiler can optimize well.
```
#include <stdio.h>

int main ()
{
        /* classic for loop */
        for (int i=0; i<10;i++) {
                printf("index:%d\n",i);
        }

        /* while loop */
        int num =1;
        while(num) {
                printf("while:%d\n",num);
                num++;
                if(num == 10)
                        num = 0;
        }

        /* do while loop */
        int once = 10;
        do{
                printf("do while:%d\n",once);
                once++;
        }while(once <=9);

        /* nested loops */
        for (int a = 0; a < 10; a++) {
                printf("nest loop:%d\n",a);
                for(int j =0;j <5;j++) {
                        printf("nest loop2:%d\n",j);
                }
        }

        return 0;
}
```

## 8. Break & Continue
These statements modify loop behavior. break exits the current loop entirely, while continue skips the current iteration and jumps to the next.
break and continue are implemented as unconditional jump instructions. break jumps to the code after the loop, while continue jumps to the loop's condition check (or increment in a for loop).

```
#include <stdio.h>

int main ()
{
        /* break example */
        int i = 0;
        while(i < 10) {
                printf("index:%d\n",i);
                if(i==5)
                        break;
                i++;
        }

        /* break in nested loop */
        int y = 0;
        int q = 0;
        while(y <10) {
                printf("y is:%d\n",y);
                while(q<5) {
                        if(q==3)
                                break;
                        printf("q is:%d\n",q);
                        q++;
                }
                y++;
        }

        /* continue example */
        for(int x =0;x<35; x++) {
                if( x >= 20 && x <= 30)
                        continue;
                printf("indice:%d\n",x);
        }

        return 0;
}
```

## 9. Goto Statement
Goto provides an unconditional jump to a labeled statement. While generally discouraged (can make code spaghetti), it has specific valid uses like breaking out of nested loops or error handling. goto compiles directly to a jump instruction in assembly, making it very efficient. This is why it's sometimes used in performance-critical code or kernel programming for error recovery. 

```
#include <stdio.h>
#include <stdlib.h>

int main ()
{
        /* goto statement */

        int no;
        printf("Enter any positive or negative no\n");
        scanf("%d",&no);

        if(no < 0)
                goto negative;
        goto positive;

        negative:
                printf("It is a negative no\n");
        return 0;

        positive:
                printf("it is a positive no\n");

        /* goto statements are used to break nested loops */
        for (int i =0;i<10;i++) {
                printf("index:%d\n",i);
                for(int j=0; j<5; j++) {
                        if (j == 4) {
                                goto end_loop;
                        }
                        printf("inside index:%d\n",j);
                }
        }

        end_loop:
                printf("nested loop has been terminated\n");

        /* It is mostly used in kernel programming to handle errors */
        int* a = (int*)malloc(1* sizeof(int));
        if(!a)
                goto free_mem;

        printf("memory has been allocated\n");
        free(a);
        return 0;

free_mem:
        free(a);
}
```
## 10. Type Casting
Type casting converts a value from one data type to another. C provides both implicit (automatic) and explicit (manual) casting. Type casting tells the compiler to reinterpret the bits of a value. When you cast a float to int, you're changing the binary representation from floating-point format to two's complement. When casting pointers, you're telling the compiler to interpret memory differently.
```
#include <stdio.h>
#include <stdlib.h>

int main ()
{

        /* Implicit typecasting */
        int a = 10;
        long b = a;
        printf("sizeof b:%d\n",sizeof(b));

        char c = 'c';
        int int_c = c;
        printf("int_c:%x\n",int_c);

        /* Explicit typecasting */
        float pi = 3.14;
        int int_pi = (int)pi;
        printf("int_pi:%d\n",int_pi);

        char d = 'd';
        int char_d = (int)d;
        printf("char_d:%x\n",char_d);

        /* pointer typecasting */
        int* int_ptr =(int*) malloc(2*sizeof(int));
        char* char_ptr = (char*)malloc(2*sizeof(char));
        void *void_ptr = malloc(2*sizeof(char));

        if(!int_ptr || !char_ptr || !void_ptr)
                return -1 ;

        free(int_ptr);
        free(char_ptr);
        free(void_ptr);

        return 0;
}
```

## 11. Functions
 Functions are reusable blocks of code that perform specific tasks. They help organize code, avoid duplication, and make programs easier to maintain. When a function is called, the CPU pushes the return address and parameters onto the stack. The function executes with its own stack frame containing local variables. After completion, the stack is unwound and execution returns to the calling function.

```
#include <stdio.h>

/* function declaration  prototype */
int sum2no(int x, int y);
int sub2no(int *p, int *p1);
void printname(char name []);
void printtoscreen(char *surname);
int sumofsquares(int x, int y);
int square(int a );

int main()
{
        int a= 10;
        int b= 20;
        int result = sum2no(a, b);
        printf("Result:%d\n",result);

        /* function with parameters */
        char name [] = "john doe";
        printname(name);

        /* function with pointer parameter */
        int c = result;
        int d = 40;
        int sub_result = sub2no(&d, &c);
        printf("sub result:%d\n",sub_result);

        /* function with no return value */
        char* surname = "John";
        printtoscreen(surname);

        /* function can call other function */
        int e = 2;
        int f = 4;
        int square_result = sumofsquares(e, f);
        printf("square_result:%d\n",square_result);

        return 0;
}

/* Function defination */
int sum2no(int x, int y)
{
        return x + y;
}

int sub2no(int *p, int *p1)
{
        return *p - *p1;
}

void printname(char name []) {
        printf("%s\n",name);
        return;
}

void printtoscreen(char *surname)
{
        int i = 0;
        while(*surname) {
                printf("index:%d char:%c\n",i,*surname);
                i++;
                *surname++;
        }
}

int sumofsquares(int x, int y)
{
        return square(x) + square(y);
}
int square(int a)
{
        return a * a;
}
```

## 12. Recursion
A recursive function is one that calls itself. Recursion is useful for problems that can be broken
into smaller, similar subproblems. Each recursive call creates a new stack frame with its own local variables. If recursion goes too deep, it can cause a stack overflow. Tail recursion optimization allows the compiler to reuse the same stack frame for recursive calls.
```
#include <stdio.h>

/* Recursive using fibonacci */
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

/* recursive using factorial */
int factorial(int n )
{
        if (n == 0 || n == 1)
                return n;

        printf("result is:%d\n",n);
        return n * factorial(n-1);
}

int main()
{
        int number = 10;
        printf("Factorial of %d\n",factorial(number));

        printf("Fibonacci of 7:%d\n",fibonacci(7));

        return 0;
}

```

## 13. Variable Arguments
Content for Variable Arguments

## 14. Error Handling
Content for Error Handling

## 15. Arrays
Arrays store multiple elements of the same type in contiguous memory. They provide efficient random access and are fundamental to many algorithms. An array name is actually a pointer to the first element. When you access arr[i], it's equivalent to *(arr + i). This pointer arithmetic is why array indexing is so efficient - it's just addition and dereferencing.

```
#include <stdio.h>

int main()
{
        /* Array initializatio */
        int number_arr [] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        char char_arr [] = {'a','b','c','d','e','f','g',0};
        char name [9] = "John Doe";
        float numbers [] = {1,1, 1.2, 1.3, 1,4};

        /* print values using while loop */
        int i =0;
        while(number_arr[i]) {
                printf("index:%d has the value%d\n",i,number_arr[i]);
                i++;
        };

        /* arrays with pointers */
        char *ptr = char_arr;
        int j = 0;
        while(*ptr) {
                printf("index:%d has the char:%c\n",j,*ptr);
                j++;
                *ptr++;
        }

        /* 2d arrays */
        int two_d_arr [2][3] = {{1, 2, 3}, {4, 5, 6}};
        for (int x = 0; x < 2; x++) {
                for(int y= 0; y < 3; y++) {
                        printf("row:%d col:%d has value %d\n",x,y,two_d_arr[x][y]);
                }
        }

        return 0;

}

```
## 16. Strings
Content for Strings

## 17. Pointers
Pointers are variables that store memory addresses. They're the most powerful and dangerous feature of C, giving you direct control over memory. Pointers directly represent memory addresses in the CPU's address space. When you dereference a pointer, the CPU reads or writes at that specific memory location. This is why pointer operations are fast - they're just memory operations.

```
#include <stdio.h>

int sum_2_no(int a, int b)
{
        return a + b;
}

int main()
{
        /* Pointer declaration */
        int value= 100;
        int *ptr = &value;

        char array [] = {1, 2, 3, 4, 5, 6, 7,};
        char *arr_ptr = array;

        char **ptr_2_ptr = &arr_ptr;

        /* using pointer to access values */
        *ptr = 200;
        *arr_ptr = 10;
        **ptr_2_ptr = 20;

        printf("value:%d\n",value);
        printf("array[0]:%d\n",array[0]);

        /* function pointer */
        int (*f_ptr)(int x, int y) = sum_2_no;
        int x =10;
        int y= 20;
        int r = f_ptr(x, y);
        printf("result:%d\n",r);

        /* generic pointer */
        void *g_ptr = &x;
        printf("the value of x after deference is:%d\n",*(int*)g_ptr);

        /* Null pointer */
        int* n_ptr = NULL;
        if (!n_ptr)
                printf("Null Pointer!\n");
        return 0;

}

```

### 17.1 Pointer Arithmetic
Arrays and pointers are closely related. Understanding this relationship lets you use arrays more efficiently and perform operations that would be difficult otherwise. Pointer arithmetic is CPU-level addressing. Adding 1 to an int* adds 4 to the memory address because ints are 4 bytes. This is why pointer types are important - they tell the compiler how much to increment the address.

```
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

```
### 17.2 Arrays as Function Arguments
When you pass an array to a function in C, the entire array is not copied. Instead, the function receives a pointer to the first element of the array. This means the function is working directly with the original array, so any changes made inside the function will affect the original array outside it.

```
#include <stdio.h>

int sumallno (int *ptr)
{
        int result = 0;
        int i = 1;
        while(*ptr)
        {
                result += *ptr;
                *ptr++;
        }
        return result;
}

void printchar(char *msg)
{
        while(*msg)
        {
                printf("char:%c\n",*msg);
                *msg++;
        }
}

int main ()
{
        char char_arr []  = {'a','b','c','d','e',0};
        int int_arr [] = {1,2,3,4,5,6,7,8,9,10};

        int *ptr = int_arr;
        char *ptr2 = char_arr;

        int result = sumallno(ptr);
        printf("result is:%d\n",result);

        printchar(ptr2);

        return 0;
}

```
### 17.3 Call by Value & Call by Reference
Call by Value, a copy of the data is passed to the function, so the original variable is safe from modification. In Call by Reference (achieved using pointers), the memory address is passed, allowing the function to modify the original variable.

```
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

```

### 17.4 Void Pointers
A void* pointer is a generic pointer that can hold the address of any data type (int, float, char, etc.). However, you cannot directly dereference it; you must cast it to a specific type before using 

```
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

```

### 17.5 Null Pointers
A Null Pointer is a pointer that is explicitly set to point to "nothing" (address 0). It is used as a safe guard to ensure a pointer is not pointing to random memory. You should always check if a pointer is NULL before using it.
```
#include <stdio.h>

int main() {
    int *ptr = NULL; // Points to nothing

    if (ptr == NULL) {
        printf("Pointer is null, cannot use.\n");
    }
    return 0;
}

```
### 17.6 Dangling Pointers
A Dangling Pointer points to a memory location that has already been freed or deleted (e.g., using free()). The pointer still holds the old address, but the data is gone, leading to undefined behavior if accessed.

```
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


```
### 17.7 Wild Pointers
A Wild Pointer is an uninitialized pointer. It contains a random garbage address that points to an unknown location in memory. Using it can crash your program or corrupt data.
```
#include <stdio.h>

int main() {
    int *ptr; // WILD POINTER! Not initialized, contains garbage address

    // *ptr = 10; // DANGER! Writing to random memory

    // Fix: Always initialize your pointers
    int a = 10;
    ptr = &a; // Now it's safe
    return 0;
}

```

### 17.8 Function Pointers
Content for Function Pointers

## 18. Structures
Content for Structures

## 19. Unions
Content for Unions

## 20. Memory Layout
Content for Memory Layout

## 21. Storage Classes
Content for Storage Classes

## 22. Static Variables
Content for Static Variables

## 23. Dynamic Memory Allocation
Content for Dynamic Memory Allocation

## 24. Memory Leaks
Content for Memory Leaks

## 25. Bitwise Operators
Content for Bitwise Operators

## 26. C Preprocessor
Content for C Preprocessor

### 26.1 Define & Include
Content for Define & Include

### 26.2 Macros
Content for Macros

### 26.3 Predefined Macros
Content for Predefined Macros

### 26.4 Other Directives
Content for Other Directives

## 27. Header Files & Multi-file Programs
Content for Header Files & Multi-file Programs

## 28. C & Assembly Integration
Content for C & Assembly Integration

## 29. Command Line Arguments
Content for Command Line Arguments

## 30. File I/O
Content for File I/O

### 30.1 File I/O Functions
Content for File I/O Functions

## 31. Signal Handling
Content for Signal Handling
