#include "main.h"

/**
* print_alphabet - Prints the alphabet in lowercase, followed by a new line
 *
 * Description: This function uses _putchar to print all lowercase
 * letters from 'a' to 'z', and ends with a new line.
 *
 * Return: void
*/
void print_alphabet(void)
{
char ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
}

