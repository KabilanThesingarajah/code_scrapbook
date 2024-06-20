/* Name: ch6_p8.c */
/* Purpose: prints a one month calendar */
/* Author: Kabilan Thesingarajah */

#include <stdio.h>

int
main(void)
{

	int days, start;
	days = 0;
	printf("Enter number of days in month: ");
	scanf("%d", &days);

	printf("Enter starting day of the week. (1=Sun, 7=Sat): ");
	scanf("%d", &start);

	start--; //as we want 0 based indexing

	for (int j = 0; j < start ; j++) {
		printf("   ");
		
	}
	

	for (int i = 1; i <= days; start++, i++) {
		if (start % 7 == 0) {
			printf("\n");
		}
		printf("%.2d ", i);
		
	}
	printf("\n");
	
	
	


	return 0;
}
