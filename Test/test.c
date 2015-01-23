/*
 * test.c
 *
 *  Created on: 23 jan 2015
 *      Author: jonastorstensson
 */

#include <stdio.h>

int main(void) {

	int eyes;
	int toes;

	printf("Enter number of eyes and toes: ");
	scanf("%d%d", &eyes, &toes);

	if (eyes == 2 && toes == 10) {
		printf("You are normal");
	} else {
		printf("You are weird");
	}

}
