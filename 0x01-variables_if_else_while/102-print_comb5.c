#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints combinations of two numbers from 0 to 99
 *              in ascending order with specific formatting.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i; j <= 99; j++)
		{
			int first_digit_i = i / 10;
			int second_digit_i = i % 10;
			int first_digit_j = j / 10;
			int second_digit_j = j % 10;
			if (i != j)
			{
				if (i < j)
				{
					putchar('0' + first_digit_i);
					putchar('0' + second_digit_i);
					putchar(' ');
					putchar('0' + first_digit_j);
					putchar('0' + second_digit_j);
				}
				else
				{
					putchar('0' + first_digit_j);
					putchar('0' + second_digit_j);
					putchar(' ');
					putchar('0' + first_digit_i);
					putchar('0' + second_digit_i);
				}
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
