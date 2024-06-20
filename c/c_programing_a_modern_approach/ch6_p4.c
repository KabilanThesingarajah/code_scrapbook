/* Name: ch6_p4.c */
/* Purpose: compare prices of 2 brokers */
/* Author: Kabilan Thesingarajah */

#include <stdio.h>

int
main(void)
{

	float commission, value;
	value = -1;

	printf("Enter the value of trade: ");
	scanf("%f",&value);

	while (value != 0) {

		if (value < 2500.00f) {
			commission = 30.00f + .017f * value;
		} else if (value < 6250.00f) {
			commission = 56.00f + .0066f * value;
		} else if (value < 20000.00f) {
			commission = 76.00f + .0034f * value;
		} else if (value < 50000.00f) {
			commission = 100.00f + .0022f * value;
		} else if (value < 500000.00f) {
			commission = 155.00f + .0011f * value;
		} else {
			commission = 255.00f + .0009f * value;
		}

		if (commission < 39.00f){
			commission = 39.00f;
		}

		printf("commission: $%.2f\n", commission);

		printf("Enter the value of trade: ");
		scanf("%f",&value);
	}


	return 0;
}
