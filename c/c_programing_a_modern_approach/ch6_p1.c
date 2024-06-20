/* Name: ch6_p1.c */
/* Purpose: find the largest of some integers */
/* Author:  */

#include <stdio.h>

int
main(void)
{

	float i = 0;
	float largest = 0;
	do {
		printf("Enter a number: ");
		scanf("%f", &i);
		if (i > largest) {
			largest = i;
		}
	} while (i > 0);

	printf("The largest number entered was %.2f\n", largest);
	

	return 0;
}
