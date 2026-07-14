#include <stdio.h>

int main ()
{
	/* break example */
	int i = 0;
	while(i < 10) {
		printf("index:%d\n",i);
		if(i==5)
			break;
		i++;
	}

	/* break in nested loop */
	int y = 0;
	int q = 0;
	while(y <10) {
		printf("y is:%d\n",y);
		while(q<5) {
			if(q==3)
				break;
			printf("q is:%d\n",q);
			q++;
		}
		y++;
	}

	/* continue example */
	for(int x =0;x<35; x++) {
		if( x >= 20 && x <= 30)
			continue;
		printf("indice:%d\n",x);
	}

	return 0;
}
