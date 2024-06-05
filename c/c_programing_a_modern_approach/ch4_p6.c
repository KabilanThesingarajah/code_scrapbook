/* Name: ch4_p6.c */
/* Purpose: Compute the value of a EAN check digit */
/* Author: Kabilan Thesingarajah */

#include <stdio.h>

int
main(void)
{


	int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, k1;
	int first_sum, second_sum, total;
	printf("Enter the first 12 digits of a EAN: ");
	(void) scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5, &k1);
	first_sum = i1 + i3 + i5 + j2 + j4 + k1;
	second_sum = d + i2 + i4 + j1 + j3 + j5;
	total = 3 * first_sum + second_sum;
	
	printf("Check digit: %d\n", 9 - ((total - 1) % 10));

	return 0;
}
