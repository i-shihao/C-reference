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
