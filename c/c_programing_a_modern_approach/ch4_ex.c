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
	printf("Chapter 4 question 1\n");
	int i, j;
	i = 5; j = 3;
	printf("%d %d = 1.666666 2 ?\n", i / j, i % j); // attempt: 1.666666 2
	/* sol: 1 2, mistake 1: remember the datatype is int as operands are int. */

	printf("b)\n");
	i = 2; j = 3;
	printf("%d = 0 ?\n", (i + 10) % j); // attempt: 0
	/* correct! */

	int k;
	printf("c)\n");
	i = 7; j = 8; k = 9;
	printf("%d = 1 ? \n", (i + 10) % k/j); // 1
	/* correct! */

	printf("d\n");
	i = 1; j = 2; k = 3;
	printf("%d = 0.666666 ?\n", (i + 5) % (j + 2) / k);// 0.666666
	/* sol: 0 see mistake 1 */

}


void
q4_02()
{
	/* attempt: will give the same result as they do not return anything, and have no side effect. */
	/* sol: wrong!Mistake 1: we forgot that int division is different from mathematical division, according to the answers "Not in C89. Suppose that i is 9 and j is 7. The value of (-i)/j could be either –1 or –2, depending on the implementation. On the other hand, the value of -(i/j) is always –1, regardless of the implementation. In C99, on the other hand, the value of (-i)/j must be equal to the value of -(i/j)." */
	int i, j;
	i = 5;
	j = 6;
	/* loops are yet to be seen but will use for testing. */
	for (i = -10; i < 11; i++){
		for (j = -10; j < 11; j++){
			if (j == 0){
				continue;
			}
			if ( (-i)/j != -(i/j)) {
				printf("Not passed!\n");
				return;
			}
		}
	}
	printf("It seems all tests have passed.\n");
}

void
q4_03()
{
	/* c89 */
	/* sol: recall mistake 1 */
	/* attempt: a) `8 / 5` produces `1.6` or `1` */
	printf("a)\n");
	printf("%d == 1 ?\n", 8/5);

	printf("b)\n");
	/* attempt: b) `-8 / 5` produces `-1` or `-2` */
	/* sol: only -1 or -2 */
	printf("%d == -1 or -2 ?\n", -8/5);

	printf("c)\n");
	/* attempt: c) `8 / - 5` produces `-1.6` or `-1` or `-2` */
	printf("%d == -1 or -2 ?\n", 8/-5);

	printf("d)\n");
	/* attempt d) `-8 / -5` produces `1.6` or `1` (unsure) */
	printf("%d == 1?\n", -8/-5);

}





void
q4_04()
{
	/* c99 always rounds negative numbers towards the 0. */
	printf("Question 4:\n");
	printf("a) %d == 1 ?\n", 8/5); /* attempt: a) `8 / 5` produces `1` */
	printf("b) %d == -1 ?\n", -8/5); /* attempt: b) `-8 / 5` produces `-1` */
	printf("c) %d == -1 ?\n", 8/-5); /* attempt: c) `8 / - 5` produces `-1` */
	printf("d) %d == 1 ?\n", -8/-5); /* attempt: d) `-8 / -5` produces `1` */
}


void
q4_05()
{
	/* c89 */
	printf("Question 5:\n");
	printf("a) %d == 3 ?\n", 8 % 5); /* attempt: a) `8 / 5` produces `1` */
	printf("b) %d == -3 or 2 ?\n", -8 % 5); /* attempt: b) `-8 / 5` produces `-1` */
	printf("c) %d == 3 or -2 ?\n", 8 % -5); /* attempt: c) `8 / - 5` produces `-1` */
	/* sol: mistake 2: we were thrown off our math when negative right operand was used. the congruence class of -5 is the same congruence class of 5 */
	printf("d) %d == -3 or 2 ?\n", -8 % -5); /* attempt: d) `-8 / -5` produces `1` */

}


void
q4_06()
{
	/* c99 */
	printf("Question 6:\n");
	printf("a) %d == 3 ?\n", 8 % 5); /* attempt: a) `8 % 5` produces `3` */
	printf("b) %d == -3 ?\n", -8 % 5); /* attempt: b) `-8 % 5` produces `-3` */
	printf("c) %d == 3 ?\n", 8 % -5); /* attempt: c) `8 % - 5` produces 3 */
	printf("d) %d == -3 ?\n", -8 % -5); /* attempt: d) `-8 % -5` produces `-3` */
}


void
q4_07()
{
	printf("They are not equivalent.\n");
	printf("For example if the upc is 10, then the first algorithm gives 0, but the second algorithm gives 10.\n");
	printf("This is due to modulo arithmetic.\n");
	int total = 10;
	int algo1 = 9 - ((total - 1) % 10);
	int algo2 = (10 - (total % 10));
	printf("%d != %d\n", algo1, algo2);

	total = 0;
	algo1 = 9 - ((total - 1) % 10);
	algo2 = (10 - (total % 10));
	printf("%d == %d\n", algo1, algo2);
}

