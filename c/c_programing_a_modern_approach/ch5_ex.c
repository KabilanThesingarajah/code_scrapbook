/* Name: ch5_ex.c */
/* Purpose: run exercises of chapter 7 */
/* Author: Kabilan Thesingarajah */

#include <stdio.h>
#define AR_LEN 9

void q5_01();
void q5_02();
void q5_03();
void q5_04();
void q5_05();
void q5_06();
void q5_07();
void q5_08();
void q5_09();
void q5_10();
void q5_11();

int i, j, k;


void
q5_01()
{
	i = 2; j = 3;
	k = i * j == 6;
	/* 2*3 is equal to 6 */
	printf("a) %d == 1?\n", k);

	i = 5; j = 10; k = 1;
	/* (k > i) returns 0, and so 0 < 10 returns 1 */
	printf("b) %d == 1?\n", k > i < j);

	i = 3; j = 2; k = 1;
	/* relational beats equality in precedence*/
	/* both relations are false, so the equality is true */
	printf("c) %d == 1?\n", i < j == j < k); // mistake silly

	i = 3; j = 4; k = 5;
	/* arithmetic beats relational */
	/* mod beats addition */
	printf("d) %d == 0?\n", i % j + i < k);


}

void
q5_02()
{
	/* correct! */
	i = 10; j = 5;
	/* ! beats relational, !i == 0 */
	printf("a) %d == 1?\n", !i < j);

	i = 2; j = 1;
	printf("b) %d == 1?\n", !!i + !j);

	i = 5; j = 0; k = -5;
	/*  */
	printf("c) %d == 1?\n", i && j || k);

	i = 1; j = 2; k = 3;
	/* left statement is true, relational beats logic */
	printf("d) %d == 1?\n", i < j || k);
}

void
q5_03()
{
	/* correct! */
	i = 3; j = 4; k = 5;
	/* short-circuit meaning rhs is not evaluated */
	printf("a) %d == 1?\n", i < j || ++j < k);
	printf("%d %d %d == 3 4 5?\n", i, j, k);

	i = 7; j = 8; k = 9;
	/*  */
	printf("b) %d == 0?\n", i - 7 && j++ < k);
	printf("%d %d %d == 7 8 9?\n", i, j, k);

	i = 7; j = 8; k = 9;
	/*  */
	printf("c) %d == 1?\n", (i = j) || (j = k) );
	printf("%d %d %d == 8 8 9?\n", i, j, k);

	i = 1; j = 1; k = 1;
	/*  */
	printf("d) %d == 1?\n", ++i || ++j && ++k);
	printf("%d %d %d == 2 1 1?\n", i, j, k);

}

int
q5_04_helper(int i, int j)
{
	return (i > j) - (i < j);
}

void
q5_04()
{
	/* correct */
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			printf("i == %d\n", i);
			printf("j == %d\n", j);
			printf("statement == %d\n", q5_04_helper(i, j));
			printf("\n");
		}
	}
}

void
q5_05()
{
	int n = 0;
	if (n >= 1 <= 10) printf("n is between 1 and 10\n");
	/* is legal but not intended, the if is equivalent to */
	if ((n >= 1) <= 10) printf("n is greater than or equal to 1\n");
	/* mistake silly */
	if ((n >= 1) <= 10) printf("n is any int\n");
 
}

void
q5_06()
{
	/* correct */
	int n = -9;
	if (n == 1 - 10) printf("n is between 1 and 10\n");
	/* is legal but not intended, the if is equivalent to */
	if (n == 1 - 10) printf("n is equal to -9\n");
}

void
q5_07()
{
	/* correct */
	/* if i >= 0 do i else do -i */
	i = 17;
	printf("%d == 17\n", i >= 0? i : -i);
	i = -17;
	printf("%d == 17\n", i >= 0? i : -i);
}

void
q5_08()
{
	int teenager, age, true, false;
	true = 1;
	false = 0;
	age = 20;
	if (13 <= age && age <= 19 )
			teenager = true;
		else
			teenager = false;
	printf("teenager is %d\n", teenager);
	
	/* furthermore */
	teenager = (13 <= age && age <= 19 )? true : false;
	printf("teenager is %d\n", teenager);

	/* even simpler */
	teenager = (13 <= age && age <= 19 );
	printf("teenager is %d\n", teenager);

}

int score = 0;

void
q5_09(int *score_ptr)
{
	/* The two if statements are equivalent */
	if (*score_ptr >= 90) {
		printf("A");
	} else if (*score_ptr >= 80) {
		printf("B");
	} else if (*score_ptr >= 70) {
		printf("C");
	} else if (*score_ptr >= 60) {
		printf("D");
	} else {
		printf("F");
	}

	
	if (*score_ptr < 60) {
		printf("F");
	} else if (*score_ptr < 70) {
		printf("D");
	} else if (*score_ptr < 80) {
		printf("C");
	} else if (*score_ptr < 90) {
		printf("B");
	} else {
		printf("A");
	}
}

void
q5_09_tester()
{
	for (score = 0; score < 100; score += 5){
		q5_09(&score);
		printf("\n");
	}
}

void
q5_10()
{
	/* correct */
	i = 1;
	switch (i % 3) {
		case 0: printf("zero"); /*@fallthrough@*/
		case 1: printf("one"); /*@fallthrough@*/
		case 2: printf("two"); /*@fallthrough@*/
	}
	/* output one two, as a switch is a jump to label, and fall-through happens */
	
}

int area_code = 0;
void
q5_11(int *area_code_ptr)
{
	switch (*area_code_ptr) {
		case 229:
			printf("Albany\n");
			break;
		case 404: case 470: case 678: case 770:
			printf("Atlanta\n");
			break;
		case 478:
			printf("Malcon\n");
			break;
		case 706: case 762:
			printf("Columbus\n");
			break;
		case 912:
			printf("Savannah\n");
			break;
	}
}

void
q5_11_tester()
{
	int area_codes[AR_LEN] = {229, 404, 470, 478, 678, 706, 762, 770, 912};
	for (int i = 0; i < AR_LEN; i++){
		printf("area code: %d ", area_codes[i]);
		q5_11(&(area_codes[i]));
	}

}


int
main(void)
{

	q5_11_tester();

	return 0;
}
