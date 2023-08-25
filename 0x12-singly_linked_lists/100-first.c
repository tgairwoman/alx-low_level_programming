#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - prints a sentence before the main
 * function is executed
 */
void first(void)
{
	printf("Before the main function is executed, this message is display.\n");
	printf("Welcome to the program!\n");
}
