#include <stdio.h>

/**
 * main - Finds and prints the sum of even Fibci numb not exceeding 4,000,000.
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long a = 1, b = 2, c;
unsigned long sum = 2; /* Start with the first even Fibonacci number */

while (1)
{
c = a + b;
if (c > 4000000)
break;

if (c % 2 == 0)
sum += c;

a = b;
b = c;
}

printf("%lu\n", sum);

return (0);
}

