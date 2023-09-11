#include <stdio.h>
/**
 * main - entry point
 * Description: "print numbers wth putchar"
 * Return: Always 0
 */
int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		putchar('0' + digit);
	}
	putchar('\n');
	return 0;
}
