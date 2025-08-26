#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    for (n = 0; n < 16; n++)
    {
        if (n < 10)
            putchar('0' + n);       // digits 0–9
        else
            putchar('a' + (n - 10)); // letters a–f
    }

    putchar('\n');
    return (0);
}
