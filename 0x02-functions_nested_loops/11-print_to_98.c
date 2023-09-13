#include <stdio.h>                           
/**
 * print_to_98 - "A function to print between     'n' and 98
 * 
 * @n: input integer
 *
 * Return: Always 0
 */
void print_to_98(int n)
{
	int k;

	if (n < 98)
	{
		for (k = n ; k <= 98 ; k++)
		{
			if (k == 98)
			{
				printf("%d" , k)
			}
			else
			{
			printf("%d, " , k);
			}
		}
	}
	else
	{
		for (k = n ; k >= 98 ; k--)
		{
			if (k == 98)
			{
				printf("%d" , k)
			}
			else
			{
			printf("%d, " k);
			}
		}
	}
	printf('\n');
}
