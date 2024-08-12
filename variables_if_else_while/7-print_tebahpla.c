#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse order.
 *
 * Description: This program prints the lowercase alphabet in reverse
 *              from 'z' to 'a', followed by a new line. It uses only
 *              the putchar function and avoids using other functions.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
