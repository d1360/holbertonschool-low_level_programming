#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: Always 0.
 */
int main(void)
{
int count;
unsigned long a = 1, b = 2, c;

printf("%lu, %lu", a, b);
for (count = 3; count <= 50; count++)
{
c = a + b;
if (count == 50)
printf("%lu\n", c);
else
printf(", %lu", c);

a = b;
b = c;
}

return (0);
}

