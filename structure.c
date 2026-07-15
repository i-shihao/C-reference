#include <stdio.h>

struct student {
	char *name;
	int age;
	int marks;
	char *class;
};

/* nested stucture */

struct date {
	int day;
	int month;
	int year;
};

struct person {
	char *name;
	struct date birthday;
};

/* struct with typedef */
typedef struct {
	int items;
	int useless_items;
	int sold_items;
} warehouse;

/* declare and create variables */
struct {
	int name;
	int age;
} s1, s2;


/* structure with tight padding */

#pragma pack(1)
typedef struct {
	char *name;
	int age;
	char a;
	int id;
} example;
#pragma pack()

typedef struct {
	char c;
	int id;
	char b;
}__attribute__((packed)) packed_struct;


typedef struct {
	unsigned char flag1 : 1;
	unsigned char flag2 : 1;
	unsigned char flag3 : 1;
	unsigned char flag4 : 5;
}flags;

int addtwo(int a, int b){
	return a + b ;
}

typedef struct {
	int (*sumtwo)(int,int);
} struct_with_fp;

int main()
{
	/* initializing structures */
	struct student epsilon;
	epsilon.age = 12;
	epsilon.marks = 100;

	struct person zeta;
	zeta.birthday.day = 11;
	zeta.birthday.month = 11;
	zeta.birthday.year = 2011;

	warehouse w1;
	w1.items = 100;
	w1.sold_items= 50;
	w1.useless_items = 20;

	s1.name= 0x61;
	s1.age = 11;

	example e1;
	printf("size of e1:%d\n",sizeof(e1));

	packed_struct p_s;
	printf("size of p_s:%d\n",sizeof(p_s));

	flags f;
	printf("size of f:%d\n",sizeof(f));

	struct_with_fp fp1;
	fp1.sumtwo = addtwo;
	int a = 10;
	int b = 20;
	int result = fp1.sumtwo(a,b);

	printf("result:%d\n",result);
	return 0;
}
