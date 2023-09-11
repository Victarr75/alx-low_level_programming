#include <stdio.h>
/**
 * main - entry point
 * Description: "lower and uppercase"
 * Return: always 0
 */
int main(void)
{
	char L;
	char U;

	for (L = 'a' ; L <= 'z' ; L++)
	{
		putchar(L);
	}
	for (U = 'A' ; U <= 'Z' ; U++)
	{
		putchar(U);
	}
	putchar('\n');
	return (0);
}
