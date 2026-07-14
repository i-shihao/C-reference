#include <stdio.h>

int main ()
{
	int no=0;
	printf("Enter the no corresponding to weeks\n");
	scanf("%d",&no);

	switch(no) {
		case 1:
			printf("Its Monday\n");
			break;
		case 2:
			printf("Its Tuesday\n");
			break;
		case 3:
			printf("Its Wednesday\n");
			break;
		case 4:
			printf("Its Thursday\n");
			break;
		case 5:
			printf("Its Friday\n");
			break;
		case 6:
			printf("Its Staturday\n");
			break;
		case 7:
			printf("Its Sunday yoho\n");
			break;
		default:
			printf("Invalid no!\n");
		}

	return 0;
}
