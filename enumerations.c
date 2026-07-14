#include <stdio.h>

/* enum */
enum state {
	on,
	off,
	running,
	dead
};

int main ()
{
	enum state cur_state  =  dead;

	switch(cur_state) {
	case 0:
		printf("machine is off\n");
		break;
	case 1:
		printf("machine is on\n");
		break;
	case 2:
		printf("machine is running\n");
		break;
	case 3:
		printf("machine is dead\n");
		break;
	default:
		printf("Invalid state!\n");
		;
	}
	return 0;
}

