#include <stdio.h>
/**
 * main - entry point
 * Description: "combination of numbers"
 * Return: Always 0
 */
int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		putchar('0' + digit);
		if (digit < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return 0;
}

