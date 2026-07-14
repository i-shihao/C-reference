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

### Basic Structure
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

### Basic syntex
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

### Variables and Data Types
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
Content for Typedef

### 3.2 Enumerations
Content for Enumerations

### 3.3 Const Keyword
Content for Const Keyword

### 3.4 Volatile Keyword
Content for Volatile Keyword

### 3.5 Restrict Keyword
Content for Restrict Keyword

## 4. Format Specifiers & Escape Sequences
Content for Format Specifiers & Escape Sequences

## 5. If-Else Statements
Content for If-Else Statements

## 6. Switch Case
Content for Switch Case

## 7. Loops
Content for Loops

## 8. Break & Continue
Content for Break & Continue

## 9. Goto Statement
Content for Goto Statement

## 10. Type Casting
Content for Type Casting

## 11. Functions
Content for Functions

## 12. Recursion
Content for Recursion

## 13. Variable Arguments
Content for Variable Arguments

## 14. Error Handling
Content for Error Handling

## 15. Arrays
Content for Arrays

## 16. Strings
Content for Strings

## 17. Pointers
Content for Pointers

### 17.1 Pointer Arithmetic
Content for Pointer Arithmetic

### 17.2 Arrays & Pointers
Content for Arrays & Pointers

### 17.3 Arrays as Function Arguments
Content for Arrays as Function Arguments

### 17.4 Call by Value & Call by Reference
Content for Call by Value & Call by Reference

### 17.5 Void Pointers
Content for Void Pointers

### 17.6 Null Pointers
Content for Null Pointers

### 17.7 Dangling Pointers
Content for Dangling Pointers

### 17.8 Wild Pointers
Content for Wild Pointers

### 17.9 Function Pointers
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
