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
	for (i = 0; i < 100; i++)
	{
		for (j = i; j < 100; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			if (i != 99 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
			if (j == 99)
			{
				i++;
				j = i - 1;
			}
		}
	}
	putchar('\n');
	return (0);
}
