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
	// *ptr1 = 300;			// Cannot change value
	//ptr1 = &v2;			// however pointer can be changed

	int* const ptr2 = &v2;
	*ptr2 = 400;			// Value can be changed
	//ptr2 = &v1;			// However pointer cannot be

	/* Both value and pointer cannot be changed */
	const int* const ptr3 = &v3;
	//ptr3 = &v2;			// Cannot be changed
	//*ptr3 = 400;			// Cannot be changed

	return 0;
}
