#include <stdio.h>

typedef union {
	char a;
	int age;
	int id;
} student;

/* unions with struct */
union date {
	int day;
	int month;
	int year;
};

typedef struct {
	char *name;
	int age;
	union date d1;
} person;


int main ()
{
	student john;
	john.age= 122;
	printf("sizeof person%d\n",sizeof(john));

	union date d1;
	printf("sizeof d1 unoin:%d\n",sizeof(d1));

	person angeli;
	angeli.d1.day = 12;
	printf("sizeof angeli:%zu\n",sizeof(angeli));

	return 0;
}

