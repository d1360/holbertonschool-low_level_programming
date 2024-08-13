#include <stdio.h>

/**
 * main - Finds and prints the first 98 Fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long a = 1, b = 2, c;
int count;

printf("%lu, %lu", a, b);

for (count = 3; count <= 98; count++)
{
c = a + b;
if (count == 98)
printf(", %lu", c);
else
printf(", %lu", c);
a = b;
b = c;
}

printf("\n");

return (0);
}

