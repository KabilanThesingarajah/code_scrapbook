/* Name: ch5_p2.c */
/* Purpose: convert 24-hour time to 12-hour time */
/* Author: Kabilan Thesingarajah */

#include <stdio.h>
#include <string.h>

int
main(void)
{

	int hour, min;
	char meridiem[] = "E";
	printf("Enter a 24-hour time: \n");
	(void) scanf("%d:%d",&hour, &min);
	if ( 0 <= hour && hour <= 11) {
		strcpy(meridiem, "A");
	} else {
		strcpy(meridiem, "P");
		if (13 <= hour) {
			hour -= 12;
		}
	}
	printf("Equivalent 12-hour time: %.2d:%.2d %sM\n", hour, min, meridiem);

	return 0;
}
