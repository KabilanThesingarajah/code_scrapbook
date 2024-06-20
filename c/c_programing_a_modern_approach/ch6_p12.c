/* Name: ch6_p12.c */
/* Purpose: compute e with last term less than epsilon*/
/* Author: Kabilan Thesingarajah */

#include <stdio.h>

int
my_factorial(int i)
{
	int prod = 1;

	for (int j = 1; j <= i; j++) {
		prod *= j;
	}
	return prod;
}

int
main(void)
{

	double epn;
	double e; // may need to test with other datatypes introduced in the next chapter.
	epn = 0;
	e = 0.0f;
	printf("Enter the bounds for the smallest term: ");
	scanf("%lf", &epn);

	double epk = 1.0f;

	for (int i = 1; epn <= epk; i++) {
		e += epk;
		epk = 1.0f/my_factorial(i);
	}

	printf("the value of e is : %lf\n", e);
	
	

	return 0;
}
