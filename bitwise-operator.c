#include <stdio.h>
#include <stdint.h>
int main()
{
	/* Bitwise OR */
	uint8_t intial_v = 0b11110000;
	uint8_t second_v = 0b00001111;
	uint8_t combined = intial_v | second_v;
	printf("or:%b\n",combined);

	/* bitwise AND */
	combined = intial_v & 0b11100000;
	printf("and:%b\n",combined);

	/* bitwise xor */
	combined = intial_v ^ 0x02;
	printf("xor:%b\n", combined);

	/* bitwise not */
	combined = ~combined ;
	printf("not:%b\n",combined);

	int a = 2;
	int b = 4;
	/* bitwise shift operators */
	a = a << 1;
	b = b >> 1;
	printf("leftshift:%d\n",a);
	printf("rightshift:%d\n",b);

	/* Setting a bit  */
	combined = (intial_v | 0x02);
	printf("set result:%b\n",combined);

	/* clearing a bit */
	uint8_t temp = 0x00;
	combined = ~(temp | 0x02) & combined ;
	printf("clear result:%b\n",combined);

	/* toggling a bit */
	temp = 0x00;
	combined = combined ^ 0x02 ;
	printf("toggle result:%b\n",combined);


	return 0;
}
