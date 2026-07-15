#include <stdio.h>

int main()
{
	/* Array initializatio */
	int number_arr [] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	char char_arr [] = {'a','b','c','d','e','f','g',0};
	char name [9] = "John Doe";
	float numbers [] = {1,1, 1.2, 1.3, 1,4};

	/* print values using while loop */
	int i =0;
	while(number_arr[i]) {
		printf("index:%d has the value%d\n",i,number_arr[i]);
		i++;
	};

	/* arrays with pointers */
	char *ptr = char_arr;
	int j = 0;
	while(*ptr) {
		printf("index:%d has the char:%c\n",j,*ptr);
		j++;
		*ptr++;
	}

	/* 2d arrays */
	int two_d_arr [2][3] = {{1, 2, 3}, {4, 5, 6}};
	for (int x = 0; x < 2; x++) {
		for(int y= 0; y < 3; y++) {
			printf("row:%d col:%d has value %d\n",x,y,two_d_arr[x][y]);
		}
	}

	return 0;

}
