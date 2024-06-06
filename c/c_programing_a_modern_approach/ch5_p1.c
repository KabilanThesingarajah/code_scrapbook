/* Name: ch5_p1.c */
/* Purpose: calculate how many digits a number contains */
/* Author: Kabilan Thesingarajah */

#include <stdio.h>

int
main(void)
{

	int num = 0;
	int digits = -1;
	printf("Enter a number: \n");
	(void) scanf("%4d",&num);

	if (num < 0) {
		num = -num;
	}
	if (num == 0) {
		digits = 0;
	} else if ( num < 10) {
		digits = 1;
	} else if (num < 100) {
		digits = 2;
	} else if (num < 1000) {
		digits = 3;
	} else{
		digits = 4; // we do not expect more than a 4 digit number
	}

	printf("The number %d has %d digit(s)\n", num, digits);

	return 0;
}
