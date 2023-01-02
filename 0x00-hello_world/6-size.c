#include <stdio.h>

/**
 * main - The entry point of the whole program
 * Return:
 * 0 if everything went well, non-zero otherwise.
 */
int main(void)
{
	char charVariable = 0;
	int intVariable = 0;
	long int longIntVariable = 0;
	long long int longLongIntVariable = 0;
	float floatVariable = 0;

	printf("Size of a char: %d byte(s)\n", (int) sizeof(charVariable));
	printf("Size of an int: %d byte(s)\n", (int) sizeof(intVariable));
	printf("Size of a long int: %d byte(s)\n", (int) sizeof(longIntVariable)
		);
	printf("Size of a long long int: %d byte(s)\n", (int) sizeof(
		       longLongIntVariable));
	printf("Size of a float: %d byte(s)\n", (int) sizeof(floatVariable));

	return (0);
}
