#include <stdio.h>

int main ()
{
	/* classic for loop */
	for (int i=0; i<10;i++) {
		printf("index:%d\n",i);
	}

	/* while loop */
	int num =1;
	while(num) {
		printf("while:%d\n",num);
		num++;
		if(num == 10)
			num = 0;
	}

	/* do while loop */
	int once = 10;
	do{
		printf("do while:%d\n",once);
		once++;
	}while(once <=9);

	/* nested loops */
	for (int a = 0; a < 10; a++) {
		printf("nest loop:%d\n",a);
		for(int j =0;j <5;j++) {
			printf("nest loop2:%d\n",j);
		}
	}

	return 0;
}
