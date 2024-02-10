#include "main.h"

/**
 * power - Calculates the value of base raised to the power of exponent.
 * @base: The base of the exponent.
 * @exponent: The exponent of the power.
 *
 * Return: The result of base raised to the power of exponent.
 */
unsigned long int power(unsigned int base, unsigned int exponent)
{
    unsigned long int result = 1;
    unsigned int i;

    for (i = 1; i <= exponent; i++)
    {
        result *= base;
    }

    return result;
}

/**
 * print_binary - Prints a decimal number in binary notation.
 * @n: The decimal number to be printed in binary notation.
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
    unsigned long int divisor, check;
    char flag;

    flag = 0;
    divisor = power(2, sizeof(unsigned long int) * 8 - 1);

    while (divisor != 0)
    {
        check = n & divisor;
        if (check == divisor)
        {
            flag = 1;
            _putchar('1');
        }
        else if (flag == 1 || divisor == 1)
        {
            _putchar('0');
        }
        divisor >>= 1;
    }
}
