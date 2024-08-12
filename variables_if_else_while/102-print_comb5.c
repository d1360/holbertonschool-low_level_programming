/**
 * File: 102-print_comb5.c
 * Auth: Your Name
 * Desc: Prints all possible combinations of two two-digit numbers.
 *        The numbers are separated by a space and combinations are
 *        separated by a comma followed by a space. Each number is
 *        printed with two digits. No duplicate combinations are printed.
 */

#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers.
 *
 * Description: The function uses nested loops to generate and print
 *              all combinations of two two-digit numbers, where each
 *              combination is separated by a space and combinations are
 *              separated by a comma followed by a space. The output is
 *              formatted to include leading zeros for single-digit numbers.
 *
 * Return: 0 if successful.
 */
int main(void)
{
	int i, j; /* Declare variables for the loops */

	/* Loop through all combinations of two-digit numbers */
	for (i = 0; i <= 99; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			putchar((i / 10) + '0'); /* Print the tens digit of the first number */
			putchar((i % 10) + '0'); /* Print the units digit of the first number */
			putchar(' ');            /* Print a space between the two numbers */
			putchar((j / 10) + '0'); /* Print the tens digit of the second number */
			putchar((j % 10) + '0'); /* Print the units digit of the second number */

			/* Print a comma and space unless it's the last combination */
			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n'); /* Print a newline at the end */
	return (0);
}
