#include <stdio.h>

/**
 * main - A program that prints all possible
 * combinations of single-digit numbers.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	char *comma;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');

		comma = (i < 9) ? ", " : "\n";

		while (*comma)
			putchar(*(comma++));
	}

	return (0);
}
