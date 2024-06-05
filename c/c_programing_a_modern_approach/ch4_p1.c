/* Name: ch4_p1.c */
/* Purpose: reverse a 2 digit number */
/* Author: Kabilan Thesingarajah*/

#include <stdio.h>

int
main(void)
{

	int num = 0;
	printf("Enter a two-digit number: ");
	(void) scanf("%2d",&num);
	printf("The reversal is: %.1d%.1d\n", num%10, num/10);

	return 0;
}