void
q4_08()
{
	printf("In question 7.");
	printf("We proved that the two algorithms are not equivalent, and the line of code is that exact 2 algorithms, hence we cannot swap the two and have the same program.\n");
	 /* mistake Silly: we did not see the % 10 at the end, which makes the previous counter example void. */

	int total, algo1, algo2;
	total = 0;
	algo1 = 9 - ((total - 1) % 10);
	algo2 = (10 - (total % 10)) % 10;
	printf("%d != %d\n", algo1, algo2);

	/* mistake 3: our math was right, but we must recall that the computational operation gives us different answers. Here we need to pay attention to the sign of algo1,  -1 % 10 = -1*/
}


void
q4_09()
{
	printf("a)");
	int i, j;
	i = 7; j = 8;
	i *= j + 1;
	printf("%d %d == 63 8 ?\n", i, j);

	printf("b)");
	int k;
	i = j = k = 1;
	i += j += k;
	printf("%d %d %d == 3 2 1 ?\n", i, j, k);

	printf("c)");
	i = 1; j = 2; k = 3;
	i -= j -= k;
	printf("%d %d %d == 2 -1 3 ?\n", i, j, k);

	printf("d)");
	i = 2; j = 1; k = 0;
	i *= j *= k;
	printf("%d %d %d == 0 0 0 ?\n", i, j, k);

	/* correct! */
}


void
q4_10()
{
	printf("a)");
	int i, j;
	i = 6;
	j = i += i; // TODO what is the precedence?
	printf("%d %d == 12 12 ?\n", i, j);

	printf("b)");
	i = 5;
	j = (i -= 2) + 1;
	printf("%d %d == 3 4 ?\n", i, j);

	printf("c)");
	i = 7;
	j = 6 + (i = 2.5);
	printf("%d %d == 2 8 ?\n", i, j);

	printf("d)");
	i = 2; j = 8;
	j = (i = 6) + (j = 3); // undefined behaviour
	printf("%d %d == 6 9 ?\n", i, j);
}


void
q4_11()
{
	printf("Question 11:\n");

	printf("a)");
	int i, j, k;
	i = 1;
	printf("%d == 0 ?\n", i++ - 1); // 0
	printf("%d == 0 ?\n", i); // Mistake Silly, silly forgetting that i was incremented.

	printf("b)");
	i = 10; j = 8;
	printf("%d == 1 ?\n", i++ - ++j); // 1
	printf("%d %d == 11 9 ?\n", i, j); // 11 9

	printf("c)");
	i = 7; j = 8;
	printf("%d == 1 ?\n", i++ - ++j); // 1 Mistake Silly
	printf("%d %d == 11 9 ?\n", i, j); // 11 9 Mistake Silly

	printf("d)");
	i = 3; j = 4; k = 5;
	printf("%d == 2 ?\n", i++ - ++j + --k); // 2
	printf("%d %d %d == 4 4 4 ?\n", i, j, k); // 4 4 4 Mistake Silly
}

void
q4_12()
{
	printf("a)");
	int i, j;
	i = 5;
	j = ++i * 3 - 2;
	printf("%d %d == 6 16 ?\n", i, j); // 6 16
	printf("b)");
	i = 5;
	j = 3 - 2 * i++;
	printf("%d %d == 6 -7 ?\n", i, j); // 6 -7
	printf("c)");
	i = 7;
	j = 3 * i-- + 2;
	printf("%d %d == 6 23 ?\n", i, j); // 6 23 mistake 5: had postfix and prefix mixed up
	printf("d)");
	i = 7;
	j = 3 + --i * 2;
	printf("%d %d == 6 15 ?\n", i, j); // 6 15
}
void
q4_13()
{
	printf("unsure, but guessing `i++` is the equivalent notation to `i += 1`\n");
	 /* wrong according to answers "The expression ++i is equivalent to (i += 1). The value of both expressions is i after the increment has been performed." */
}


void
q4_14()
{

	printf("a)\n");
	/* a) `a * b - c * d + e` is equivalent to `((a * b) - (c * d)) + e` as multiplication has a higher precedence to addition and it is left associative*/
	printf("b)\n");
	/* b) `a / b % c / d` is equivalent to `((a / b) % c) / d` as they all have the same precedence and are left associative*/
	printf("c)\n");
	/* c) `- a - b + c - + d` is equivalent to `( ( ( (-a) - b) + c) - (+d))` as unary + has higher precedence*/
	printf("d)\n");
	/* d) `a * - b / c - d` is equivalent to `( (a * (- b) ) / c) - d)` */

}


void
q4_15()
{
	/* correct! */
	int i, j;
	i = 1;
	j = 2;

	printf("a)\n");
	/* a) `i += j; // i = 3, j = 2` */
	i += j;
	printf("%d %d == 3 2 ?\n", i, j);

	printf("b)\n");
	i = 1;
	j = 2;
	i--;
	printf("%d %d == 0 2 ?\n", i, j);
	/* b) `i--; // i = 0, j = 2` */

	printf("c)\n");
	i = 1;
	j = 2;
	i * j;
	printf("%d %d == 1 2 ?\n", i, j);
	/* c) `i * j / 1; // i = 1, j = 2` */

	printf("d)\n");
	i = 1;
	j = 2;
	i % ++j;
	printf("%d %d == 1 3 ?\n", i, j);
	/* d) `i % ++j; // i = 1, j = 3` */
}

int
main(void)
{

	printf("please edit the source code to see the output of each question, and the comments which explain the reasoning.\n");


	return 0;
}
