/* Name: ch6_p3.c */
/* Purpose: reduces a fraction to lowest terms */
/* Author: Kabilan Thesingarajah */

#include <stdio.h>

int
main(void)
{

	int a, b, m, n, r, gcd;
	a = b = m = n = r = gcd = 0;
	printf("Enter a fraction: ");
	scanf("%d /%d", &a, &b);
	
	m = a;
	n = b;

	while (n != 0) {
		r = m % n;
		m = n;
		n = r;
	}
	gcd = m;
	/* printf("Greatest common divisor: %d\n", gcd); */

	printf("In lowest terms: %d/%d\n", a/gcd, b/gcd);
	

	return 0;
}
