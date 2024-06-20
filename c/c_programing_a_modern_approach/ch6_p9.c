/* Name: ch6_p9.c */
/* Purpose: calculate payments for a loan */
/* Author: Kabilan Thesingarajah*/

#include <stdio.h>

int
main(void)
{

	float loan, r, monthly;
	int n;
	printf("Enter amount of loan: ");
	scanf("%f",&loan);

	printf("Enter amount of interest rate: ");
	scanf("%f",&r);

	printf("Enter amount of monthly payment: ");
	scanf("%f",&monthly);

	printf("Enter the number of payments: ");
	scanf("%d", &n);
	
	float balance = loan;

	for (int i = 0; i < n; i++) {
		balance *= (1 + r/1200);
		balance -= monthly;
		printf("Balance remaining after payment %d: %.2f\n", i+1, balance);
	}

	return 0;
}
