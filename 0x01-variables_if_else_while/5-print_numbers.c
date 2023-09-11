#include <stdio.h>
/**
 * main - entry point
 * Description: "print numbers"
 * Return: always zero
 */
int main(void)
{
	int num;

	for (num = 0 ; num < 10 ; num++)
	{
		printf("%d", num);
	}
	putchar('\n');
	return (0);
}
