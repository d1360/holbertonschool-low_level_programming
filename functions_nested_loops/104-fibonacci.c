#include <stdio.h>

int main(void)
{
    unsigned long a = 1, b = 2, c;
    int i;

    printf("%lu, %lu", a, b);

    for (i = 2; i < 98; i++)
    {
        c = a + b;
        printf(", %lu", c);
        a = b;
        b = c;
    }

    printf("\n");
    return (0);
}

