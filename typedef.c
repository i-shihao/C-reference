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
