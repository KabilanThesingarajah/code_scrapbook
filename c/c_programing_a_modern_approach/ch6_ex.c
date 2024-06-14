/* Name: ch6_ex.c */
/* Purpose: runs the exercises of c programming book */
/* Author: Kabilan Thesingarajah */

#include <stdio.h>
#include <stdbool.h>
int i, j, sum, d, n, m;

void
q6_01()
{
	i = 1;
	while(i <= 128){
		printf("%d ", i);
		i *= 2;
	}

	printf("\n Is the same as \n");
	/* will print */
	printf("1 2 4 8 16 32 64 128\n");
}

void
q6_02()
{
	i = 9384;
	do {
		printf("%d ", i);
		i /= 10;
	} while (i > 0);
	printf("\nwill print\n");
	printf("9384 938 93 9 \n");
	
}

void
q6_03()
{
	for (i = 5,  j = i - 1; i > 0, j > 0; --i, j = i - 1)
		printf("%d ", i);
	
	printf("\n");
	printf("Because we use a comma operator and not a && in the test condition, we only check if j > 0\n");
	
	for (i = 5,  j = i - 1; j > 0; --i, j = i - 1)
		printf("%d ", i);
	printf("\n");
	printf("5 4 3 2 \n");
	
	
}

void
q6_04()
{
	for (i = 0; i < 10; i++){
		printf("%d ", i);
		
	}
	printf("\n");
	
	for (i = 0; i < 10; ++i){
		printf("%d ", i);
		
	}
	printf("\n");
	
	for (i = 0; i++ < 10; ){
		printf("%d ", i);
		
	} //this loop starts with i = 1 and the rest start with i = 0
	printf("\n");
	
	
}

void
q6_05()
{
	i = 11;
	while (i < 10) {
		printf("%d\n", i);
	}
	for (; i < 10; ){
		printf("%d\n", i);
		
	}
	do { 
		printf("%d\n", i);
	} while (i < 10); //this loop will always execute the loop body at least once but the others may not.
	
}

void
q6_06()
{

	i = 1;
	while(i <= 128){
		printf("%d ", i);
		i *= 2;
	}
	printf("\n is the same as \n");
	
	for (i = 1; i <= 128; i *= 2){
		printf("%d ", i);
	}
	printf("\n");
	
}

void
q6_07()
{
	i = 9384;
	do {
		printf("%d ", i);
		i /= 10;
	} while (i > 0);

	printf("\n is the same as\n");

	for (i = 9384; i > 0; i /= 10){
		printf("%d ", i);
	}
	printf("\n");
	
	
}

void
q6_08()
{
	for (i = 10; i >= 1; i /= 2)
		printf("%d ", i++);
	
	printf("Will print\n");
	
	printf("10 5 3 2 1 1 1 1 ... \n");
	
	
}

void
q6_09()
{
	i = 10;
	while (i >= 1){
		printf("%d ", i++);
		i /= 2;
	}
}

void
q6_10()
{
	// mistake silly: forgot to decremement before condition otherwise inf loop
	i = 10;
	while (i >= -1) {
		i--;
		if (i == 0) {
			continue;
		}
		printf("%d\n", 10/i);
	}


	i = 10;
	while (i >= -1) {
		i--;
		if (i == 0) {
			goto last;
		}
		printf("%d\n", 10/i);
		last:;
	}
	
}

void
q6_11()
{
	sum = 0;
	for (i = 0; i < 10; i++) { // Mistake silly: code was hard to read, but we forgot 1 is true and 0 is false.
		if (i % 2) // i%2 = 1 => continue.
			   // think if (i % 2 == 1) or not equal to 0
			continue;
		sum += i;
		printf("%d, ", i);
		
	}
	printf("%d\n", sum);
	
	printf("Will print\n");
	printf("20, \n");
	
}

void
q6_12()
{
	n = 109;
	_Bool isPrime = true;
	for (d = 2; d*d < n; d++) {
		if (n % d == 0) {
			printf("%d is divisible by %d\n", n, d);
			isPrime = false;
			break;
		}
	}

	(isPrime)? printf("%d is prime\n", n) : printf("%d is not prime\n", n);

	isPrime = true;
	for (d = 2; d < n; d++) {
		if (n % d == 0) {
			printf("%d is divisible by %d\n", n, d);
			isPrime = false;
			break;
		}
	}

	(isPrime)? printf("%d is prime\n", n) : printf("%d is not prime\n", n);

	
}

void
q6_13()
{
	m = 100;
	for (n = 0; m > 0; m/=2,  n++) {
		printf("%d\n", m);
		
	}

	m = 100;
	for (n = 0; m > 0; n++) {
		printf("%d\n", m);
		 m/=2;
	}
	
}

void
q6_14()
{
	n = 6;
	if (n % 2 == 0) {
		printf("n is even\n");
	}
}

int
main(void)
{

	return 0;
}
