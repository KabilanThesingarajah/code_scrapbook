/* Name: ch4_p2.c */
/* Purpose: reverse a three digit number */
/* Author: Kabilan Thesingarajah*/

#include <stdio.h>

int
main(void)
{

	int num = 0;
	printf("Enter a three-digit number: ");
	(void) scanf("%3d",&num);
	printf("The reversal is: %.1d%.1d%.1d\n", num % 10, (num/10) % 10 , num / 100);

	return 0;
}
