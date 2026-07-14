#include <stdio.h>

int main()
{
	int age = 0;
	printf("Enter you age\n");
	scanf("%d",&age);

	if(age>=18 && age<=90) {
		printf("You are eligible to drive\n");
	}else if (age <= 18) {
		printf("You cannot apply for driving licence\n");
	}else if (age >=90) {
		printf("You are too old to drive a car\n");
	}

	printf("Invalid age!");
	return 0;
}
