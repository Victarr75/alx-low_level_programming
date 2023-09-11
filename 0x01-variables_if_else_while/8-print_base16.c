#include <stdio.h>
/**
 * main - Entry point
 * Description: "print hexadecimal"
 * Return: Always 0
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 16; digit++)
	{
		if (digit < 10)
		{
			putchar('0' + digit);
		}
		else
		{
			putchar('a' + digit - 10);
		}
	}
	putchar('\n');
	return (0);
}
