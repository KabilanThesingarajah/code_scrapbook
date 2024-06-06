/* Name: ch5_p4.c */
/* Purpose: converts wind speed to knots**/
/* Author: Kabilan Thesingarajah */

#include <stdio.h>

int
main(void)
{

	float wind = 0;
	printf("Enter Wind Speed: ");
	scanf("%f", &wind);

	printf("The wind is classified as: ");
	if (wind < 1) {
		printf("Calm\n");
	} else if (wind < 4) {
		printf("Light air\n");
	} else if (wind < 28) {
		printf("Breeze\n");
	} else if (wind < 48) {
		printf("Gale\n");
	} else if (wind < 63) {
		printf("Storm\n");
	} else {
		printf("Hurricane\n");
	}

	return 0;
}
