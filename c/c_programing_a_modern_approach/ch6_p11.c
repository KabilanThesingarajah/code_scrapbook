/* Name: ch6_p11.c */
/* Purpose: calculates the nth taylor approximation of e */
/* Author: Kabilan Thesingarajah */

#include <stdio.h>
#include <math.h>

int
main(void)
{

	int n;
	float e; // may need to test with other datatypes introduced in the next chapter.
	n = 0;
	e = 0.0f;
	printf("Enter the order of the approximation n: ");
	scanf("%d", &n);

	for (int i = 0; i <= n; i++) {
		e += 1/ tgamma(i+1);
	}

	printf("the value of e is : %f\n", e);
	
	

	return 0;
}
