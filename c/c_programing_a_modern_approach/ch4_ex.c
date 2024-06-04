/* Name: ch4_ex.c */
/* Purpose:  */
/* Author: */

#include <stdio.h>
void q4_01();
void q4_02();
void q4_03();
void q4_04();
void q4_05();
void q4_06();
void q4_07();
void q4_08();
void q4_09();
void q4_10();
void q4_11();
void q4_12();
void q4_13();
void q4_14();
void q4_15();

void
q4_01()
{
int i, j;
	i = 5; j = 3;
	printf("%d %d", i / j, i % j); // 1.666666 2

	printf("b)\n");
	i = 2; j = 3;
	printf("%d", (i + 10) % j); // 0

	printf("c)\n");
	i = 7; j = 8; k = 9;
	printf("%d", (i + 10) % k/j); // 1

	printf("d\n");
	i = 1; j = 2; k = 3;
	printf("%d", (i + 5) % (j + 2) / k);// 0.666666

}

}

void
q4_02()
{
	/* will give the same result as they do not return anything, and have no side effect. */
int i, j;
	i = 5;
	j = 6;
	if ( (-i)/j == -(i/j)) {
		printf("equal!\n");
	}
}

void
q4_03()
{
	/* a) `8 / 5` produces `1.6` or `1` */
	printf("%d\n", 8/5);
	printf("%f\n", 8/5);

	printf("b)\n");
	/* b) `-8 / 5` produces `-1.6` or `-1` or `-2` */

	printf("c)\n");
	/* c) `8 / - 5` produces `-1.6` or `-1` or `-2` */

	printf("d)\n");
	/* d) `-8 / -5` produces `1.6` or `1` (unsure) */

}





void
q4_04()
{
	/* c99 always rounds negative numbers towards the 0. */
	printf("a)\n");
	/* a) `8 / 5` produces `1.6` or `1` */
	printf("b)\n");
	/* b) `-8 / 5` produces `-1.6` or `-1` */
	printf("c)\n");
	/* c) `8 / - 5` produces `-1.6` or `-1` */
	printf("d)\n");
	/* d) `-8 / -5` produces `1.6` or `1` */
}


void
q4_05()
{
	printf("a)\n");
	/* a) `8 % 5` produces `3` */
	printf("b)\n");
	/* b) `-8 % 5` produces `-3` or `2` */
	printf("c)\n");
	/* c) `8 % - 5` produces `-3` or `2` */
	printf("d)\n");
	/* d) `-8 % -5` produces `-3` or `2` */
}


void
q4_06()
{
	printf("a)\n");
	/* a) `8 % 5` produces `3` */
	printf("b)\n");
	/* b) `-8 % 5` produces `-3` */
	printf("c)\n");
	/* c) `8 % - 5` produces  or `2` */
	printf("d)\n");
	/* d) `-8 % -5` produces `-3` */
}


void
q4_04_7()
{
	printf("They are not equivalent. For example if the upc is 10, then the first algorithm gives 0, but the second algorithm gives 10. This is due to modulo arithmetic.\n");
}

void
q4_08()
{
	printf("In part 7. We proved that the two algorithms are not equivalent, and the line of code is that exact 2 algorithms, hence we cannot swap the two and have the same program.\n");
}


void
q4_09()
{
	printf("a)\n");
	i = 7; j = 8;
	i *= j + 1;
	printf("%d %d", i, j); //63 8
	printf("b)\n");
	i = j = k = 1;
	i += j += k;
	printf("%d %d %d", i, j, k); // 3 2 1
	printf("c)\n");
	i = 1; j = 2; k = 3;
	i -= j -= k;
	printf("%d %d %d", i, j, k); // 2 -1 3
	printf("d)\n");
	i = 2; j = 1; k = 0;
	i *= j *= k;
	printf("%d %d %d", i, j, k); // 0 0 0

}


void
q4_10()
{
	printf("a)\n");
	i = 6;
	j = i += i; // TODO what is the precedence?
	printf("%d %d", i, j); // 12 12
	printf("b)\n");
	i = 5;
	j = (i -= 2) + 1;
	printf("%d %d", i, j); // 3 4
	printf("c)\n");
	i = 7;
	j = 6 + (i = 2.5);
	printf("%d %d", i, j); // 2 8
	printf("d)\n");
	i = 2; j = 8;
	j = (i = 6) + (j = 3); // undefined behaviour
	printf("%d %d", i, j); // 6 9
}


void
q4_11()
{

	printf("a)\n");
	i = 1;
	printf("%d ", i++ - 1); // 0
	printf("%d ", i); // 0
	printf("b)\n");
	i = 10; j = 8;
	printf("%d ", i++ - ++j); // 1
	printf("%d %d", i, j); // 11 9
	printf("c)\n");
	i = 7; j = 8;
	printf("%d ", i++ - ++j); // 1
	printf("%d %d", i, j); // 11 9
	printf("d)\n");
	i = 3; j = 4; k = 5;
	printf("%d ", i++ - ++j + --k); // 2
	printf("%d %d %d", i, j, k); // 4 4 4
}

void
q4_12()
{
	printf("a)\n");
	i = 5;
	j = ++i * 3 - 2;
	printf("%d %d", i, j); // 6 16
	printf("b)\n");
	i = 5;
	j = 3 - 2 * i++;
	printf("%d %d", i, j); // 6 -7
	printf("c)\n");
	i = 7;
	j = 3 * i-- + 2;
	printf("%d %d", i, j); // 6 20
	printf("d)\n");
	i = 7;
	j = 3 + --i * 2;
	printf("%d %d", i, j); // 6 15
}
void
q4_13()
{
	printf("unsure, but guessing `i++` is the equivalent notation to `i += 1`\n");
}


void
q4_14()
{

	printf("a)\n");
	/* a) `a * b - c * d + e` is equivalent to `((a * b) - (c * d)) + e` */
	printf("b)\n");
	/* b) `a / b % c / d` is equivalent to `((a / b) % c) / d` */
	printf("c)\n");
	/* c) `- a - b + c - + d` is equivalent to `( ( ( (-a) - b) + c) - (+d))` */
	printf("d)\n");
	/* d) `a * - b / c - d` is equivalent to `( (a * (- b) ) / c) - d)` */

}


void
q4_15()
{
	printf("a)\n");
	/* a) `i += j; // i = 3, j = 2` */
	printf("b)\n");
	/* b) `i--; // i = 0, j = 2` */
	printf("c)\n");
	/* c) `i * j / 1; // i = 1, j = 2` */
	printf("d)\n");
	/* d) `i % ++j; // i = 1, j = 3` */
}

int
main(void)
{



	return 0;
}

printf("a)\n");
printf("b)\n");
printf("c)\n");
printf("d)\n");
