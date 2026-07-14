// Basic syntex
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

