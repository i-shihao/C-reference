#include <stdio.h>
#include <stdint.h>

#define KBD_STATUS ((volatile uint8_t*)0x64)
#define KBD_DATA ((volatile uint8_t*)0x60)
#define KBD_DATA_READY 0x01


int main ()
{
	/* volatile ensures that its value always gets read from memory every
	 * single time ensuring no complier optimization for this value  */

	while (!(*KBD_STATUS & KBD_DATA_READY)) {
		// Data not ready yet
	}

	uint8_t key = *(KBD_DATA);
	printf("Key:%d\n",key);

	return 0;
}
