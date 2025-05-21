#include "mymath.h"

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
	float res = (float)num1 / num2;
	fprintf(stdout, "%d / %d = %.3f\n", num1, num2, res);
}

void squarert() {
	int num;
	puts("Enter number (x in sqrt(x))");
	scanf("%d", &num);
	float res = sqrt(num);
	fprintf(stdout, "sqrt(%d) = %.3f\n", num, res);
}

void trig() {
	char buff[1];
	puts("Select a trigonometric operation:\n(S)ine\n(C)osine\n(T)angent");
	scanf("%s", &buff);
	int num;
	puts("Enter number in radians (x in sin(x))");
	scanf("%d", &num);
	if (strcmp(buff, "S") == 0) {
		float res = sin(num);
		fprintf(stdout, "sin(%d) = %.3frad\n", num, res);
	} else if (strcmp(buff, "C") == 0) {
		float res = cos(num);
		fprintf(stdout, "cos(%d) = %.3frad\n", num, res);
	} else if (strcmp(buff, "T") == 0) {
		float res = tan(num);
		fprintf(stdout, "tan(%d) = %.3frad\n", num, res);
	} else {
		puts("Unrecognized input buffer.");
	}
}
