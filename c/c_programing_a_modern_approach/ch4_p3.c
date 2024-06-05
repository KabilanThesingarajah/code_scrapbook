/* Name: ch4_p3.c */
/* Purpose: reverse a three digit number without arithmetic */
/* Author: Kabilan Thesingarajah */

#include <stdio.h>

int
main(void)
{

	int num1, num2, num3;
	num1 = num2 = num3 = 0;
	printf("Enter a three-digit number: ");
	(void) scanf("%1d%1d%1d",&num1, &num2, &num3);
	printf("The reversal is: %.1d%.1d%.1d\n", num3, num2, num1);

	return 0;
}
