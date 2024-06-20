/* Name: ch6_p2.c */
/* Purpose: calculate gcd */
/* Author: Kabilan Thesingarajah */

#include <stdio.h>

int
main(void)
{

	int a, b, gcd, m, n, r;
	a = b = gcd = m = n = r = 0;
	printf("Enter 2 integers: ");
	scanf("%d%d", &a, &b);


	m = a;
	n = b;

	while (n != 0) {
		r = m % n;
		m = n;
		n = r;
	}
	gcd = m;
	printf("Greatest common divisor: %d\n", gcd);
	



	return 0;
}
