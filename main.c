#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "mymath.h"

/**
 * The main entry point of the program. This program can perform different arithmetic operations.
 */
int main(int argc, char* argv[]) {
	while (true) {
		puts("\nSelect an operation:\n(A)ddition\n(S)ubtraction\n(M)ultiplication\n(D)ivision\n(Sq)uare Root\n(T)rigonometric Function\n(E)xit\n");
		char buff[5];
		scanf("%s", &buff);
	
		if (strcmp(buff, "A") == 0) {
			add();
		} else if (strcmp(buff, "S") == 0) {
			sub();
		} else if (strcmp(buff, "M") == 0) {
			mult();
		} else if (strcmp(buff, "D") == 0) {
			div();
		} else if (strcmp(buff, "Sq") == 0) {
			squarert();
		} else if (strcmp(buff, "E") == 0) {
			break;
		} else if (strcmp(buff, "T") == 0) {
			trig();
		} else {
			puts("Unrecognized input buffer.");
		}
	}		
	return 0;
}

