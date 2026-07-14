// Variables and Data Types
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
	int8_t  signed_8   = -128;				// Exactly 8 bits
	int16_t signed_16  = -32768;				// Exactly 16 bits
	int32_t signed_32  = -2147483648;			// Exactly 32 bits
	int64_t signed_64  = -9223372036854775807LL;		// Exactly 64 bits

	/* Unsigned fixed-size types */
	uint8_t  unsigned_8  = 255;				  // Exactly 8 bits
	uint16_t unsigned_16 = 65535;				  // Exactly 16 bits
	uint32_t unsigned_32 = 4294967295U;			  // Exactly 32 bits
	uint64_t unsigned_64 = 18446744073709551615ULL;		  // Exactly 64 bits

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

