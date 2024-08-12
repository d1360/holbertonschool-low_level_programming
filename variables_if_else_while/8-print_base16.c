#include <stdio.h>

/**
 * main - Prints all base 16 numbers in lowercase.
 *
 * Description: This program prints all hexadecimal digits from 0 to f,
 *              followed by a new line. It uses only the putchar function
 *              and avoids using other functions.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hex_digits[] = "0123456789abcdef";
	int i;

	for (i = 0; hex_digits[i] != '\0'; i++)
	{
		putchar(hex_digits[i]);
	}
	putchar('\n');

	return (0);
}
