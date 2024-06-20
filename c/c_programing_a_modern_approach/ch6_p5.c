/* Name: ch6_p5.c */
/* Purpose: reverse an integer */
/* Author: Kabilan Thesingarajah */

#include <stdio.h>

int
main(void)
{

	int num = 0;
	printf("Enter a two-digit number: ");
	scanf("%2d",&num);
	printf("The reversal is: ");
	do {
		num /= 10;
		printf("%d", num);
	} while (num != 0);
	

	return 0;
}
