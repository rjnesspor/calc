#include "math.h"

void add() {
	int num1;
	int num2;
	puts("Enter number #1 (x in x + y = z)");
	scanf("%d", &num1);
	puts("Enter number #2 (y in x + y = z)");
	scanf("%d", &num2);
	int res = num1 + num2;
	fprintf(stdout, "%d + %d = %d\n", num1, num2, res);
}

void sub() {
	int num1;
	int num2;
	puts("Enter number #1 (x in x - y = z)");
	scanf("%d", &num1);
	puts("Enter number #2 (y in x - y = z)");
	scanf("%d", &num2);
	int res = num1 - num2;
	fprintf(stdout, "%d - %d = %d\n", num1, num2, res);
}

void mult() {
	int num1;
	int num2;
	puts("Enter number #1 (x in xy = z)");
	scanf("%d", &num1);
	puts("Enter number #2 (y in xy = z)");
	scanf("%d", &num2);
	int res = num1 * num2;
	fprintf(stdout, "%d * %d = %d\n", num1, num2, res);
}

void div() {
	int num1;
	int num2;
	puts("Enter number #1 (x in x / y = z)");
	scanf("%d", &num1);
	puts("Enter number #2 (y in x / y = z)");
	scanf("%d", &num2);
	float res = num1 / num2;
	fprintf(stdout, "%d / %d = %f\n", num1, num2, res);
}

void squarert() {
	int num;
	puts("Enter number (x in sqrt(x))");
	scanf("%d", &num);
	double res = sqrt(num);
	fprintf(stdout, "sqrt(%d) = %f\n", num, res);
}
