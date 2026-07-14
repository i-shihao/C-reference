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
