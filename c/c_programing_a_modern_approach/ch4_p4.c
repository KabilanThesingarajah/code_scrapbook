/* Name: ch4_p4.c */
/* Purpose: converts an int to an octal */
/* Author: Kabilan Thesingarajah */

#include <stdio.h>

int
main(void)
{

	int num = 0;
	int oct1, oct2, oct3, oct4, oct5;
	oct1 = oct2 = oct3 = oct4 = oct5 = 0;
	printf("Enter a number between 0 and 32767: ");
	(void) scanf("%6d",&num);

	oct5 = num % 8;

	num /= 8;
	oct4 = num % 8;

	num /= 8;
	oct3 = num % 8;

	num /= 8;
	oct2 = num % 8;

	num /= 8;
	oct1 = num % 8;

	printf("In octal, your number is: %.1d%.1d%.1d%.1d%.1d\n", oct1, oct2, oct3, oct4, oct5);

	return 0;
}
