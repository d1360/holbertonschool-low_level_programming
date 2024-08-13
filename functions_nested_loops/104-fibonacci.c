#include <stdio.h>

int main(void)
{
    unsigned long a_high = 0, a_low = 1;
    unsigned long b_high = 0, b_low = 2;
    unsigned long c_high, c_low;
    unsigned long max = 1000000000;

    printf("%lu, %lu", a_low, b_low);

    for (int i = 2; i < 98; i++)
    {
        c_low = a_low + b_low;
        c_high = a_high + b_high;

        if (c_low >= max) {
            c_high += 1;
            c_low -= max;
        }

        printf(", ");
        if (c_high > 0)
            printf("%lu%09lu", c_high, c_low);
        else
            printf("%lu", c_low);

        a_low = b_low;
        a_high = b_high;
        b_low = c_low;
        b_high = c_high;
    }

    printf("\n");
    return (0);
}

