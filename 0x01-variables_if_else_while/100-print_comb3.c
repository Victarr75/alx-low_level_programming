#include <stdio.h>
/**
 * main - entry point
 * Description: "double digit combination"
 * Return: Alway 0
 */
int main(void)
{
	int digit1, digit2;
	for (digit1 = 0 ; digit1 <=8 ; digit1++)
	{
		for (digit2 = digit1 + 1 ; digit2 <= 9 ; digit2++)
		{
			putchar('0' + digit1);
			putchar('0' + digit2);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
