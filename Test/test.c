#include <stdio.h>

int main(void) {


	char name[18] = "Jonas Torstensson";

	printf("My name is %s\n", name);


	name[2] = 'M';
	printf("My name is %s\n", name);

	char food[] = "tuna";
	printf("The best food ever is %s\n", food);

	strcpy(food, "bacon");
	printf("The best food ever is %s\n", food);


	return 0;

}
