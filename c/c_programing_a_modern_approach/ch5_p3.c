/* Name: ch5_p3.c */
/* Purpose: compare prices of 2 brokers */
/* Author: Kabilan Thesingarajah */

#include <stdio.h>

int
main(void)
{

	float commission1, commission2, value, share_price;
	int share_num;
	printf("Enter the number of shares: ");
	(void) scanf("%d",&share_num);
	printf("Enter the price per share: ");
	(void) scanf("%f", &share_price);

	value = share_price * share_num;

	if (value < 2500.00f) {
		commission1 = 30.00f + .017f * value;
	} else if (value < 6250.00f) {
		commission1 = 56.00f + .0066f * value;
	} else if (value < 20000.00f) {
		commission1 = 76.00f + .0034f * value;
	} else if (value < 50000.00f) {
		commission1 = 100.00f + .0022f * value;
	} else if (value < 500000.00f) {
		commission1 = 155.00f + .0011f * value;
	} else {
		commission1 = 255.00f + .0009f * value;
	}

	if (commission1 < 39.00f){
		commission1 = 39.00f;
	}

	if (share_num < 2000) {
		commission2 = 33.00f + 0.03f * share_num;
	} else {
		commission2 = 33.00f + 0.02f * share_num;
	}

	printf("commission1: $%.2f\n", commission1);
	printf("commission2: $%.2f\n", commission2);

	return 0;
}
