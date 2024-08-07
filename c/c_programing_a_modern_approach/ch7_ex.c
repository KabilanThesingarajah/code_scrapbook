/* Name: ch7_ex.txt */
/* Purpose: runs the exercises of the c programming book */
/* Author: Kabilan Thesingarajah */

#include <stdio.h>

void q7_01();
void q7_02();
void q7_03();
void q7_04();
void q7_05();
void q7_06();
void q7_07();
void q7_08();
void q7_09();
void q7_10();
void q7_11();
void q7_12();
void q7_13();
void q7_14();
void q7_15();

/* question 15 */
typedef short Int8;
typedef int Int16;
typedef long int Int32;

void
q7_01()
{
	int a = 077;
	printf("%d is the same as 63\n", a);
	a = 0x77;
	printf("%d is the same as 119\n", a);
	a = 0XABC;
	printf("%d is the same as 2748\n", a);
	
}

void
q7_02()
{
	int a = 010E2; //legal both as an int and a float. E2 is 16^2
	int b = 32.1E+5; //legal via inspection
	int c = 0790; // legal (mistake as 9 is not an octal number)
	int d = 100_000; //illegal as float or integer as c does not allow _ for clarity
	int e = 3.978e-2; //legal
}

void
q7_03()
{
	short unsigned int; // legal
	short float; // illegal
	long double; // legal
	unsigned long; // legal
}

void
q7_04()
{
	char c;
	int i;

	i += c;
	c = 2 * c - 1;
	putchar(c);
	printf(c); //illegal (legal but warning)
}

void
q7_05()
{
	0b1000001;//is illegal but is a gnu extension
}

void
q7_06()
{
	char a = 31;
	short b = 365;
	short c = 60*24;
	long int d = 60*60*24;
}

void
q7_07()
{
	printf("\b is \10 in octal\n");
	printf("\n is \12 in octal\n");
	printf("\r is \15 in octal\n");
	printf("\t is \11 in octal\n");
}

void
q7_08()
{
	printf("\b is \x08 in hex\n");
	printf("\n is \x0a in hex\n");
	printf("\r is \x0d in hex\n");
	printf("\t is \x09 in hex\n");
}

void
q7_09()
{
	printf("In c89 the type is of unsigned int\n");
	printf("char turns to int, then TODO\n");
	
	printf("In c89 the type is of long int\n");
}

void
q7_10()
{
	int i;
	long j;
	uint k;
	printf("Long long\n");
	
}

void
q7_11()
{
	printf("Order of operations\n");
	printf("(i * f)/ d \n");
	printf("(\"float\") / d\n");
	printf("\"double\"\n");
	
	
}

void
q7_12()
{
	printf("i + f => i gets promoted to float\n");
	printf("d = \"f\" => f gets converted to d\n");
	
}

void
q7_13()
{
	printf("a) long\n");
	printf("b) long\n");
	printf("c) float\n");
	printf("d) double\n");
	printf("e) double\n");
	printf("f) int\n");
}

void
q7_14()
{
	printf("Yes, always\n"); // wrong as if f is negative then it doesn't work, and when the floating point number is very large.
}

void
q7_15()
{
	
}

int
main(void)
{

	

	return 0;
}
