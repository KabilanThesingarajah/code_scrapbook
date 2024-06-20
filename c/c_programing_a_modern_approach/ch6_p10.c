/* Name: ch6_p10.c */
/* Purpose: find which of n dates come earlier */
/* Author: Kabilan Thesingarajah */

#include <stdio.h>

int
isAlessthanB(int m1, int d1, int y1, int m2, int d2, int y2)
{

	if (y1 < 100){
		if (y1 > 24){ // 19th centuary
			y1 += 1900;
		} else{
			y1 += 2000;
		}
	}

	if (y2 < 100){
		if (y2 > 24){ // 19th centuary
			y2 += 1900;
		} else{
			y2 += 2000;
		}
	}

	if (y1 > y2) {
		return 0;
	} else if (y1 < y2) {
		return 1;
	}

	/* both years are equal */
	if (m1 > m2) {
		return 0;
	} else if (m1 < m2) {
		return 1;
	}

	/* both months are equal */
	if (d1 > d2) {
		return 1;
	} else if (d1 < d2) {
		return 0;
	} else {
		return 0; // by convention as A is equal to B not less than.
	}

}

int
main(void)
{

	int d1, m1, y1, de, me, ye;

	de = 31;
	me = 12;
	ye = 3000;

	printf("Enter a date (mm/dd/yy): ");
	scanf("%d /%d /%d", &m1, &d1, &y1);

	while ( !(d1 == 0 && m1 == 0 && y1 == 0) ) {


		if ( isAlessthanB(m1, d1, y1, me, de, ye) ) {
			de = d1;
			me = m1;
			ye = y1;
		}

		printf("Enter a date (mm/dd/yy): ");
		scanf("%d /%d /%d", &m1, &d1, &y1);

	}
	printf("%d/%.2d/%.2d is the earliest date\n", me, de, ye);
	
	return 0;
}
