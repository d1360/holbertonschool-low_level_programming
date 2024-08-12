#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase, followed by uppercase,
 * using putchar exactly three times.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	/* Print lowercase alphabet */
	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	/* Print uppercase alphabet */
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
