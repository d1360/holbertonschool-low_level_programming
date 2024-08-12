#include <stdio.h>

int main(void)
{
    int i, j; /* Declare variables outside of the for loop */

    /* Loop through all combinations of two-digit numbers */
    for (i = 0; i <= 99; i++)
    {
        for (j = i + 1; j <= 99; j++)
        {
            putchar((i / 10) + '0');
            putchar((i % 10) + '0');
            putchar(' ');
            putchar((j / 10) + '0');
            putchar((j % 10) + '0');

            /* Print comma and space unless it's the last combination */
            if (i != 98 || j != 99)
            {
                putchar(',');
                putchar(' ');
            }
        }
    }
    putchar('\n'); /* Print new line at the end */
    return (0);
}
