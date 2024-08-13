#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
    long long int a = 1, b = 2, c;
    int i;

    printf("%lld, %lld", a, b);

    for (i = 3; i <= 98; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf(", %lld", c);
    }
    printf("\n");

    return (0);
}
