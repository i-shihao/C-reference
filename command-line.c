#include <stdio.h>

int main( int argc, char *argv[] )
{
	printf("Number of arguments:%d\n", argc);
	printf("argv[0] is filename:%s\n", argv[0]);

	for( int i=0; i<argc; i++){
		if(i == 0){
			printf("iindex:%d has value:%s\n",i,argv[i]);
			continue;
		}
		printf("index:%d has value:%s\n",i,argv[i]);
	}

	return 0;
}

