#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
int add (int a, int b) {
	printf("\nAdding 'a' and 'b'");
	return a + b;
}

int subtract(int a, int b) {
	printf("\nSubtracting 'b' from 'a'");
	return a - b;
}

int multiply(int a, int b) {
	printf("\nMultiplying 'a' by 'b'");
	return a * b;
}

int divide(int a, int b) {
	printf("\nDividing 'a' by 'b'");
	return b != 0 ? a / b : 0;
}

int endProgram(int a, int b) {
	printf("\nEnding the program");
	(void)a;
	(void)b;
	return 0;
}


int main (void)
{
	int a = 20;
	int b = 10;
	char input;

	int (*operations[5])(int, int) = {add, subtract, multiply, divide, endProgram};
	do {
		printf("\n0: add \n1: subtract \n2: multiply \n3: divide \n4: exit \n\nYour Choice: ");
		scanf("%c", &input);
		while (getchar() != '\n');
		int result = (input >= '0' && input <='3') ? operations[input - '0'](a, b) : 1;
		if (input >= '0' && input <= '3') {
			printf("\nResult: %d \n", result);
		}
	} while (input != '4');
	printf("\nExited program.\n");
	return 0;
}

