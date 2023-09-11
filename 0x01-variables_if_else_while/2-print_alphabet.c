#include <stdio.h>
/**
 * main - entry point
 * description: "print alphabets"
 * return: always (0)
 */
int main()
{
	char ch;

	for(ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
