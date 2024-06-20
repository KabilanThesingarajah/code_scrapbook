/* Name: ch6_p6.c */
/* Purpose: prints even squares up to n*/
/* Author: Kabilan Thesingarajah */

#include <stdio.h>

int
main(void)
{

	int n;
	n = 0;
	printf("Enter a number n: ");
	scanf("%d", &n);
	
	for (int i = 2; i*i <= n ; i+= 2) {
		printf("%d\n", i*i);
		
	}
	
	

	return 0;
}
