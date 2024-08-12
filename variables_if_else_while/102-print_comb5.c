#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers.
 *
 * Description: This function uses nested loops to generate and print
 *              all possible combinations of two different two-digit
 *              numbers. Each combination is separated by a space, and
 *              combinations are separated by a comma followed by a space.
 *              Numbers are printed with leading zeros if necessary.
 *
 * Return: Always returns 0.
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');

			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

