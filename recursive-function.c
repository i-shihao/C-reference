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

